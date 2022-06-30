#include "cihm.h"
#include "ui_cihm.h"
#include "ui_cihmlogin.h"

int octet;

CIhm::CIhm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CIhm)
{
    _barriere = 0;
    _barriere2 = 0;
    _lamp = 0;

    // ------------ Gestion labels ------------>
    ui->setupUi(this);
    ui->lAppelR->hide();

    ui->lBarriereV2->hide();
    ui->lBarriereV->hide();
    ui->lBarriereR->hide();
    ui->lBarriereR2->hide();

    ui->lamp50_1->hide();
    ui->lamp50_2->hide();
    ui->lamp50_3->hide();
    ui->lamp100_1->hide();
    ui->lamp100_2->hide();
    ui->lamp100_3->hide();


    ui->feuxOff->show();
    ui->feuxRouge->hide();
    ui->feuxVert->hide();
    ui->feuxOrange->hide();
    ui->feux2Off->show();
    ui->feux2Rouge->hide();
    ui->feux2Vert->hide();
    ui->feux2Orange->hide();

    ui->lVoiture1->setVisible(false);
    ui->lVoiture2->setVisible(false);
    ui->lVoiture3->setVisible(false);
    ui->lVoiture4->setVisible(false);
    ui->lVoiture5->setVisible(false);
    ui->lVoiture6->setVisible(false);
    ui->lVoiture7->setVisible(false);
    ui->lVoiture8->setVisible(false);

    // ------------ Gestion QTimer ------------>
    _timer = new QTimer();
    _timer->setInterval(500);


    connect(_timer, &QTimer::timeout, this, &CIhm::on_timeout);
    ui->comboBox->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(0);
    ui->teLamp->setFontWeight(QFont::Bold);
    ui->teParking->setFontWeight(QFont::Bold);
    ui->teInter->setFontWeight(QFont::Bold);

    // Selection automatique désactivée
    ui->comboBox->setFocusPolicy(Qt::NoFocus);
    ui->comboBox_2->setFocusPolicy(Qt::NoFocus);
    ui->pb100->setFocusPolicy(Qt::NoFocus);
    ui->pb50->setFocusPolicy(Qt::NoFocus);
    ui->pbOffLamp->setFocusPolicy(Qt::NoFocus);
    ui->pbRecupLamp->setFocusPolicy(Qt::NoFocus);
    ui->pbTestInter->setFocusPolicy(Qt::NoFocus);
    ui->pbTestParking->setFocusPolicy(Qt::NoFocus);
    ui->pbOuvrirB->setFocusPolicy(Qt::NoFocus);
    ui->pbOuvrirB_2->setFocusPolicy(Qt::NoFocus);
    ui->pbFermerB->setFocusPolicy(Qt::NoFocus);
    ui->pbFermerB_2->setFocusPolicy(Qt::NoFocus);
    ui->pbLecRFID->setFocusPolicy(Qt::NoFocus);
    ui->pbClear_3->setFocusPolicy(Qt::NoFocus);
    ui->pbClear_5->setFocusPolicy(Qt::NoFocus);
    ui->pbClear_4->setFocusPolicy(Qt::NoFocus);
    ui->pbAuto->setFocusPolicy(Qt::NoFocus);
    ui->pbOC->setFocusPolicy(Qt::NoFocus);
    ui->pbVert->setFocusPolicy(Qt::NoFocus);
    ui->pbOrange->setFocusPolicy(Qt::NoFocus);
    ui->pbRouge->setFocusPolicy(Qt::NoFocus);
    ui->pbAdd->setFocusPolicy(Qt::NoFocus);
    ui->pbEteint->setFocusPolicy(Qt::NoFocus);
    ui->pbDelete->setFocusPolicy(Qt::NoFocus);
    ui->pbAfficheur->setFocusPolicy(Qt::NoFocus);
}

CIhm::~CIhm()
{
    delete _timer;
    delete _app;
    delete ui;
}

QByteArray CIhm::intToQByteArray(int value)
{
    QString Qvalue = QString::number(value);
    QByteArray Array = Qvalue.toLatin1();

    return Array;
}

