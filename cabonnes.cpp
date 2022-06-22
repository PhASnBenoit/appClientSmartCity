#include "cabonnes.h"

CAbonnes::CAbonnes(QObject *parent) : QObject(parent)
{

}

int CAbonnes::ecritureFichier()
{
    // Création d'un objet QFile
    QFile file("Qt.txt");
    // On ouvre notre fichier en lecture seule et on vérifie l'ouverture
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return 0;

    // Création d'un objet QTextStream à partir de notre objet QFile
    QTextStream flux(&file);
    // On choisit le codec correspondant au jeu de caractères que l'on souhaite ; ici, UTF-8
    flux.setCodec("UTF-8");
    // Écriture des différentes lignes dans le fichier
    flux << "Bonjour," << endl << "Nous sommes le " << 3 << " avril " << 2009 << endl;
    return 0;
}

int CAbonnes::verifierClient(QByteArray rfidE, QByteArray rfidS)
{
    QFile abos("/root/Documents/V2/abo.txt");
       if (!abos.open(QIODevice::ReadOnly | QIODevice::Text))
           return -1;//erreur

       while (!abos.atEnd()) {
           QByteArray line = abos.readLine(100);
       }

       //comparaison

       return 0;//rien
       return 1;//rfid entrée correct
       return 2;//rfid sortie correct
       return 3;//rfid pour les deux correct

}
