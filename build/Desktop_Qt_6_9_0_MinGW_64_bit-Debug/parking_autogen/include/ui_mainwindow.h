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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_login;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_avatar;
    QTabWidget *tabWidget;
    QWidget *tab_login;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_submit;
    QLabel *label_forgot;
    QWidget *tab_signup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame_login = new QFrame(centralwidget);
        frame_login->setObjectName("frame_login");
        frame_login->setStyleSheet(QString::fromUtf8("\n"
"        background-color: #2d2d2d;\n"
"        border-radius: 30px;\n"
"        padding: 30px;\n"
"        color: white;\n"
"       "));
        frame_login->setFrameShape(QFrame::StyledPanel);
        frame_login->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_login);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_avatar = new QLabel(frame_login);
        label_avatar->setObjectName("label_avatar");
        label_avatar->setMinimumSize(QSize(80, 80));
        label_avatar->setMaximumSize(QSize(80, 80));
        label_avatar->setStyleSheet(QString::fromUtf8("\n"
"           border-radius: 40px;\n"
"           background-color: #3a3a3a;\n"
"           margin-bottom: 0px;\n"
"          "));
        label_avatar->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/avatar_placeholder.png")));
        label_avatar->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_avatar);

        tabWidget = new QTabWidget(frame_login);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8("\n"
"            QTabBar::tab {\n"
"                background: transparent;\n"
"                color: gray;\n"
"                padding: 8px;\n"
"                font: bold 10pt \"Segoe UI\";\n"
"            }\n"
"            QTabBar::tab:selected {\n"
"                color: white;\n"
"                border-bottom: 2px solid white;\n"
"            }\n"
"            QTabWidget::pane {\n"
"                border: none;\n"
"                margin: 0px;\n"
"            }\n"
"          "));
        tab_login = new QWidget();
        tab_login->setObjectName("tab_login");
        verticalLayout_3 = new QVBoxLayout(tab_login);
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEdit_email = new QLineEdit(tab_login);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setStyleSheet(QString::fromUtf8("\n"
"                background-color: #3a3a3a;\n"
"                color: white;\n"
"                padding: 10px;\n"
"                border: none;\n"
"                border-radius: 8px;\n"
"              "));

        verticalLayout_3->addWidget(lineEdit_email);

        lineEdit_password = new QLineEdit(tab_login);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setStyleSheet(QString::fromUtf8("\n"
"                background-color: #3a3a3a;\n"
"                color: white;\n"
"                padding: 10px;\n"
"                border: none;\n"
"                border-radius: 8px;\n"
"              "));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_password);

        pushButton_submit = new QPushButton(tab_login);
        pushButton_submit->setObjectName("pushButton_submit");
        pushButton_submit->setStyleSheet(QString::fromUtf8("\n"
"                background-color: #00C781;\n"
"                color: white;\n"
"                font: bold 10pt \"Segoe UI\";\n"
"                padding: 10px;\n"
"                border-radius: 8px;\n"
"              "));

        verticalLayout_3->addWidget(pushButton_submit);

        label_forgot = new QLabel(tab_login);
        label_forgot->setObjectName("label_forgot");
        label_forgot->setStyleSheet(QString::fromUtf8("\n"
"                color: gray;\n"
"                margin-top: 10px;\n"
"                font: italic 8pt \"Segoe UI\";\n"
"              "));
        label_forgot->setAlignment(Qt::AlignCenter);
        label_forgot->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(label_forgot);

        tabWidget->addTab(tab_login, QString());
        tab_signup = new QWidget();
        tab_signup->setObjectName("tab_signup");
        tabWidget->addTab(tab_signup, QString());

        verticalLayout_2->addWidget(tabWidget);


        verticalLayout->addWidget(frame_login);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lineEdit_email->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_submit->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label_forgot->setText(QCoreApplication::translate("MainWindow", "<a href=\"#\">FORGOT YOUR PASSWORD?</a>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_login), QCoreApplication::translate("MainWindow", "Login", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_signup), QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
