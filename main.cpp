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
