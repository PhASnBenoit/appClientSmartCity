#ifndef CAPP_H
#define CAPP_H

#include <QObject>
#include "ccommuniquer.h"
#include "cabonnes.h"
#include "cbdd.h"
#include "cprotocol.h"

class CApp: public QObject
{
    Q_OBJECT
public:
    CApp(QString ip="127.0.0.1", int port = 2222, QObject *parent = 0);
    ~CApp();

private:
    CProtocol *_prot;
    CCommuniquer *_com;
    CAbonnes *_abo;
    CBdd *_bdd;

public slots:
    void on_lectureCommande(int commande, QByteArray val1, QByteArray val2);
    void on_ecritureCommande(int commande, QByteArray val1, QByteArray val2);
    void on_ecritureRep(QByteArray firstWordAddress, bool etat, QByteArray value);
    void on_lectureRep(QByteArray firstWordAddress, QByteArray value);

signals:
    void sig_lectureCommande(int commande, QByteArray val1, QByteArray val2);
    void sig_ecritureCommande(int commande, QByteArray val1, QByteArray val2);
    void sig_ecritureRep(QByteArray firstWordAddress, bool etat, QByteArray value);
    void sig_lectureRep(QByteArray firstWordAddress, QByteArray value);
    void sig_trouver(int oui);
};

#endif // CAPP_H