void CIhm::on_timeout() // ----> Gestion appel d'urgence
{
    if(ui->lAppelR->isHidden())
        ui->lAppelR->show();
    else
        ui->lAppelR->hide();
}


/*-----------------------------------------------------------------------

                  AFFICHAGE COMMUNICATION LAMPADAIRES

------------------------------------------------------------------------*/

void CIhm::on_pb100_clicked()
{
    int premierEclair = ui->horizontalSlider_2->value();
    int dernierEclair = ui->horizontalSlider->value();
    ui->teLamp->setTextColor(QColor(0, 0, 0));

    emit sig_ecritureCommande(3, intToQByteArray(premierEclair), intToQByteArray(dernierEclair) );

    _mess =">> Ordre envoyé: Éclairage 100%";
    ui->teLamp->append(_mess);
    _lamp = 2;
    ui->lamp100_1->show();
    ui->lamp100_2->show();
    ui->lamp100_3->show();
    ui->lamp50_1->hide();
    ui->lamp50_2->hide();
    ui->lamp50_3->hide();
}

void CIhm::on_pb50_clicked()
{
    int premierEclair = ui->horizontalSlider_2->value();
    int dernierEclair = ui->horizontalSlider->value();
    ui->teLamp->setTextColor(QColor(0, 0, 0));

    emit sig_ecritureCommande(4, intToQByteArray(premierEclair), intToQByteArray(dernierEclair) );

    _mess =">> Ordre envoyé: Éclairage 50%";
    ui->teLamp->append(_mess);
    _lamp = 1;
    ui->lamp50_1->show();
    ui->lamp50_2->show();
    ui->lamp50_3->show();
    ui->lamp100_1->hide();
    ui->lamp100_2->hide();
    ui->lamp100_3->hide();
}

void CIhm::on_pbTestLamps_clicked()
{
    int premierEclair = ui->horizontalSlider_2->value();
    int dernierEclair = ui->horizontalSlider->value();
    ui->teLamp->setTextColor(QColor(0, 0, 0));

    emit sig_ecritureCommande(35, intToQByteArray(premierEclair), intToQByteArray(dernierEclair) );

    _mess =">> Ordre envoyé: Test des lampadaire.";
    ui->teLamp->append(_mess);
    _lamp = 4;
}

void CIhm::on_pbOffLamp_clicked()
{
    int premierEclair = ui->horizontalSlider_2->value();
    int dernierEclair = ui->horizontalSlider->value();
    ui->teLamp->setTextColor(QColor(0, 0, 0));

    emit sig_ecritureCommande(5, intToQByteArray(premierEclair), intToQByteArray(dernierEclair) );

    _mess =">> Ordre envoyé: Éclairage OFF";
    ui->teLamp->append(_mess);
    _lamp = 0;
    ui->lamp50_1->hide();
    ui->lamp50_2->hide();
    ui->lamp50_3->hide();
    ui->lamp100_1->hide();
    ui->lamp100_2->hide();
    ui->lamp100_3->hide();
}

void CIhm::on_pbRecupLamp_clicked()
{
    int premierEclair = ui->horizontalSlider_2->value();
    int dernierEclair = ui->horizontalSlider->value();
    ui->teLamp->setTextColor(QColor(0, 0, 0));

    emit sig_lectureCommande(3, intToQByteArray(premierEclair), intToQByteArray(dernierEclair) );

    _mess = " -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    ui->teLamp->append(_mess);
    _mess = ">> Test en cours ...";
    ui->teLamp->append(_mess);
    _mess = " -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    ui->teLamp->append(_mess);
}

void CIhm::on_horizontalSlider_valueChanged(int value)
{
    _horizontalValue = value;
    ui->lineEdit->setText(QString::number(value));
}

void CIhm::on_horizontalSlider_2_valueChanged(int value)
{
    if (_horizontalValue < value) {
        //QMessageBox::warning(this, tr("Erreur"), tr("Erreur valeur.\nVeuillez rentrer une valeur correcte"));
        //ui->horizontalSlider_2->setTickPosition(QSlider::TickPosition(1));
        _mess ="Erreur de valeur";
        ui->teLamp->append(_mess);
    } else
        ui->lineEdit_2->setText(QString::number(value));
}

