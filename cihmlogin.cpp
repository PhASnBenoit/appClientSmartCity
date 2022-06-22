#include "cihmlogin.h"
#include "ui_cihmlogin.h"


CIhmLogin::CIhmLogin(CIhm *ihm, QDialog *parent) :
    QDialog(parent),
    ui(new Ui::CIhmLogin)
{
    ui->setupUi(this);
    ui->buttonBox->setFocusPolicy(Qt::NoFocus);
    _ihm = ihm;
    connect(this, &CIhmLogin::sig_infoLogin, _ihm, &CIhm::on_infoLogin);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &CIhmLogin::on_ok);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &CIhmLogin::reject);

    tmr = new QTimer(this);
       connect(tmr, &QTimer::timeout, [this]{
           ui->buttonBox->setEnabled(true);
       });

}

CIhmLogin::~CIhmLogin()
{
    delete ui;
}

/*-----------------------------------------------------------------------

                                LOGIN

------------------------------------------------------------------------*/

void CIhmLogin::on_ok()
{

    // Numéro de Port
    _port = ui->lePort->text();

    // Adresse IP
    _ip = ui->leIp->text();

    // Mot de passe
    _pswd = ui->lePassword->text();

    // Indentifiant
    _login = ui->leLogin->text();

    tmr->start();
        tmr->setInterval(3000);

        ui->buttonBox->setEnabled(false);

    connect(&_sock, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    _sock.connectToHost(_ip, _port.toInt());
    if (!_sock.isOpen()) {
        qDebug() << "Connexion au serveur HS !";
        QMessageBox::warning(this, tr("Erreur"), tr("Erreur programme.\nVeuillez réessayer")); // Message d'avertissement
        ui->buttonBox->setEnabled(true);
    } // if erreur

    QByteArray trame =  contructTrame();
    int nb = _sock.write(trame.toStdString().c_str());
    if (nb == -1){
        ui->buttonBox->setEnabled(true);
        qDebug() << "CClientTcp::emettre Erreur écriture.";

        if(!&QDialogButtonBox::accepted){
            ui->buttonBox->setEnabled(false);
        }
    }

}

void CIhmLogin::onReadyRead()
{
    int nb = _sock.bytesAvailable();
    qDebug() << nb << " octets à lire : ";

    QByteArray data;
    _ts = _sock.readAll();
    qDebug() << "CIhmLogin::onReadyRead " << _ts;

    bool ver = verifier();
    if(ver){
        this->hide();
        emit accept();
        sig_infoLogin(_ip, _port.toInt());
    } else {
        QMessageBox::warning(this, tr("Erreur"), tr("L'indentifiant ou le mot de passe est incorrect.\nVeuillez réessayer")); // Message d'avertissement
        ui->buttonBox->setEnabled(true);
    }
    _ts.clear();
    _sock.close();
}

QByteArray CIhmLogin::contructTrame()
{//root
    QByteArray trame =":";
    QByteArray contTrame = "00010000005FA1000C0002040";
    contTrame += _login;
    int i = 32-_login.size();
    for (int u = 0; i!=u ; u++) {
        contTrame += " ";
    }
    contTrame += _pswd;
    i = 32-_pswd.size();
    for (int u = 0; i!=u ; u++) {
        contTrame += " ";
    }
    uint16_t crc16calc = calculCrc16(contTrame);
    QString crcCalcString = QString::number( crc16calc, 16 ).toUpper();
    QByteArray crcCalcArray = crcCalcString.toLatin1();

    contTrame += crcCalcArray;
    trame += contTrame;
    trame += ":";
    qDebug() << contTrame;
    return trame;
}

uint16_t CIhmLogin::calculCrc16(QByteArray a)
{
    uint8_t nbDec;
    uint8_t yaun;
    uint8_t indice;
    uint16_t crc;

    crc = 0xFFFF;
    indice = 0;

    do {
        crc ^= a[indice];
        nbDec = 0;

        do {
            if ( (crc&0x0001) == 1)
                yaun = 1;
            else
                yaun = 0;
            crc >>= 1;
            if (yaun == 1)
                crc ^= 0xA001;
            nbDec++;
        } while (nbDec < 8);
        indice++;
    } while (indice < (a.size()-3));

    return crc;
}

bool CIhmLogin::verifier()
{
    //*******************"enlève les ::"**************//
    //test et purge début trame
    int deb = _ts.indexOf(":",0); // recherche début trame
    if (deb == -1) { // si pas de car de début
        return 0;
    } // if pas de car de debut
    // test et purge fin de trame
    int fin = _ts.indexOf(":",1);
    if (fin == -1) return 0; // on attend la suite
    _ts.remove(fin, _ts.size()-fin);  // au cas ou, on enlève tout après la fin
    _ts.remove(0, deb+1);  // on enlève tout avant le : au cas ou
    //************************************************//

    //******************VERIFIER LE CRC*****************//
    QByteArray crc16array = _ts.right(4);
    QString stringCrc16 = QString::fromStdString(crc16array.data());
    uint crc16 = stringCrc16.toUInt(nullptr,16);
    //on récupere le Crc de la trame
    _ts = _ts.left(_ts.size()-4);//on enleve le Crc de la trame
    uint16_t crc16Calc = calculCrc16(_ts);//on calcule le crc de la trame
    //qDebug () << "taille trame = " << _ts.size() << ", trame : "<< _ts ;
    if (crc16 != crc16Calc){
        qDebug() << "CRC16 mauvais";
        qDebug () << "crc = " << crc16 << " crc calculé = "<< crc16Calc ;
        return 0;
    }//test CRC
    //************************************************//

    //**********************VERIFIE CHAQUE PARTIE**************************//
    QByteArray transIdent = takeCharacter(4);
    if (transIdent != "0001") {
        qDebug() << "Transaction Identifier mauvais";
        return 0;
    }//test transaction IDENT

    QByteArray protIdent = takeCharacter(4);
    if (protIdent != "0000") {
        qDebug() << "Protocol identifier mauvais";
        return 0;
    }//test Protocol identifier

    QByteArray lenght = takeCharacter(4);
    QString stringLenght = QString::fromStdString(lenght.data());
    uint uint_lenght = stringLenght.toUInt(nullptr,16);//29
    if (static_cast<int>(uint_lenght) != _ts.size()+2+4+4+4+4) {
        qDebug() << "taille mauvaise";
        qDebug() << uint_lenght << " taille" << _ts.size()+2+4+4+4+4 ;
        return 0;
    }//test taille  29

    QByteArray UnitIdent = takeCharacter(1);
    int mode = 0;
    if (UnitIdent == "P") mode = 1;
    if (UnitIdent == "E") mode = 2;
    if (UnitIdent == "I") mode = 3;
    if (UnitIdent == "A") mode = 4;
    if (mode == 0){ //on les compares
        qDebug() << "mode mauvais";
        return 0;
    }//test mode

    QByteArray functionCode = takeCharacter(2);
    if ( functionCode != "10" && functionCode != "03" && functionCode != "04"){
        qDebug() << "fonction mauvais";
        return 0;
    }//test fonction
    //************************************************//

    //******************Test mots*********************//
    QByteArray firstWordExec = takeCharacter(4);
    if (protIdent != "0000") {
        qDebug() << "Premier mots";
        return 0;
    }//test premier mot

    QByteArray nrbOfWordsExec = takeCharacter(4);
    if ( nrbOfWordsExec == "0020"){
        return 1;
    }
    return 0;
    //*************************************************//

}

QByteArray CIhmLogin::takeCharacter(int nbOfBytes)
{
    QByteArray byteArrayTaked = _ts.left(nbOfBytes);
    _ts = _ts.right(_ts.size()-nbOfBytes);
    return byteArrayTaked;//retourne les nbOfBytes premiers caractères de _tc
}

void CIhmLogin::on_radioButton_clicked()
{
    QMessageBox::warning(this, tr("Aide"), tr("L'adresse Ip doit être en notation CIDR sans le masque")); // Message d'avertissement
}
