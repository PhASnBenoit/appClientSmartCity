#ifndef CCOMMUNIQUER_H
#define CCOMMUNIQUER_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include "cprotocol.h"

class CCommuniquer : public QObject
{
   Q_OBJECT
public:
    explicit CCommuniquer(QString ip = "127.0.0.1", int port = 2222, QObject *parent = 0);
    ~CCommuniquer();
    int connecter(QString adr, QString port);
    int envoyer(QString mess);

public slots:
    void recevoir();
    //void on_infoLogin(QString ip, int port, QString log, QString pswd);
    void on_envoieMess(QByteArray message);

private:
    CProtocol *_prot;
    QTcpSocket *_sock;

signals:
    void sig_repServ(QByteArray reponse);
};

#endif // CCOMMUNIQUER_H
