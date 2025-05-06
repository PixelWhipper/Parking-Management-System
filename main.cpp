#include "mainwindow.h" // Your main login window
#include <QApplication>
#include <QFile> // For loading global stylesheet (optional)
#include <QDebug> // For qWarning

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Optional: Apply a global stylesheet for consistent theming if not fully handled by .ui files
    // QFile styleSheetFile(":/styles/global.qss"); // Example if you had a global QSS
    // if (styleSheetFile.open(QFile::ReadOnly)) {
    //     QString styleSheet = QLatin1String(styleSheetFile.readAll());
    //     a.setStyleSheet(styleSheet);
    //     styleSheetFile.close();
    // } else {
    //     qWarning("Could not load global stylesheet.");
    // }

    MainWindow w; // Create the main login window
    w.show();

    return a.exec();
}
