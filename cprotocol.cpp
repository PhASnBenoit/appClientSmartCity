#include "cprotocol.h"

CProtocol::CProtocol(QObject *parent) : QObject(parent)
{

}

CProtocol::~CProtocol()
{

}

// Prépare la trame de lecture modbus
void CProtocol::on_lectureCommande(int commande, QByteArray val1, QByteArray val2)
{
    //creation de la trame
    _compteurTClient++; // Synchronisation des demande au serveur et des réponses
    if (_compteurTClient == 10) _compteurTClient = 0;

    _tc[_compteurTClient] =":";//tout début
    QByteArray data = "00010000001D";//début de la trame

    switch (commande) {//Unit identifier
    case 1 ... 2://parking
        data += "P";
        break;
    case 3://Eclairage
        data += "E";
        break;
    case 4://intersection
        data += "I";
        break;
    case 5://Places
        data += "L";
        break;
    }
    data += "03"; // 03 car lecture

    switch (commande) { // --- Adresse du premier mot & nb de mots
    case 1://parking
        data += "00A1"; // adr états boutons et appels
        data += "0001";
        break;
    case 2://RFID
        data += "00A2";  // RFID entrée & Sortie
        data += "0006";  // 12 octets contenant les RFID E/S
        break;
    case 3://éclairage
    {
        QString stringVal1 = QString::fromStdString(val1.data());//Conversion en String de val1 (20)
        uint uintVal1 = stringVal1.toUInt()-1+32;//Conversion en uint=32 (32 car lecture seule & -1 car la carte 1 est à l'adresse 0)
        stringVal1 = QString::number( uintVal1, 16 ).toUpper();// Conversion en hexa+maj
        val1 = stringVal1.toLatin1();//Conversion en qByteArray
        if (val1.size() == 2) data += "00"; // Rajouter 2 zéros si dans val1 il y a 2 caractères
        if (val1.size() == 1) data += "000"; // Rajouter 3 zéros si dans val1 il y a 1 caractère
        data += val1; // Ajout adresse 1er mot

        QString stringVal2 = QString::fromStdString(val2.data());// Conversion en String de val2  (32)
        uint uintVal2 = stringVal2.toUInt();//32
        uint nbrOfWords = uintVal2 - (uintVal1-32);// calcul du nombre de mots
        QString stringNbrOfWords = QString::number( nbrOfWords, 16 ).toUpper();// Conversion en hexa+maj
        QByteArray QNbrOfWords = stringNbrOfWords.toLatin1();//conversion en qByteArray
        if (QNbrOfWords.size() == 2) data += "00";
        if (QNbrOfWords.size() == 1) data += "000";
        data += QNbrOfWords;//nb de mots
    }
        break;
    case 4://intersection
        data += "00AB";
        data += "0001";
        break;
    case 5:// Places de parking
        data += "00B00001";
        break;
    } // sw

    uint16_t crc16Calc = calculCrc16(data);//Calcul du CRC16
    QString crcCalcString = QString::number( crc16Calc, 16 ).toUpper();// Conversion en hexa+maj
    QByteArray crcCalcArray = crcCalcString.toLatin1();//conversion en qByteArray
    if (crcCalcArray.size() == 1) data += "000";
    if (crcCalcArray.size() == 2) data += "00";
    if (crcCalcArray.size() == 3) data += "0";
    data += crcCalcArray;

    _tc[_compteurTClient] += data;
    _tc[_compteurTClient] +=":";
    emit sig_envoieMess(_tc[_compteurTClient]); // Envoie de la trame dans CCommuniquer

}

