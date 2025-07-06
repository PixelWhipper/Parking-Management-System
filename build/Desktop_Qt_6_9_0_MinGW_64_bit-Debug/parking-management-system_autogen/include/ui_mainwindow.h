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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedLayout *stackedWidget;
    QWidget *loginPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *loginTitle;
    QFormLayout *loginForm;
    QLabel *emailLabel;
    QLineEdit *emailEdit;
    QLabel *passwordLabel_login;
    QLineEdit *passwordEdit_login;
    QPushButton *loginButton;
    QLabel *forgotPasswordLabel;
    QLabel *signUpLabel;
    QWidget *dashboardPage;
    QVBoxLayout *verticalLayout;
    QLabel *dashboardTitle;
    QLabel *spotCounterTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *availableSpotsLabel;
    QLabel *occupiedSpotsLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *parkCarButton;
    QPushButton *carLeftButton;
    QCheckBox *enableLogCheckBox;
    QFrame *parkingLogFrame;
    QVBoxLayout *verticalLayout_3;
    QLabel *parkingLogTitle;
    QTextEdit *parkingLogTextEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedLayout(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        loginPage = new QWidget(centralwidget);
        loginPage->setObjectName("loginPage");
        verticalLayout_2 = new QVBoxLayout(loginPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        loginTitle = new QLabel(loginPage);
        loginTitle->setObjectName("loginTitle");
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        loginTitle->setFont(font);
        loginTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(loginTitle);

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
        passwordEdit_login->setEchoMode(QLineEdit::Password);

        loginForm->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit_login);


        verticalLayout_2->addLayout(loginForm);

        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName("loginButton");
        loginButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  background-color: #2d89ef;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #1b6dc1;\n"
"}\n"
"          "));

        verticalLayout_2->addWidget(loginButton);

        forgotPasswordLabel = new QLabel(loginPage);
        forgotPasswordLabel->setObjectName("forgotPasswordLabel");
        forgotPasswordLabel->setAlignment(Qt::AlignCenter);
        forgotPasswordLabel->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(forgotPasswordLabel);

        signUpLabel = new QLabel(loginPage);
        signUpLabel->setObjectName("signUpLabel");
        signUpLabel->setAlignment(Qt::AlignCenter);
        signUpLabel->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(signUpLabel);


        stackedWidget->addWidget(loginPage);

        dashboardPage = new QWidget(centralwidget);
        dashboardPage->setObjectName("dashboardPage");
        verticalLayout = new QVBoxLayout(dashboardPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dashboardTitle = new QLabel(dashboardPage);
        dashboardTitle->setObjectName("dashboardTitle");
        dashboardTitle->setFont(font);
        dashboardTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(dashboardTitle);

        spotCounterTitle = new QLabel(dashboardPage);
        spotCounterTitle->setObjectName("spotCounterTitle");
        QFont font1;
        font1.setPointSize(14);
        spotCounterTitle->setFont(font1);
        spotCounterTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(spotCounterTitle);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        availableSpotsLabel = new QLabel(dashboardPage);
        availableSpotsLabel->setObjectName("availableSpotsLabel");
        availableSpotsLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(availableSpotsLabel);

        occupiedSpotsLabel = new QLabel(dashboardPage);
        occupiedSpotsLabel->setObjectName("occupiedSpotsLabel");
        occupiedSpotsLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(occupiedSpotsLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        parkCarButton = new QPushButton(dashboardPage);
        parkCarButton->setObjectName("parkCarButton");

        horizontalLayout->addWidget(parkCarButton);

        carLeftButton = new QPushButton(dashboardPage);
        carLeftButton->setObjectName("carLeftButton");

        horizontalLayout->addWidget(carLeftButton);


        verticalLayout->addLayout(horizontalLayout);

        enableLogCheckBox = new QCheckBox(dashboardPage);
        enableLogCheckBox->setObjectName("enableLogCheckBox");

        verticalLayout->addWidget(enableLogCheckBox);

        parkingLogFrame = new QFrame(dashboardPage);
        parkingLogFrame->setObjectName("parkingLogFrame");
        parkingLogFrame->setFrameShape(QFrame::StyledPanel);
        verticalLayout_3 = new QVBoxLayout(parkingLogFrame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        parkingLogTitle = new QLabel(parkingLogFrame);
        parkingLogTitle->setObjectName("parkingLogTitle");
        QFont font2;
        font2.setPointSize(12);
        parkingLogTitle->setFont(font2);
        parkingLogTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(parkingLogTitle);

        parkingLogTextEdit = new QTextEdit(parkingLogFrame);
        parkingLogTextEdit->setObjectName("parkingLogTextEdit");
        parkingLogTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(parkingLogTextEdit);


        verticalLayout->addWidget(parkingLogFrame);


        stackedWidget->addWidget(dashboardPage);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Parking Management System", nullptr));
        loginTitle->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        emailLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        passwordLabel_login->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        forgotPasswordLabel->setText(QCoreApplication::translate("MainWindow", "<a href=\"#\">Forgot Password?</a>", nullptr));
        signUpLabel->setText(QCoreApplication::translate("MainWindow", "Don't have an account? <a href=\"#\">Sign up</a>", nullptr));
        dashboardTitle->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        spotCounterTitle->setText(QCoreApplication::translate("MainWindow", "Real-time Spot Counter", nullptr));
        availableSpotsLabel->setText(QCoreApplication::translate("MainWindow", "Available Spots: 10", nullptr));
        occupiedSpotsLabel->setText(QCoreApplication::translate("MainWindow", "Occupied Spots: 0", nullptr));
        parkCarButton->setText(QCoreApplication::translate("MainWindow", "Parked a car", nullptr));
        carLeftButton->setText(QCoreApplication::translate("MainWindow", "Car left", nullptr));
        enableLogCheckBox->setText(QCoreApplication::translate("MainWindow", "Enable Parking Log", nullptr));
        parkingLogTitle->setText(QCoreApplication::translate("MainWindow", "Parking Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