/*-----------------------------------------------------------------------

                  AFFICHAGE COMMUNICATION PARKING

------------------------------------------------------------------------*/


void CIhm::on_pbOuvrirB_clicked()
{
    ui->teParking->setTextColor(QColor(0, 0, 0));
    emit sig_ecritureCommande(1,"ouvrir","entree");

    _mess = ">> Ordre envoyé: Ouverture barrière de l'entrée";
    ui->lBarriereR->hide();
    ui->lBarriereV->show();
    ui->teParking->append(_mess);
    _barriere = 1;
}

void CIhm::on_pbFermerB_clicked()
{
    emit sig_ecritureCommande(1,"fermer","entree");
    ui->teParking->setTextColor(QColor(0, 0, 0));

    _mess = ">> Ordre envoyé: Fermeture barrière de l'entrée";
    ui->lBarriereV->hide();
    ui->lBarriereR->show();
    ui->teParking->append(_mess);
    _barriere = 0;
}

void CIhm::on_pbOuvrirB_2_clicked()
{
    emit sig_ecritureCommande(1,"ouvrir","sortie");
    ui->teParking->setTextColor(QColor(0, 0, 0));

    _mess = ">> Ordre envoyé: Ouverture barrière de sortie";
    ui->lBarriereR2->hide();
    ui->lBarriereV2->show();
    ui->teParking->append(_mess);
    _barriere2 = 1;
}

void CIhm::on_pbFermerB_2_clicked()
{
    emit sig_ecritureCommande(1,"fermer","sortie");
    ui->teParking->setTextColor(QColor(0, 0, 0));

    _mess = ">> Ordre envoyé: Fermeture barrière de sortie";
    ui->lBarriereV2->hide();
    ui->lBarriereR2->show();
    ui->teParking->append(_mess);
    _barriere2 = 0;
}

void CIhm::on_pbTestParking_clicked()  // lecture états SANS LIRE RFID
{
    emit sig_lectureCommande(1,"-","-");
    ui->teParking->setTextColor(QColor(0, 0, 0));

    _mess = " -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    ui->teParking->append(_mess);
    _mess = ">> Test en cours ...";
    ui->teParking->append(_mess);
    _mess = " -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    ui->teParking->append(_mess);
}

void CIhm::on_pbLirePLaces_clicked()
{
    emit sig_lectureCommande(5,"-","-");
    ui->teParking->setTextColor(QColor(0, 0, 0));
    _mess = " -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    ui->teParking->append(_mess);
    _mess = ">> Lecture des places ...";
    ui->teParking->append(_mess);
    _mess = " -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    ui->teParking->append(_mess);
}

void CIhm::on_pbAfficheur_clicked()
{
    ui->teParking->setTextColor(QColor(0, 0, 0));
    sig_ecritureCommande(2,ui->lineEdit_3->text().toLatin1(),ui->lineEdit_4->text().toLatin1());
}

void CIhm::on_pbLecRFID_clicked()
{
    ui->teParking->setTextColor(QColor(0, 0, 0));
    _mess = " -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    ui->teParking->append(_mess);
    _mess = ">> Test en cours ...";
    ui->teParking->append(_mess);
    _mess = " -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    ui->teParking->append(_mess);

    emit sig_lectureCommande(2,"-","-");
}


/*-----------------------------------------------------------------------

                         GESTION INTERSECTION

------------------------------------------------------------------------*/


void CIhm::on_pbAuto_clicked()
{
    ui->teInter->setTextColor(QColor(0, 0, 0));
    emit sig_ecritureCommande(6,"-","-");

    //rien
    _mess = ">>Ordre envoyé: Activation du mode Automatique";
    ui->teInter->append(_mess);
}

