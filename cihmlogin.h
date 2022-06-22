#ifndef CIHMLOGIN_H
#define CIHMLOGIN_H

#include <QDialog>
#include <QMessageBox>
#include <QDialogButtonBox>
#include <QTcpSocket>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cihm.h"

namespace Ui {
class CIhmLogin;
}

class CIhmLogin : public QDialog
{
    Q_OBJECT

public:
    explicit CIhmLogin(CIhm *ihm = nullptr, QDialog *parent = nullptr);
    ~CIhmLogin();

private slots:
    void on_ok();
    void on_radioButton_clicked();
    void onReadyRead();


private:
    QTcpSocket _sock;
    Ui::CIhmLogin *ui;
    CIhm *_ihm;
    QTimer * tmr;

    QString _port;    // Port saisi
    QString _pswd;    // Mot de passe saisi
    QString _login;     // Identifiant saisi
    QString _ip;      // Adresse IP Raspberry saisie
    QByteArray _ts;   //trame serveur

    bool verifier();
    uint16_t calculCrc16(QByteArray a);
    QByteArray takeCharacter(int nbOfBytes);
    QByteArray contructTrame();

signals:
    void sig_stop();
    void sig_close();
    void sig_infoLogin(QString ip, int port);
};

#endif // CIHMLOGIN_H
