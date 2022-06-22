#include "cihm.h"
#include "cihmlogin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CIhm w;
    CIhmLogin l(&w);
    int res = l.exec(); // exec() renvoie un résultat DialogCode
    if (res == 0)
        return -1;
    w.show();
    return a.exec();
}

