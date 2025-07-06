#include "mainwindow.h" // Include your main application window header
#include "logindialog.h"  // Include your LoginDialog header

#include <QApplication>   // Required for QApplication

int main(int argc, char *argv[])
{
    // Create the QApplication object. This manages the GUI application's control flow.
    QApplication a(argc, argv);

    // 1. Create an instance of your LoginDialog.
    LoginDialog loginDialog;

    // 2. Show the login dialog modally.
    // The 'exec()' method displays the dialog and blocks execution
    // until the dialog is closed. It returns QDialog::Accepted if accept()
    // was called, or QDialog::Rejected if reject() or close() was called.
    if (loginDialog.exec() == QDialog::Accepted) {
        // 3. If login was successful (LoginDialog::accept() was called),
        // then create and show your main application window.
        MainWindow w;
        w.show();

        // 4. Start the Qt event loop. This allows the application to process
        // events (like user input, painting, etc.) and keeps it running.
        return a.exec();
    } else {
        // 5. If login was cancelled or failed (LoginDialog::reject() or closed),
        // then exit the application without showing the main window.
        return 0;
    }
}
