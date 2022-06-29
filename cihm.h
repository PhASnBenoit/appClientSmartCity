#ifndef CIHM_H
#define CIHM_H

#include <QMainWindow>
#include <time.h>
#include <QTimer>
#include <QItemDelegate>
#include <QFont>
//#include "cihmlogin.h"
#include "ccommuniquer.h"
#include "capp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CIhm; }
QT_END_NAMESPACE

class CIhm : public QMainWindow
{
    Q_OBJECT

public:
    CIhm(QWidget *parent = nullptr);
    ~CIhm();
    void a();
    int nsleep(long miliseconds);

    int _barriere; // Valeur état de la barrière entrée
    int _barriere2; // Valeur état de la barrière sortie
    int _lamp;
    QString _nom;
    QString _prenom;
    QString _adresse;
    QByteArray _rfid;
    int _n;
    int _horizontalValue;

private:
    QString _mess; // Message à afficher
    QTimer *_timer2;
    QTimer *_timer;
    CApp *_app;

    QByteArray intToQByteArray(int value);

signals:
    void sig_infoLogin(QString ip, int port);
    void sig_lectureCommande(int commande, QByteArray val1, QByteArray val2);
    void sig_ecritureCommande(int commande, QByteArray val1, QByteArray val2);
    void sig_ajouter(QString _nom, QString _prenom, QByteArray RFID);

private slots:

    void on_pbTestAppel_clicked();
    void on_timeout();
    // void on_reponseLecture(QByteArray valeurs);
    //void on_reponseEcriture(bool ack);

    //Eclairage
    void on_pbRecupLamp_clicked();
    void on_pbTestLamps_clicked();

    void on_horizontalSlider_valueChanged(int value);
    void on_horizontalSlider_2_valueChanged(int value);
    void on_pb100_clicked();
    void on_pb50_clicked();
    void on_pbOffLamp_clicked();

    //Parking
    void on_pbTestParking_clicked();

    void on_pbOuvrirB_clicked();
    void on_pbFermerB_clicked();
    void on_pbOuvrirB_2_clicked();
    void on_pbFermerB_2_clicked();

    void on_trouver(int oui);

    //Intersection
    void on_pbTestInter_clicked();

    void on_pbAuto_clicked();
    void on_pbOC_clicked();
    void on_pbVert_clicked();
    void on_pbOrange_clicked();
    void on_pbRouge_clicked();
    void on_pbEteint_clicked();

    //Abonnés
    void on_pbDelete_clicked();
    void on_pbPlus_clicked();
    void on_pbMoins_clicked();
    void on_pbAdd_clicked();

    void on_pbLecRFID_clicked();

    //void on_comboBox_activated(const QString &arg1);

    void on_pbAfficheur_clicked();
    void on_pbLirePLaces_clicked();

public slots:
    void on_infoLogin(QString ip, int port);
    void on_ecritureRep(QByteArray firstWordAddress, bool etat, QByteArray value);
    void on_lectureRep(QByteArray firstWordAddress, QByteArray value);


private:
    Ui::CIhm *ui;

};
#endif // CIHM_H