void CIhm::on_pbOC_clicked()
{
    ui->teInter->setTextColor(QColor(0, 0, 0));
    emit sig_ecritureCommande(7,"-","-");

    ui->feuxOrange->show();
    ui->feux2Orange->show();
    ui->feuxOff->hide();
    ui->feux2Off->hide();
    ui->feuxRouge->hide();
    ui->feuxVert->hide();
    ui->feux2Rouge->hide();
    ui->feux2Vert->hide();

    _mess = ">>Ordre envoyé: Activation du mode Orange clignotant";
    ui->teInter->append(_mess);
}

void CIhm::on_pbVert_clicked()
{
    ui->teInter->setTextColor(QColor(0, 0, 0));
    if(ui->comboBox_2->currentIndex()==1){
        ui->feuxVert->show();
        ui->feuxOff->hide();
        ui->feuxRouge->hide();
        ui->feuxOrange->hide();
        _mess = ">>Ordre envoyé: Activation du mode Manuel commande Vert pour axe horizontal";
        emit sig_ecritureCommande(8, "1", "vert");
    } else {
        ui->feux2Vert->show();
        ui->feux2Off->hide();
        ui->feux2Rouge->hide();
        ui->feux2Orange->hide();
        _mess = ">>Ordre envoyé: Activation du mode Manuel commande Vert pour axe vertical";
        emit sig_ecritureCommande(8, "2", "vert");
    } // else
    ui->teInter->append(_mess);
}

void CIhm::on_pbOrange_clicked()
{
    ui->teInter->setTextColor(QColor(0, 0, 0));
    if(ui->comboBox_2->currentIndex()==1){
        ui->feuxOrange->show();
        ui->feuxOff->hide();
        ui->feuxRouge->hide();
        ui->feuxVert->hide();
        _mess = ">>Ordre envoyé: Activation du mode Manuel commande Orange pour axe horizontal activé";
        emit sig_ecritureCommande(8, "1", "orange");
    } else {
        ui->feux2Orange->show();
        ui->feux2Off->hide();
        ui->feux2Rouge->hide();
        ui->feux2Vert->hide();
        _mess = ">>Ordre envoyé: Activation du mode Manuel commande Orange pour axe vertical";
        emit sig_ecritureCommande(8, "2", "orange");
    } // else
    ui->teInter->append(_mess);
}
void CIhm::on_pbRouge_clicked()
{
    ui->teInter->setTextColor(QColor(0, 0, 0));
    if(ui->comboBox_2->currentIndex()==1){
        ui->feuxRouge->show();
        ui->feuxOff->hide();
        ui->feuxVert->hide();
        ui->feuxOrange->hide();
        _mess = ">>Ordre envoyé: Activation du mode Manuel commande Rouge pour axe horizontal";
        emit sig_ecritureCommande(8, "1", "rouge");
    } else {
        ui->feux2Rouge->show();
        ui->feux2Off->hide();
        ui->feux2Vert->hide();
        ui->feux2Orange->hide();
        _mess = ">>Ordre envoyé: Activation du mode Manuel commande Rouge pour axe vertical";
        emit sig_ecritureCommande(8, "2", "rouge");
    } // else
    ui->teInter->append(_mess);
}

void CIhm::on_pbEteint_clicked()
{
    ui->teInter->setTextColor(QColor(0, 0, 0));
    if(ui->comboBox_2->currentIndex()==1){
        ui->feuxVert->hide();
        ui->feuxOff->show();
        ui->feuxRouge->hide();
        ui->feuxOrange->hide();
        _mess = ">>Ordre envoyé: Activation du mode Manuel commande Eteint pour axe horizontal";
        emit sig_ecritureCommande(8, "1", "eteint");
    } else {
        ui->feux2Vert->hide();
        ui->feux2Off->show();
        ui->feux2Rouge->hide();
        ui->feux2Orange->hide();
        _mess = ">>Ordre envoyé: Activation du mode Manuel commande Eteint pour axe vertical";
        emit sig_ecritureCommande(8, "2", "eteint");
    } // else
    ui->teInter->append(_mess);
}



void CIhm::on_pbTestInter_clicked()
{
    emit sig_lectureCommande(4, "-", "-");
    ui->teInter->setTextColor(QColor(0, 0, 0));

    _mess = " -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    ui->teInter->append(_mess);
    _mess = ">> Test en cours ...";
    ui->teInter->append(_mess);
    _mess = " -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    ui->teInter->append(_mess);
}


