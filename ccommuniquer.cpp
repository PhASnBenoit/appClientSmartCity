#include "ccommuniquer.h"
#include "ccommuniquer.h"
#include "ccommuniquer.h"

CCommuniquer::CCommuniquer(QString ip, int port, QObject *parent)
    :QObject(parent)
{

    _sock = new QTcpSocket(this);
    connect(_sock, SIGNAL(readyRead()), this, SLOT(recevoir()));
    connecter(ip, QString::number(port));
}

CCommuniquer::~CCommuniquer()
{
    _sock->close();
    delete _sock;
    delete _prot;
}

int CCommuniquer::envoyer(QString mess)
{
    int nb = _sock->write(mess.toStdString().c_str());
    if (nb == -1)
        qDebug() << "CClientTcp::emettre Erreur écriture.";
    return nb;
}

int CCommuniquer::connecter(QString adr, QString port)
{
    _sock->connectToHost(adr, port.toUShort(), QIODevice::ReadWrite);
    if (!_sock->isOpen())
        qDebug() << "CClientTcp::connecter Erreur";
    return 1;
}


/////////////  SLOTs /////////////////////////////////////



void CCommuniquer::recevoir() // Quand on a une réponse du serveur
{
    QByteArray reponse;
    reponse = _sock->readAll();
    qDebug() << "Réponse du serveur =" << reponse;
    emit sig_repServ(reponse);
}

void CCommuniquer::on_envoieMess(QByteArray message) // Quand on reçoit une trame de CProtocol
{
    qDebug() << "Envoie au serveur =" << message;
    envoyer(message);
}


