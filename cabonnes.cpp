#include "cabonnes.h"

CAbonnes::CAbonnes(QObject *parent) : QObject(parent)
{
    QFile file("abo");
    // On ouvre notre fichier en lecture seule et on vérifie l'ouverture
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug() << "CAbonnes::CAbonnes Erreur d'ouverture du fichier 'abo' ";
}

//int CAbonnes::ecritureFichier()
//{
//    // Création d'un objet QFile

//    // Création d'un objet QTextStream à partir de notre objet QFile
//    QTextStream flux(&file);
//    // On choisit le codec correspondant au jeu de caractères que l'on souhaite ; ici, UTF-8
//    flux.setCodec("UTF-8");
//    // Écriture des différentes lignes dans le fichier
//    flux << "Bonjour," << endl << "Nous sommes le " << 3 << " avril " << 2009 << endl;
//    return 0;
//}

int CAbonnes::verifierClient(QByteArray rfidE, QByteArray rfidS)
{
    QByteArray rfidFile;
    int ret=0;
    QFile abos("./abo");
       if (!abos.open(QIODevice::ReadOnly | QIODevice::Text))
           return -1;//erreur

       while (!abos.atEnd()) {
           rfidFile.clear();
           QByteArray line = abos.readLine(100);
           if (line[0] != '#') {
               // spliter la ligne
               QList<QByteArray> liste_rfidFile = line.split(';')[2].split(',');
               for (int i=0 ; i<liste_rfidFile.size() ; i++) {
                 rfidFile += QByteArray::number(liste_rfidFile.at(i).toInt(), 16).rightJustified(2,'0').toUpper();
               } // for
               // Comparaison
               if (rfidFile == rfidE)
                   ret += 1;
               if (rfidFile == rfidS)
                   ret += 2;
           } // if #
       } // while
       if (ret > 0)
           return ret;
       return 0;//rien
}
