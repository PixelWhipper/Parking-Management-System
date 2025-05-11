/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QVBoxLayout *verticalLayoutLogin;
    QLabel *loginTitle;
    QFormLayout *loginForm;
    QLabel *emailLabel;
    QLineEdit *emailEdit;
    QLabel *passwordLabel_login;
    QLineEdit *passwordEdit_login;
    QWidget *roleSelection;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *adminRadioButton;
    QRadioButton *userRadioButton;
    QPushButton *loginButton;
    QLabel *signUpLabel;
    QWidget *signUpPage;
    QVBoxLayout *verticalLayoutSignUp;
    QLabel *signUpTitle;
    QFormLayout *signUpForm;
    QLabel *emailLabel_signup;
    QLineEdit *emailEdit_signup;
    QLabel *passwordLabel_signup;
    QLineEdit *passwordEdit_signup;
    QPushButton *signUpButton;
    QWidget *mainAppPage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 600, 400));
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        verticalLayoutLogin = new QVBoxLayout(loginPage);
        verticalLayoutLogin->setObjectName("verticalLayoutLogin");
        loginTitle = new QLabel(loginPage);
        loginTitle->setObjectName("loginTitle");
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        loginTitle->setFont(font);
        loginTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayoutLogin->addWidget(loginTitle);

        loginForm = new QFormLayout();
        loginForm->setObjectName("loginForm");
        emailLabel = new QLabel(loginPage);
        emailLabel->setObjectName("emailLabel");

        loginForm->setWidget(0, QFormLayout::ItemRole::LabelRole, emailLabel);

        emailEdit = new QLineEdit(loginPage);
        emailEdit->setObjectName("emailEdit");

        loginForm->setWidget(0, QFormLayout::ItemRole::FieldRole, emailEdit);

        passwordLabel_login = new QLabel(loginPage);
        passwordLabel_login->setObjectName("passwordLabel_login");

        loginForm->setWidget(1, QFormLayout::ItemRole::LabelRole, passwordLabel_login);

        passwordEdit_login = new QLineEdit(loginPage);
        passwordEdit_login->setObjectName("passwordEdit_login");
        passwordEdit_login->setEchoMode(QLineEdit::EchoMode::Password);

        loginForm->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit_login);


        verticalLayoutLogin->addLayout(loginForm);

        roleSelection = new QWidget(loginPage);
        roleSelection->setObjectName("roleSelection");
        horizontalLayout_2 = new QHBoxLayout(roleSelection);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        adminRadioButton = new QRadioButton(roleSelection);
        adminRadioButton->setObjectName("adminRadioButton");

        horizontalLayout_2->addWidget(adminRadioButton);

        userRadioButton = new QRadioButton(roleSelection);
        userRadioButton->setObjectName("userRadioButton");
        userRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(userRadioButton);


        verticalLayoutLogin->addWidget(roleSelection);

        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName("loginButton");

        verticalLayoutLogin->addWidget(loginButton);

        signUpLabel = new QLabel(loginPage);
        signUpLabel->setObjectName("signUpLabel");
        signUpLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        signUpLabel->setOpenExternalLinks(false);

        verticalLayoutLogin->addWidget(signUpLabel);

        stackedWidget->addWidget(loginPage);
        signUpPage = new QWidget();
        signUpPage->setObjectName("signUpPage");
        verticalLayoutSignUp = new QVBoxLayout(signUpPage);
        verticalLayoutSignUp->setObjectName("verticalLayoutSignUp");
        signUpTitle = new QLabel(signUpPage);
        signUpTitle->setObjectName("signUpTitle");
        signUpTitle->setFont(font);
        signUpTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayoutSignUp->addWidget(signUpTitle);

        signUpForm = new QFormLayout();
        signUpForm->setObjectName("signUpForm");
        emailLabel_signup = new QLabel(signUpPage);
        emailLabel_signup->setObjectName("emailLabel_signup");

        signUpForm->setWidget(0, QFormLayout::ItemRole::LabelRole, emailLabel_signup);

        emailEdit_signup = new QLineEdit(signUpPage);
        emailEdit_signup->setObjectName("emailEdit_signup");

        signUpForm->setWidget(0, QFormLayout::ItemRole::FieldRole, emailEdit_signup);

        passwordLabel_signup = new QLabel(signUpPage);
        passwordLabel_signup->setObjectName("passwordLabel_signup");

        signUpForm->setWidget(1, QFormLayout::ItemRole::LabelRole, passwordLabel_signup);

        passwordEdit_signup = new QLineEdit(signUpPage);
        passwordEdit_signup->setObjectName("passwordEdit_signup");
        passwordEdit_signup->setEchoMode(QLineEdit::EchoMode::Password);

        signUpForm->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit_signup);


        verticalLayoutSignUp->addLayout(signUpForm);

        signUpButton = new QPushButton(signUpPage);
        signUpButton->setObjectName("signUpButton");

        verticalLayoutSignUp->addWidget(signUpButton);

        stackedWidget->addWidget(signUpPage);
        mainAppPage = new QWidget();
        mainAppPage->setObjectName("mainAppPage");
        stackedWidget->addWidget(mainAppPage);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Parking Management System", nullptr));
        loginTitle->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        emailLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        passwordLabel_login->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        adminRadioButton->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        userRadioButton->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signUpLabel->setText(QCoreApplication::translate("MainWindow", "Don't have an account? <a href=\"signup\">Sign up</a>", nullptr));
        signUpTitle->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        emailLabel_signup->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        passwordLabel_signup->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        signUpButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
