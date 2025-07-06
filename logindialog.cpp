#include "logindialog.h"    // Include your custom LoginDialog header
#include "ui_login.h"       // This is the crucial include for the generated UI code
// This file (ui_login.h) is automatically created
// by Qt's 'uic' tool from your login.ui file.

#include <QMessageBox>      // For displaying simple pop-up messages
#include <QDebug>           // For console output (useful for debugging)

// Constructor implementation
LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)                 // Call the base class (QDialog) constructor
    , ui(new Ui::LoginDialog)         // Initialize the 'ui' pointer by creating a new
// instance of the generated UI class.
{
    // This vital line sets up all the widgets (e.g., QLineEdit, QPushButton, QLabel)
    // that you designed in login.ui onto this QDialog instance. It also applies
    // their properties (text, geometry, stylesheets, etc.) and sets up the layouts.
    ui->setupUi(this);

    // --- Connect Signals to Slots ---
    // This is how you make your UI interactive.
    // We connect a signal (something that happens, like a button being clicked)
    // to a slot (a function that should be executed when the signal is emitted).

    // Connect the 'clicked()' signal of the 'loginButton' (from login.ui)
    // to our custom 'on_loginButton_clicked()' slot in this class.
    connect(ui->loginButton, &QPushButton::clicked, this, &LoginDialog::on_loginButton_clicked);

    // Connect the 'linkActivated(const QString&)' signal of the 'forgotPasswordLabel'
    // to its corresponding slot. This signal is emitted when a user clicks an <a> tag.
    connect(ui->forgotPasswordLabel, &QLabel::linkActivated, this, &LoginDialog::on_forgotPasswordLabel_linkActivated);

    // Connect the 'linkActivated(const QString&)' signal of the 'signUpLabel'
    // to its corresponding slot.
    connect(ui->signUpLabel, &QLabel::linkActivated, this, &LoginDialog::on_signUpLabel_linkActivated);

    // --- Optional: Initial UI setup / customization in code ---
    // You can set initial values or properties here that weren't set in Qt Designer.
    ui->emailLineEdit->setFocus(); // Set initial focus to the email input field
    // You could also set a validation regex for email, etc.
}

// Destructor implementation
LoginDialog::~LoginDialog()
{
    // It's crucial to delete the 'ui' object to free the memory allocated for
    // all the widgets on the dialog when the LoginDialog instance is destroyed.
    delete ui;
}

// --- Slot Implementations ---

// This slot is called when the 'Sign in' button is clicked.
void LoginDialog::on_loginButton_clicked()
{
    // Retrieve the text entered by the user in the email and password fields.
    QString email = ui->emailLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    qDebug() << "Attempting login with Email:" << email << "Password:" << password;

    // --- Basic Authentication Logic (Hardcoded for demonstration) ---
    // In a real application, you would replace this with:
    // - Database lookup
    // - API call to an authentication service
    // - More robust password hashing and verification
    if (email == "admin@example.com" && password == "adminpass") {
        QMessageBox::information(this, "Login Success", "Welcome, Administrator!");
        accept(); // Close the dialog and return QDialog::Accepted (indicating success)
    } else if (email == "user@example.com" && password == "userpass") {
        QMessageBox::information(this, "Login Success", "Welcome, User!");
        accept(); // Close the dialog and return QDialog::Accepted
    } else {
        // If authentication fails, display an error message.
        QMessageBox::warning(this, "Login Failed", "Invalid email or password. Please try again.");
        ui->passwordLineEdit->clear(); // Clear the password field for security
        ui->emailLineEdit->setFocus(); // Put focus back on the email field
    }
}

// This slot is called when the "Forgot password?" link is clicked.
void LoginDialog::on_forgotPasswordLabel_linkActivated(const QString &link)
{
    Q_UNUSED(link); // Mark parameter as unused to avoid compiler warnings if not used.
    QMessageBox::information(this, "Forgot Password", "Please contact support to reset your password.");
    // In a real app, this would open a new dialog or a web link for password reset.
}

// This slot is called when the "Sign Up!" link is clicked.
void LoginDialog::on_signUpLabel_linkActivated(const QString &link)
{
    Q_UNUSED(link); // Mark parameter as unused.
    QMessageBox::information(this, "Sign Up", "Redirecting to registration page...");
    // In a real app, this would typically open a new registration dialog or redirect to a website.
}
