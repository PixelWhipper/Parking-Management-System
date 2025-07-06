<<<<<<< HEAD
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
=======
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString styleSheet = "QWidget { background-color: #2d2d2d; color: white; } /* Example */";
    a.setStyleSheet(styleSheet);
    MainWindow w;
    w.show();
    return a.exec();
}
>>>>>>> 1c416011a7ff32149ef7cbe3ba519bf240d70214
