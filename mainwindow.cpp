#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::Login);
    connect(ui->signUpButton, &QPushButton::clicked, this, &MainWindow::Signup);
    connect(ui->signUpLabel, &QLabel::linkActivated, this, &MainWindow::switchSignup);
    QLabel *backToLogin = new QLabel("Already have an account? <a href=\"login\">Log in</a>");
    backToLogin->setAlignment(Qt::AlignCenter);
    backToLogin->setOpenExternalLinks(false);
    connect(backToLogin, &QLabel::linkActivated, this, &MainWindow::switchLogin);
    ui->verticalLayoutSignUp->addWidget(backToLogin);

    connect(ui->adminButton, &QPushButton::clicked, this, &MainWindow::on_adminButton_clicked);
    connect(ui->userButton, &QPushButton::clicked, this, &MainWindow::on_userButton_clicked);

    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Login()
{
    QString email = ui->emailEdit->text();
    QString password = ui->passwordEdit_login->text();

    if (userDatabase.contains(email) && userDatabase[email] == password) {
        ui->stackedWidget->setCurrentWidget(ui->roleSelectPage);
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid email or password.");
    }
}

void MainWindow::Signup()
{
    QString email = ui->emailEdit_signup->text();
    QString password = ui->passwordEdit_signup->text();
     if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Sign Up Failed", "Email and password cannot be empty.");
        return;
    }
    if (userDatabase.contains(email)) {
        QMessageBox::warning(this, "Sign Up Failed", "Account already exists.");
    } else {
        userDatabase[email] = password;
        QMessageBox::information(this, "Success", "Account created. Please log in.");
        ui->stackedWidget->setCurrentWidget(ui->loginPage);
    }
}

void MainWindow::switchSignup()
{
    ui->stackedWidget->setCurrentWidget(ui->signUpPage);
}
void MainWindow::switchLogin()
{
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}
void MainWindow::on_adminButton_clicked()
{
    QMessageBox::information(this, "Admin Selected", "Navigating to admin interface (not implemented).");
}
void MainWindow::on_userButton_clicked()
{
    QMessageBox::information(this, "User Selected", "Navigating to user interface (not implemented).");
}


