/*
 * Author   : PT. Rekaindo Global Jasa Engineer Team X Mechatronics PENS
 * Version  : V1.1.1
 * Date     : 13/01/2025
 * Note     : -
*/

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
