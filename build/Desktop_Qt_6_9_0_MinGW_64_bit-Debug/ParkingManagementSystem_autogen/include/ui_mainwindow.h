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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *subtitleLabel;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *inputLayout;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QPushButton *forgotPasswordButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(30, 50, 30, 50);
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(24);
        font.setBold(false);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        subtitleLabel = new QLabel(centralwidget);
        subtitleLabel->setObjectName("subtitleLabel");
        QFont font1;
        font1.setPointSize(10);
        subtitleLabel->setFont(font1);
        subtitleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(subtitleLabel);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        inputLayout = new QVBoxLayout();
        inputLayout->setSpacing(15);
        inputLayout->setObjectName("inputLayout");
        usernameLineEdit = new QLineEdit(centralwidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setMinimumSize(QSize(0, 40));

        inputLayout->addWidget(usernameLineEdit);

        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setMinimumSize(QSize(0, 40));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        inputLayout->addWidget(passwordLineEdit);


        verticalLayout->addLayout(inputLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setMinimumSize(QSize(0, 40));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        loginButton->setFont(font2);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #00b8d4; /* A vibrant cyan color */\n"
"  border: none;\n"
"  border-radius: 20px; /* Fully rounded corners */\n"
"  color: white;\n"
"  padding: 10px 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  margin: 4px 2px;\n"
"  cursor: pointer;\n"
"  transition: background-color 0.3s ease; /* Smooth transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #00869e; /* A slightly darker shade on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #005a65; /* Even darker when pressed */\n"
"}"));

        verticalLayout->addWidget(loginButton);

        forgotPasswordButton = new QPushButton(centralwidget);
        forgotPasswordButton->setObjectName("forgotPasswordButton");
        forgotPasswordButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background: none;\n"
"  border: none;\n"
"  color: #808080; /* Gray color */\n"
"  padding: 10px 20px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  display: inline-block;\n"
"  font-size: 12px;\n"
"  margin: 4px 2px;\n"
"  cursor: pointer;\n"
"  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  color: #b0b0b0; /* A lighter shade on hover */\n"
"  text-decoration: underline;\n"
"}\n"
""));

        verticalLayout->addWidget(forgotPasswordButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Parking Management System - Login", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        subtitleLabel->setText(QCoreApplication::translate("MainWindow", "Please sign in to continue.", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        forgotPasswordButton->setText(QCoreApplication::translate("MainWindow", "Forgot Password?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
