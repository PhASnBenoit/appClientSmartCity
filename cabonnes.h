#ifndef CABONNES_H
#define CABONNES_H

#include <QObject>
#include <QDebug>
#include <QFile>


class CAbonnes: public QObject
{
    Q_OBJECT
public:
    CAbonnes(QObject *parent = 0);
    int verifierClient(QByteArray rfidE, QByteArray rfidS);
    int ecritureFichier();

private:

signals :
    void trouve();
};

#endif // CABONNES_H