void CProtocol::on_ecritureCommande(int commande, QByteArray val1, QByteArray val2)
{
    _compteurTClient++; // Synchronisation des demande au serveur et des réponses
    if (_compteurTClient == 10) _compteurTClient = 0;

    _tc[_compteurTClient] =":";

    // ----- MBAP header ----->
    QByteArray data = "00010000";

    // ----- LENGTH ----->
    QByteArray length = "0000";
    data += length;

    //----- UNIT IDENTIFIER ----->
    switch (commande) {//Unit identifier
    case 1 ... 2://si parking
        data += "P";
        break;
    case 3 ... 5://si eclairage
    case 35:
        data += "E";
        break;
    case 6 ... 8://si intersection
        data += "I";
        break;
    }

    // ----- FONTION CODE ----->
    data += "10";

    // ----- DATA ----->
    switch (commande) {
    case 1:// Si parking
    {
        data += "00A0";//addr 1er mot
        data += "0001";//nbr de mots
        data += "02";//nbr d'octets à forcer
        if (val1 == "ouvrir"){
            if (val2 == "entree") data += "0001";
            if (val2 == "sortie") data += "0004";
        }
        if (val1 == "fermer"){
            if (val2 == "entree") data += "0002";
            if (val2 == "sortie") data += "0008";
        }
    }
        break;
    case 2:// Si ecran
    {
        data += "0080";
        data += "0010";
        data += "20";
        data += val1;//caractères
        for (int i=0; i != 16-val1.size() ;i++){
            data += " ";
        }//permet de combler la place
        data += val2;//caractères
        for (int i=0; i != 16-val2.size() ;i++){
            data += " ";
        }//permet de combler la place
    }
        break;
    case 3 ... 5:// Si eclairage
    case 35:
    {
        QString stringVal1 = QString::fromStdString(val1.data());//String
        uint uintVal1 = stringVal1.toUInt()-1;//to uint =0
        stringVal1 = QString::number( uintVal1, 16 ).toUpper();//hexa+maj
        val1 = stringVal1.toLatin1();//qByteArray "0"
        if (val1.size() == 2) data += "00";
        if (val1.size() == 1) data += "000";
        data += val1;//adresse 1er mot

        QString stringVal2 = QString::fromStdString(val2.data());
        uint uintVal2 = stringVal2.toUInt();//32
        uint nbrOfWords = uintVal2 - uintVal1;//32
        QString stringNbrOfWords = QString::number( nbrOfWords, 16 ).toUpper();
        QByteArray QNbrOfWords = stringNbrOfWords.toLatin1();//"20"
        if (QNbrOfWords.size() == 2) data += "00";
        if (QNbrOfWords.size() == 1) data += "000";
        data += QNbrOfWords;//nbr de mots

        uint nbrOctets = 2*nbrOfWords;// nb d'octets = 2* nb de mots
        QString stringNbrOctets = QString::number( nbrOctets, 16 ).toUpper();
        QByteArray QNbrOctets = stringNbrOctets.toLatin1();//"40"
        if (QNbrOfWords.size() == 1) data += "0";
        data += QNbrOctets;// Nb d'octets

        for (int i=0; i!=int(nbrOfWords) ;i++) // Nombre de mots * data (nb de cartes d'éclairage * valeur)
            switch (commande) {
            case 3: // 100%
                data += "0003";
                break;
            case 4: // 50 %
                data += "0001";
                break;
            case 5: // éteint
                data += "0000";
                break;
            case 35: // Test lampadaires
                data += "0004";
                break;
            }
    }
        break;
    case 6 ... 8:// Si intersection
    {
        data += "00AA"; // Adresse du 1er mot
        data += "0001"; // Nb de mots
        data += "02"; // Nb d'octets à forcer (=nb de mots * 2)

        // Valeur des mots à forcer
        if (commande == 6) data += "0001";//auto
        if (commande == 7) data += "0000";//orange clignotant
        if (commande == 8){//manuel
            int value = 2;
            if (val1 == "1"){ // voie 1(axe)
                value += 64; // Si voie 1 activé alors le 6eme bit est à 1 donc 64
                if (val2 == "vert") value += 4;
                if (val2 == "orange") value += 8;
                if (val2 == "rouge") value += 4+8;
            }
            if (val1 == "2"){
                value += 128;
                if (val2 == "vert") value += 16;
                if (val2 == "orange") value += 32;
                if (val2 == "rouge") value += 16+32;
            }
            QString stringValue = QString::number( value, 16 ).toUpper(); // Conversion en héxa
            QByteArray QValue = stringValue.toLatin1(); // Conversion en QByteArray
            if (QValue.size() == 3) data += "0";
            if (QValue.size() == 2) data += "00";
            if (QValue.size() == 1) data += "000";
            data += QValue;
        }

    }
        break;
    }

    // ----- CALCUL LENGTH ----->
    QByteArray dataTIPI = data.left(8); // On récupère les TRANSACTION IDENTIFIER et PROTOCOL IDENTIFIER
    QByteArray newData = data.right(data.size()-12); // On récupère la partie à droite de length (sauf crc)
    int intLength = dataTIPI.size() + 4 + newData.size() + 4 + 2 ;//taille dataTIPI + 4 (length) + taille newData + 4 (crc) + 2 (:)
    QString stringLength = QString::number( intLength, 16 ).toUpper();//conversion hexadécimale
    length = stringLength.toLatin1();//convertion QByteArray
    if (length.size() == 3) dataTIPI += "0";
    if (length.size() == 2) dataTIPI += "00";
    if (length.size() == 1) dataTIPI += "000";
    data = dataTIPI + length + newData;//en refais la trame

    // ----- CALCUL CRC16 ----->
    uint16_t crc16Calc = calculCrc16(data);//calcul du CRC16
    QString crcCalcString = QString::number( crc16Calc, 16 ).toUpper();//conversion hexadécimale
    QByteArray crcCalcArray = crcCalcString.toLatin1();//convertion QByteArray
    if (crcCalcArray.size() == 3) data += "0";
    if (crcCalcArray.size() == 2) data += "00";
    if (crcCalcArray.size() == 1) data += "000";
    data += crcCalcArray;//ajout du CRC16 dans la trame


    _tc[_compteurTClient] += data; // On rajoute data dans le tableau Trame Client
    _tc[_compteurTClient] += ":";//encapsulation dans les '::'

    emit sig_envoieMess(_tc[_compteurTClient]); // Envoie de la trame dans CCommuniquer
}