/*-----------------------------------------------------------------------

                            GESTION ABONNÉS

------------------------------------------------------------------------*/
//ui->table->setSelectionBehavior(QAbstractItemView::SelectRows);

void CIhm::on_pbPlus_clicked()
{
    int i= ui->table->rowCount();
    ui->table->insertRow(i++);
}

void CIhm::on_pbMoins_clicked()
{
    ui->table->removeRow(0);
}

void CIhm::on_pbAdd_clicked()
{
    _nom = ui->leAbo->text();
    _prenom = ui->leAbo2->text();
    _adresse = ui->leAbo3->text();
    _rfid = _adresse.toLatin1();

    int i = ui->table->rowCount()-1;
    QTableWidgetItem *newItem = ui->table->item(i,2);
    newItem->setData(Qt::EditRole, _nom);
    ui->table->setItem(i,2,newItem);
    emit sig_ajouter(_nom, _prenom, _rfid);
}

void CIhm::on_pbDelete_clicked()
{
    ui->table->removeRow(1);
}


/*-----------------------------------------------------------------------

                         BOUTON ARRÊT D'URGENCE

------------------------------------------------------------------------*/

void CIhm::on_pbTestAppel_clicked()
{
    if(_timer->isActive()) {
        _timer->stop();
        ui->lAppelR->hide();
    }else{
        _timer->start();
    }
}

/*-----------------------------------------------------------------------

                                AUTRE

------------------------------------------------------------------------*/

void CIhm::on_infoLogin(QString ip, int port)
{
    _app = new CApp(ip, port);
    connect(this, &CIhm::sig_lectureCommande, _app, &CApp::on_lectureCommande);
    connect(this, &CIhm::sig_ecritureCommande, _app, &CApp::on_ecritureCommande);
    connect(_app, &CApp::sig_lectureRep, this, &CIhm::on_lectureRep);
    connect(_app, &CApp::sig_ecritureRep, this, &CIhm::on_ecritureRep);
    connect(_app, &CApp::sig_trouver, this, &CIhm::on_trouver);
}

