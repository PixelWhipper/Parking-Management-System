/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_main;
    QSpacerItem *verticalSpacer_top;
    QLabel *iconLabel;
    QLabel *titleLabel;
    QLineEdit *emailLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *forgotPasswordLabel;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer_middle;
    QWidget *signUpContainer;
    QHBoxLayout *horizontalLayout_signUp;
    QLabel *noAccountLabel;
    QLabel *signUpLabel;
    QSpacerItem *verticalSpacer_bottom;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(450, 550);
        LoginDialog->setStyleSheet(QString::fromUtf8("\n"
"    QDialog {\n"
"        background-color: #FFFFFF;\n"
"    }\n"
"    QLabel {\n"
"        font-family: \"Inter\";\n"
"        color: #333333;\n"
"    }\n"
"    QLineEdit {\n"
"        border: 1px solid #E0E0E0;\n"
"        border-radius: 8px;\n"
"        padding: 12px;\n"
"        font-family: \"Inter\";\n"
"        font-size: 14px;\n"
"        color: #333333;\n"
"        background-color: #F8F8F8;\n"
"    }\n"
"    QLineEdit:focus {\n"
"        border: 1px solid #4285F4;\n"
"    }\n"
"    QPushButton {\n"
"        border-radius: 8px;\n"
"        padding: 12px;\n"
"        font-family: \"Inter\";\n"
"        font-size: 16px;\n"
"        font-weight: bold;\n"
"    }\n"
"    #loginButton { /* Specific style for the Sign In button */\n"
"        background-color: #4285F4; /* Google Blue */\n"
"        color: #FFFFFF;\n"
"        border: none;\n"
"    }\n"
"    #loginButton:hover {\n"
"        background-color: #357AE8;\n"
"    }\n"
"    #forgotPasswordLabel, #signUpLabel {\n"
"        color: #4285F4;\n"
" "
                        "       text-decoration: none; /* remove underline for QLabels acting as links */\n"
"    }\n"
"    #signUpContainer QLabel {\n"
"        color: #666666; /* For \"Don't have an account?\" */\n"
"    }\n"
"    #iconLabel {\n"
"        font-size: 48px; /* Larger icon */\n"
"        color: #4285F4;\n"
"        /* You might replace this with an actual SVG/image later */\n"
"    }\n"
"    #titleLabel {\n"
"        font-size: 28px;\n"
"        font-weight: bold;\n"
"        margin-top: 10px;\n"
"        margin-bottom: 20px;\n"
"    }\n"
"   "));
        verticalLayout_main = new QVBoxLayout(LoginDialog);
        verticalLayout_main->setSpacing(20);
        verticalLayout_main->setObjectName("verticalLayout_main");
        verticalLayout_main->setContentsMargins(40, 40, 40, 40);
        verticalSpacer_top = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_main->addItem(verticalSpacer_top);

        iconLabel = new QLabel(LoginDialog);
        iconLabel->setObjectName("iconLabel");
        QFont font;
        font.setPointSize(48);
        iconLabel->setFont(font);
        iconLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_main->addWidget(iconLabel, 0, Qt::AlignCenter);

        titleLabel = new QLabel(LoginDialog);
        titleLabel->setObjectName("titleLabel");
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        titleLabel->setFont(font1);
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_main->addWidget(titleLabel, 0, Qt::AlignCenter);

        emailLineEdit = new QLineEdit(LoginDialog);
        emailLineEdit->setObjectName("emailLineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emailLineEdit->sizePolicy().hasHeightForWidth());
        emailLineEdit->setSizePolicy(sizePolicy);
        emailLineEdit->setMinimumHeight(48);

        verticalLayout_main->addWidget(emailLineEdit);

        passwordLineEdit = new QLineEdit(LoginDialog);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        sizePolicy.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy);
        passwordLineEdit->setMinimumHeight(48);

        verticalLayout_main->addWidget(passwordLineEdit);

        forgotPasswordLabel = new QLabel(LoginDialog);
        forgotPasswordLabel->setObjectName("forgotPasswordLabel");
        forgotPasswordLabel->setOpenExternalLinks(false);
        forgotPasswordLabel->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_main->addWidget(forgotPasswordLabel, 0, Qt::AlignRight);

        loginButton = new QPushButton(LoginDialog);
        loginButton->setObjectName("loginButton");
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);
        loginButton->setMinimumHeight(50);

        verticalLayout_main->addWidget(loginButton);

        verticalSpacer_middle = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_main->addItem(verticalSpacer_middle);

        signUpContainer = new QWidget(LoginDialog);
        signUpContainer->setObjectName("signUpContainer");
        horizontalLayout_signUp = new QHBoxLayout(signUpContainer);
        horizontalLayout_signUp->setSpacing(5);
        horizontalLayout_signUp->setObjectName("horizontalLayout_signUp");
        horizontalLayout_signUp->setContentsMargins(0, 0, 0, 0);
        noAccountLabel = new QLabel(signUpContainer);
        noAccountLabel->setObjectName("noAccountLabel");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Inter")});
        noAccountLabel->setFont(font2);

        horizontalLayout_signUp->addWidget(noAccountLabel);

        signUpLabel = new QLabel(signUpContainer);
        signUpLabel->setObjectName("signUpLabel");
        signUpLabel->setOpenExternalLinks(false);
        signUpLabel->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        signUpLabel->setFont(font2);

        horizontalLayout_signUp->addWidget(signUpLabel);


        verticalLayout_main->addWidget(signUpContainer, 0, Qt::AlignCenter);

        verticalSpacer_bottom = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_main->addItem(verticalSpacer_bottom);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Sign In", nullptr));
        iconLabel->setText(QCoreApplication::translate("LoginDialog", "\342\200\242\342\200\242\342\200\242", nullptr));
        titleLabel->setText(QCoreApplication::translate("LoginDialog", "Sign in", nullptr));
        emailLineEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "E-mail Address *", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "Password *", nullptr));
        forgotPasswordLabel->setText(QCoreApplication::translate("LoginDialog", "<a href=\"#\" style=\"text-decoration:none; color:#4285F4;\">Forgot password?</a>", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginDialog", "Sign in", nullptr));
        noAccountLabel->setText(QCoreApplication::translate("LoginDialog", "Don't have an account?", nullptr));
        signUpLabel->setText(QCoreApplication::translate("LoginDialog", "<a href=\"#\" style=\"text-decoration:none; color:#4285F4; font-weight:bold;\">Sign Up!</a>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
