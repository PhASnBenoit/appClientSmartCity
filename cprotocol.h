#ifndef CPROTOCOL_H
#define CPROTOCOL_H

#include <QObject>
#include <QDialog>
#include <QMessageBox>
#include <QDialogButtonBox>
#include <QTcpSocket>
#include <QDebug>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>


class CProtocol : public QObject
{
    Q_OBJECT

public:
    explicit CProtocol(QObject *parent = nullptr);
    ~CProtocol();

private:
    QByteArray _tc[10];   //trame client
    QByteArray _ts[10];   //trame serveur
    QString _pswd;
    QString _login;
    int _compteurTClient = 0;
    int _compteurTServeur = 0;

    bool verifier();
    uint16_t calculCrc16(QByteArray a);
    QByteArray takeCharacter(int nbOfBytes);
    QByteArray contructTrame();

public slots:
    void on_lectureCommande(int commande, QByteArray val1, QByteArray val2);
    void on_ecritureCommande(int commande, QByteArray val1, QByteArray val2);
    void on_repServ(QByteArray reponse);

signals:
    void sig_envoieMess(QByteArray message);
    void sig_ecritureRep(QByteArray firstWordAddress, bool rep, QByteArray value);
    void sig_lectureRep(QByteArray firstWordAddress, QByteArray value);
};

#endif // CPROTOCOL_H
