#include "mainwindow.h"
#include "parkinglotinfo.h"
#include <QApplication>

// Global variable definition
ParkingLotData parkingData;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
