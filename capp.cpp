#include "capp.h"

CApp::CApp(QString ip, int port, QObject *parent) :
    QObject(parent)
{
    _prot = new CProtocol();
    _com = new CCommuniquer(ip, port);
    _abo = new CAbonnes();


    connect(this, &CApp::sig_lectureCommande, _prot, &CProtocol::on_lectureCommande);
    connect(this, &CApp::sig_ecritureCommande, _prot, &CProtocol::on_ecritureCommande);
    connect(_prot, &CProtocol::sig_envoieMess, _com, &CCommuniquer::on_envoieMess);
    connect(_com, &CCommuniquer::sig_repServ, _prot, &CProtocol::on_repServ);
    connect(_prot, &CProtocol::sig_lectureRep, this, &CApp::on_lectureRep);
    connect(_prot, &CProtocol::sig_ecritureRep, this, &CApp::on_ecritureRep);

}

CApp::~CApp()
{
    delete _bdd;
    delete _abo;
    delete _com;
    delete _prot;
}

void CApp::on_lectureCommande(int commande, QByteArray val1, QByteArray val2)
{
    emit sig_lectureCommande(commande, val1, val2);
}

void CApp::on_ecritureCommande(int commande, QByteArray val1, QByteArray val2)
{
    emit sig_ecritureCommande(commande, val1, val2);
}

void CApp::on_ecritureRep(QByteArray firstWordAddress, bool etat, QByteArray value)
{
    sig_ecritureRep(firstWordAddress ,etat ,value);
}

void CApp::on_lectureRep(QByteArray firstWordAddress, QByteArray value)
{
    sig_lectureRep(firstWordAddress, value);
    if (firstWordAddress == "00A2"){//rfid
        QByteArray rfidE = value.left(12).right(10);
        QByteArray rfidS = value.right(12).right(10);
        int ui = _abo->verifierClient(rfidE,rfidS);
        if (ui == -1)qDebug()<<"CApp::on_lectureRep  erreur !!!";
        else{
            emit sig_trouver(ui);
        }
    }
}