void CIhm::on_ecritureRep(QByteArray firstWordAddress, bool etat, QByteArray value)
{
    //affichage de la réponse
    qDebug()<<"adresse premier mot :"<<firstWordAddress;
    qDebug()<<"état :"<<etat;
    qDebug()<<"valeur demandée :"<<value;

    int firstWordAdr = firstWordAddress.toInt(nullptr,16);
    int valeur = value.toInt(nullptr,16);

    switch (firstWordAdr) {
    case 0x00 ... 0x1F: // Eclairage
    {
        int firstCard = firstWordAdr + 1;//adresse de la première carte - 32(lecture) + 1(car décalé de 1)
        int lastCard = value.size()/4 + firstWordAdr;
        ui->teLamp->setTextColor(QColor(59, 113, 44));
        value = value.left(4);
        if (value == "0000"){
            if (etat == true){
                _mess = "<< Ordre executé: Eclairage OFF pour les cartes de "+QString::number(firstCard)+" à "+QString::number(lastCard);
            } else {
                _mess = "<< Ordre non executé";
                ui->teLamp->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teLamp->append(_mess);
        } // if value
        if (value == "0001"){
            if (etat == true){
                _mess = "<< Ordre executé: Eclairage 50% pour les cartes de "+QString::number(firstCard)+" à "+QString::number(lastCard);
            } else {
                _mess = "<< Ordre non executé";
                ui->teLamp->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teLamp->append(_mess);
        } // if value
        if (value == "0003"){
            if (etat == true){
                _mess = "<< Ordre executé: Eclairage 100% pour les cartes de "+QString::number(firstCard)+" à "+QString::number(lastCard);
                ui->teLamp->setTextColor(QColor(59, 113, 44));
            } else {
                _mess = "<< Ordre non executé";
                ui->teLamp->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teLamp->append(_mess);
        } // if value
        break;
    }
    case 0x80: //affichage
        ui->teParking->setTextColor(QColor(59, 113, 44));
        if (etat == true){
            _mess = "<< Ordre executé : écriture écran";
            ui->teParking->append(_mess);
            _mess = "<< 1ère ligne ="+value.left(16);
            ui->teParking->append(_mess);
            _mess = "<< 2ème ligne ="+value.left(32).right(16);
            ui->teParking->append(_mess);
        } else {
            _mess = "<< Ordre non executé";
            ui->teParking->setTextColor(QColor(104, 18, 20));
            ui->teParking->append(_mess);
        } // else
        break;

    case 0xA0: // Parking
        ui->teParking->setTextColor(QColor(59, 113, 44));
        if (valeur == 1){
            if (etat == true){
                _mess = "<< Barrière Entrée Ouverte";
            } else {
                _mess = "<< Ordre non executé";
                ui->teParking->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teParking->append(_mess);
        }// if valeur
        if (valeur == 2){
            if (etat == true){
                _mess = "<< Barrière Entrée Fermée";
            } else {
                _mess = "<< Ordre non executé";
                ui->teParking->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teParking->append(_mess);
        }// if valeur
        if (valeur == 4){
            if (etat == true){
                _mess = "<< Barrière Sortie Ouverte";
            } else {
                _mess = "<< Ordre non executé";
                ui->teParking->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teParking->append(_mess);
        }// if valeur
        if (valeur == 8){
            if (etat == true){
                _mess = "<< Barrière Sortie Fermée";
            } else {
                _mess = "<< Ordre non executé";
                ui->teParking->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teParking->append(_mess);
        } // if valeur
        break;

    case 0xAA: // Intersection
        // ----     MANUEL
        ui->teInter->setTextColor(QColor(59, 113, 44));
        // Voie 1
        if (value == "0042"){ // OFF
            if (etat == true){
                _mess = "<< Ordre executé: Mode manuel voie 1 OFF";
            } else {
                _mess = "<< Ordre non executé";
                ui->teInter->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teInter->append(_mess);
        } // if value
        if (value == "0046"){ // VERT
            if (etat == true){
                _mess = "<<Ordre executé: Mode manuel voie 1 Vert";
            }else{
                _mess = "<< Ordre non executé";
                ui->teInter->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teInter->append(_mess);
        } // if value
        if (value == "004A"){ // ORANGE
            if (etat == true){
                _mess = "<<Ordre executé: Mode manuel voie 1 Orange";
            } else {
                _mess = "<< Ordre non executé";
                ui->teInter->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teInter->append(_mess);
        } // if value
        if (value == "004E"){ // ROUGE
            if (etat == true){
                _mess = "<<Ordre executé: Mode manuel voie 1 OFF";
            } else {
                _mess = "<< Ordre non executé";
                ui->teInter->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teInter->append(_mess);
        } // if value
        // Voie 2
        if (value == "0082"){ // OFF
            if (etat == true){
                _mess = "<<Ordre executé: Mode manuel voie 2 OFF";
            }else{
                _mess = "<< Ordre non executé";
                ui->teInter->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teInter->append(_mess);
        } // if value
        if (value == "0092"){ // VERT
            if (etat == true){
                _mess = "<<Ordre executé: Mode manuel voie 2 Vert";
            } else {
                _mess = "<< Ordre non executé";
                ui->teInter->setTextColor(QColor(104, 18, 20));
            } // else etat
            ui->teInter->append(_mess);
        } // if value
        if (value == "00A2"){ // ORANGE
            if (etat == true){
                _mess = "<<Ordre executé: Mode manuel voie 2 Orange";
            } else {
                _mess = "<< Ordre non executé";
                ui->teInter->setTextColor(QColor(104, 18, 20));
            } // else
            ui->teInter->append(_mess);
        } // if value
        if(value == "00B2"){ // ROUGE
            if (etat == true){
                _mess = "<<Ordre executé: Mode manuel voie 2 Rouge";
            } else {
                _mess = "<< Ordre non executé";
                ui->teInter->setTextColor(QColor(104, 18, 20));
            } // else
            ui->teInter->append(_mess);
        } // if value
        if (value == "0001"){ // Automatique
            if(etat == true){
                _mess = "<<Ordre executé: Mode Automatique";
            }else{
                _mess = "<< Ordre non executé";
                ui->teInter->setTextColor(QColor(104, 18, 20));
            } // else
            ui->teInter->append(_mess);
        } // if value
        if (value == "0000"){ // Orange Clignotant
            if (etat){
                _mess = "<<Ordre executé: Mode Orange Clignotant";
            } else {
                _mess = "<< Ordre non executé";
                ui->teInter->setTextColor(QColor(104, 18, 20));
            } // else
            ui->teInter->append(_mess);
        } // if value
        break;

    } // sw
}

void CIhm::on_lectureRep(QByteArray firstWordAddress ,QByteArray value)
{
    //affichage de la réponse
    QByteArray rfidE;
    QByteArray rfidS;
    qDebug()<<"adresse premier mot :"<<firstWordAddress;
    qDebug()<< "valeur :"<<value;
    ui->teLamp->setTextColor(QColor(23, 41, 157));
    ui->teParking->setTextColor(QColor(23, 41, 157));
    ui->teInter->setTextColor(QColor(23, 41, 157));
    int firstWordAdr = firstWordAddress.toInt(nullptr,16);
    int valeur;
    int card;
    int taille = value.size()/4;

    switch (firstWordAdr) {
    case 0x20 ... 0x3F: // Eclairage
        for (int i=0 ; i < taille ; i++) {
            card = firstWordAdr - 32 + 1 + i;
            QByteArray valueleft4 = value.left(4);
            value = value.right(value.size()-4);
            if (valueleft4 == "-ABS"){
                _mess = "<< La lecture ne peut pas s'effectuer sur la carte n°"+QString::number(card);
                ui->teLamp->append(_mess);
            } else {
                valeur= valueleft4.toInt(nullptr,16);
                if (valeur&0x01)
                    _mess = "<< Présence piéton sur la carte n°"+QString::number(card);
                else
                    _mess = "<< Absence piéton sur la carte n°"+QString::number(card);
                ui->teLamp->append(_mess);
                if (valeur&0x02)
                    _mess = "<< Détection jour sur la carte n°"+QString::number(card);
                else
                    _mess = "<< Détection nuit sur la carte n°"+QString::number(card);
                ui->teLamp->append(_mess);
                if (!(valeur&0x04)){
                    _mess = "<< lampadaire 1 HS sur la carte n°"+QString::number(card);
                    ui->teLamp->append(_mess);
                }
                if (!(valeur&0x08)){
                    _mess = "<< lampadaire 2 HS sur la carte n°"+QString::number(card);
                    ui->teLamp->append(_mess);
                }
                if (!(valeur&0x10)){
                    _mess = "<< lampadaire 3 HS sur la carte n°"+QString::number(card);
                    ui->teLamp->append(_mess);
                }
                if (!(valeur&0x20)){
                    _mess = "<< lampadaire 4 HS sur la carte n°"+QString::number(card);
                    ui->teLamp->append(_mess);
                }
                if (!(valeur&0x40)){
                    _mess = "<< lampadaire 5 HS sur la carte n°"+QString::number(card);
                    ui->teLamp->append(_mess);
                }
                if (!(valeur&0x80)){
                    _mess = "<< lampadaire 6 HS sur la carte n°"+QString::number(card);
                    ui->teLamp->append(_mess);
                }
            } // else
        } // for i
        break;

    case 0xA1: // Barrières
        valeur = value.toInt(nullptr,16);
        _mess.clear();
        if (valeur == 0){
            _mess = "<< Les barrières ne sont ni en haut ni en bas, aucuns boutons appuyés";
            ui->teParking->append(_mess);
        } else {
            if (valeur&0x01)
                _mess += "<< Barrière d'entrée baissée";
            if (valeur&0x02)
                _mess += " << Barrière d'entrée levée";
            if (valeur&0x04)
                _mess += " << Barrière de sortie baissée";
            if (valeur&0x08)
                _mess += " << Barrière de sortie levée";
            if (valeur&0x10)
                _mess += " << Véhicule devant la barrière d'entrée";
            if (valeur&0x20)
                _mess += " << Véhicule devant la barrière de sortie";
            if (valeur&0x40)
                _mess += " << Bouton d'urgence d'entrée";
            if (valeur&0x80)
                _mess += " << Bouton d'urgence de sortie";
            ui->teParking->append(_mess);
        } // else
        break;

    case 0xA2: // RFID Entrée et sortie
        rfidE = value.left(12);
        rfidS = value.right(12);
        if (rfidE != "000000000000"){
            _mess = "<< Présence véhicule à l'entrée, rfid = "+rfidE.right(10);
        }else{
            _mess = "<< Pas de véhicule détecté à l'entrée";
        }
        ui->teParking->append(_mess);
        if (rfidS != "000000000000"){
            _mess = "<< Présence véhicule à la sortie, rfid = "+rfidS.right(10);
        }else{
            _mess = "<< Pas de véhicule détecté à la sortie";
        }
        ui->teParking->append(_mess);
        break;

    case 0xAB: // Boutons appuyés
        ui->teLamp->setTextColor(QColor(23, 41, 157));
        valeur = value.toInt(nullptr,16);
        if ( !(valeur&0x0F) ){
            _mess = "<< Aucun bouton appuyé sur la voie 1";
        } else {
            if (valeur&0x01)
                _mess = "<< Bouton 1 est appuyé sur la voie 1";
            if (valeur&0x02)
                _mess = "<< Bouton 2 est appuyé sur la voie 1";
            if (valeur&0x04)
                _mess = "<< Bouton 3 est appuyé sur la voie 1";
            if (valeur&0x08)
                _mess = "<< Bouton 4 est appuyé sur la voie 1";
        } // else
        ui->teInter->append(_mess);
        if ( !(valeur&0xF0) ){
            _mess = "<< Aucun bouton appuyé sur la voie 2";
        } else {
            if (valeur&0x10)
                _mess = "<< Bouton 1 est appuyé sur la voie 2";
            if (valeur&0x20)
                _mess = "<< Bouton 2 est appuyé sur la voie 2";
            if (valeur&0x40)
                _mess = "<< Bouton 3 est appuyé sur la voie 2";
            if (valeur&0x80)
                _mess = "<< Bouton 4 est appuyé sur la voie 2";
        } // else
        ui->teInter->append(_mess);
        break;

    case 0xB0:  // PLACE DE PARKING
        bool aff;
        valeur = value.toInt(nullptr,16);
        (valeur&0x01?aff=true:aff=false);
        ui->lVoiture1->setVisible(aff);
        (valeur&0x02?aff=true:aff=false);
        ui->lVoiture2->setVisible(aff);
        (valeur&0x04?aff=true:aff=false);
        ui->lVoiture3->setVisible(aff);
        (valeur&0x08?aff=true:aff=false);
        ui->lVoiture4->setVisible(aff);
        (valeur&0x10?aff=true:aff=false);
        ui->lVoiture5->setVisible(aff);
        (valeur&0x20?aff=true:aff=false);
        ui->lVoiture6->setVisible(aff);
        (valeur&0x40?aff=true:aff=false);
        ui->lVoiture7->setVisible(aff);
        (valeur&0x80?aff=true:aff=false);
        ui->lVoiture8->setVisible(aff);
        break;
    } // sw
}

void CIhm::on_trouver(int oui)
{
    switch (oui) {
    case 0://r
        _mess = "<< Aucun rfid correspondant à un abonnement dans la base de données ";
        break;
    case 1://en
        _mess = "<< Le rfid de l'entrée correspond à un abonnement dans la base de données ";
        break;
    case 2://sor
        _mess = "<< Le rfid de la sortie correspond à un abonnement dans la base de données ";
        break;
    case 3://les2  POSSIBLE CA ???
        _mess = "<< Le rfid de l'entrée et de la sortie correspondent à un abonnement dans la base de données ";
        break;
    default:
        _mess = "CIhm::on_trouver << Message de retour incorrecte !";
        break;
    }
    ui->teParking->append(_mess);
}