void CProtocol::on_repServ(QByteArray reponse) // Quand on reçoit la trame de réponse transmis par CCommuniquer
{
    _compteurTServeur++; // Synchronise les demandes au serveur et les réponses
    if (_compteurTServeur == 10) _compteurTServeur = 0;
    _ts[_compteurTServeur] = reponse;

    bool crash = false; // Si crash = true, le signal ne sera pas envoyé à CIhm
    bool etat = 0;

    //----- DECODAGE DES :: ----->
    int deb = _ts[_compteurTServeur].indexOf(":",0); // recherche début trame
    if (deb == -1) { // si pas de car de début
        crash = true;
    } // if pas de car de debut
    // test et purge fin de trame
    int fin = _ts[_compteurTServeur].indexOf(":",1);
    if (fin == -1) crash = true; // on attend la suite
    _ts[_compteurTServeur].remove(fin, _ts[_compteurTServeur].size()-fin);  // au cas ou, on enlève tout après la fin
    _ts[_compteurTServeur].remove(0, deb+1);  // on enlève tout avant le : au cas ou
    //les :: sont donc enlevés

    //----- CRC16 ----->
    QByteArray crc16array = _ts[_compteurTServeur].right(4);//on récupere le Crc de la trame
    QString stringCrc16 = QString::fromStdString(crc16array.data()); // Conversion en String
    uint crc16 = stringCrc16.toUInt(nullptr,16);
    _ts[_compteurTServeur] = _ts[_compteurTServeur].left(_ts[_compteurTServeur].size()-4);//on enleve le Crc de la trame
    uint16_t crc16Calc = calculCrc16(_ts[_compteurTServeur]);//on calcule le crc de la trame
    if (crc16 != crc16Calc){
        qDebug() << "CRC16 mauvais";
        qDebug () << "crc = " << crc16 << " crc calculé = "<< crc16Calc ;
        crash = true;
    }//test CRC

    QByteArray transIdent = takeCharacter(4);
    if (transIdent != "0001") {
        qDebug() << "Transaction Identifier mauvais";
        crash = true;
    }//test transaction IDENT

    QByteArray protIdent = takeCharacter(4);
    if (protIdent != "0000") {
        qDebug() << "Protocol identifier mauvais";
        crash = true;
    }//test Protocol identifier

    QByteArray lenght = takeCharacter(4);
    QString stringLenght = QString::fromStdString(lenght.data());
    uint uint_lenght = stringLenght.toUInt(nullptr,16);//29
    if (static_cast<int>(uint_lenght) != _ts[_compteurTServeur].size()+2+4+4+4+4) { // Recalcule la taille (vérification)
        // static_cast (conversion en int)
        // taille du reste de la trame + 2 (:) + 4(crc) + 4(transactionIdent) + 4(protocolIdent) + 4(length)
        qDebug() << "taille mauvaise";
        qDebug() << uint_lenght << " taille" << _ts[_compteurTServeur].size()+2+4+4+4+4 ;
        crash = true;
    }

    QByteArray UnitIdent = takeCharacter(1);
    int mode = 0;
    if (UnitIdent == "P") mode = 1;
    if (UnitIdent == "E") mode = 2;
    if (UnitIdent == "I") mode = 3;
    if (UnitIdent == "A") mode = 4;
    if (UnitIdent == "L") mode = 5;
    if (mode == 0){ //on les compare
        qDebug() << "mode mauvais";
        crash = true;
    }//test mode

    QByteArray functionCode = takeCharacter(2);
    if ( functionCode != "10" && functionCode != "03" && functionCode != "04"){
        qDebug() << "fonction mauvais";
        crash = true;
    }//test fonction

    int nbrDeCarac = 0;
    QByteArray QvaleurAForcer;
    QByteArray QnbrDeCarac;

    QByteArray firstWord;
    switch (functionCode.toUInt(nullptr,16)) {
    case 16 ://ecriture
    {
        if (_tc[_compteurTClient].left(1+4+4+4+1+2+4).right(4) == takeCharacter(4))
            //si (récupération addr 1er mot de la trame client) == (addr 1er mot forcé de la trame serveur)
        {
            if(_tc[_compteurTClient].left(1+4+4+4+1+2+4+4).right(4) == takeCharacter(4)){
                //si (récupération nbr de mots à forcer de la trame client) == (nbr de mots forcés de la trame serveur)
                etat = true;
            }
        }else{
            crash = true;
            qDebug() << "erreur addresse premier mot";
        }

        if (!crash){

            firstWord = _tc[_compteurTServeur].left(1+4+4+4+1+2+4).right(4);//addr 1er mot

            nbrDeCarac = _tc[_compteurTServeur].left(1+4+4+4+1+2+4+4).right(4).toInt(nullptr, 16)*4;
            //recupere le nombre de mots à forcer en int * 4 (car 1 mot = 4 caractères)

            QnbrDeCarac = _tc[_compteurTServeur].left((1+4+4+4+1+2+4+4+2)+(nbrDeCarac));
            QvaleurAForcer = QnbrDeCarac.right(QnbrDeCarac.size()-26);
            //permet de récuperer la valeur des mots à forcer

            emit sig_ecritureRep(firstWord, etat, QvaleurAForcer);
        }
    }
        break;
    case 3:
    case 4://lecture
    {
        if(_tc[_compteurTClient].right(9).left(4).toInt(nullptr,16) != takeCharacter(2).toInt(nullptr,16)/2){
            //si (on recupere le nombre de mots de la trame client) est différent (on recupere le nombre d'octets lus /2)
            crash = true;
            qDebug()<<"erreur nombres d'octets lus";
        }
        if (!crash)
            emit sig_lectureRep(_tc[_compteurTServeur].left(1+4+4+4+1+2+4).right(4) ,_ts[_compteurTServeur]);
        break;
    }
    }
}

uint16_t CProtocol::calculCrc16(QByteArray a)// bon
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

QByteArray CProtocol::takeCharacter(int nbOfBytes)
{
    QByteArray byteArrayTaked = _ts[_compteurTServeur].left(nbOfBytes);
    _ts[_compteurTServeur] = _ts[_compteurTServeur].right(_ts[_compteurTServeur].size()-nbOfBytes);
    return byteArrayTaked;//retourne les nbOfBytes premiers caractères de tc
}
