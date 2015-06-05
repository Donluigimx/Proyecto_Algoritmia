#include "MenuPrincipal.h"
#include "Aerolinea.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Aerolinea aerolinea;

    return a.exec();
}
