/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_main;
    QFrame *sidebarFrame;
    QVBoxLayout *verticalLayout_sidebar;
    QListWidget *sidebarListWidget;
    QFrame *contentFrame;
    QVBoxLayout *verticalLayout_content;
    QFrame *headerFrame;
    QHBoxLayout *horizontalLayout_header;
    QLabel *adminLabel;
    QSpacerItem *horizontalSpacer_header;
    QLabel *menuIconLabel;
    QSpacerItem *horizontalSpacer_header_2;
    QLabel *userIconLabel;
    QFrame *cardGridFrame;
    QGridLayout *gridLayout_cards;
    QFrame *card1Frame;
    QVBoxLayout *verticalLayout_card1;
    QLabel *carIcon1;
    QLabel *card1ValueLabel;
    QLabel *card1TitleLabel;
    QFrame *card2Frame;
    QVBoxLayout *verticalLayout_card2;
    QLabel *carIcon2;
    QLabel *card2ValueLabel;
    QLabel *card2TitleLabel;
    QFrame *card3Frame;
    QVBoxLayout *verticalLayout_card3;
    QLabel *carIcon3;
    QLabel *card3ValueLabel;
    QLabel *card3TitleLabel;
    QFrame *card4Frame;
    QVBoxLayout *verticalLayout_card4;
    QLabel *carIcon4;
    QLabel *card4ValueLabel;
    QLabel *card4TitleLabel;
    QFrame *card5Frame;
    QVBoxLayout *verticalLayout_card5;
    QLabel *userIcon;
    QLabel *card5ValueLabel;
    QLabel *card5TitleLabel;
    QFrame *card6Frame;
    QVBoxLayout *verticalLayout_card6;
    QLabel *categoryIcon;
    QLabel *card6ValueLabel;
    QLabel *card6TitleLabel;
    QSpacerItem *horizontalSpacer_card_row2;
    QSpacerItem *horizontalSpacer_card_row2_2;
    QSpacerItem *verticalSpacer_content;
    QLabel *footerTextLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 800);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"    QMainWindow {\n"
"        background-color: #F5F7FA; /* Light grey background */\n"
"    }\n"
"    /* Header Styling */\n"
"    #headerFrame {\n"
"        background-color: #FFFFFF;\n"
"        border-bottom: 1px solid #E0E0E0;\n"
"        padding: 10px 20px;\n"
"    }\n"
"    #adminLabel {\n"
"        font-family: \"Inter\";\n"
"        font-size: 24px;\n"
"        font-weight: bold;\n"
"        color: #333333;\n"
"    }\n"
"    #adminLabel .highlight {\n"
"        color: #4285F4; /* Blue accent for 'Admin' */\n"
"    }\n"
"    #menuIconLabel, #userIconLabel {\n"
"        font-size: 28px;\n"
"        color: #666666;\n"
"    }\n"
"\n"
"    /* Sidebar Styling */\n"
"    #sidebarFrame {\n"
"        background-color: #FFFFFF;\n"
"        border-right: 1px solid #E0E0E0;\n"
"    }\n"
"    #sidebarListWidget {\n"
"        border: none;\n"
"        background-color: transparent;\n"
"        padding: 10px 0;\n"
"    }\n"
"    #sidebarListWidget::item {\n"
"        padding: 12px 20px;\n"
"        color: #6666"
                        "66;\n"
"        font-family: \"Inter\";\n"
"        font-size: 15px;\n"
"        border-left: 4px solid transparent; /* For active indicator */\n"
"    }\n"
"    #sidebarListWidget::item:selected {\n"
"        background-color: #E6F0FF; /* Light blue background for selected */\n"
"        color: #4285F4; /* Blue text for selected */\n"
"        border-left: 4px solid #4285F4; /* Blue indicator for selected */\n"
"        font-weight: bold;\n"
"    }\n"
"    #sidebarListWidget::item:hover:!selected {\n"
"        background-color: #F0F2F5; /* Slightly darker hover for unselected */\n"
"    }\n"
"    /* Style for icons in list items (if using iconMode) */\n"
"    #sidebarListWidget QAbstractItemView::indicator {\n"
"        width: 24px; /* Adjust as needed */\n"
"        height: 24px;\n"
"        margin-right: 10px;\n"
"    }\n"
"\n"
"    /* Dashboard Cards Styling */\n"
"    /* Target QFrames whose objectName starts with 'card' */\n"
"    QFrame[objectName^=\"card\"] {\n"
"        background-color: #FFFFFF;\n"
""
                        "        border-radius: 8px;\n"
"        box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.05); /* Subtle shadow */\n"
"    }\n"
"    /* Target QLabels with the custom dynamic property 'cssClass' set to 'cardValue' */\n"
"    QLabel[cssClass=\"cardValue\"] {\n"
"        font-family: \"Inter\";\n"
"        font-size: 36px;\n"
"        font-weight: bold;\n"
"        color: #333333;\n"
"    }\n"
"    /* Target QLabels with the custom dynamic property 'cssClass' set to 'cardTitle' */\n"
"    QLabel[cssClass=\"cardTitle\"] {\n"
"        font-family: \"Inter\";\n"
"        font-size: 14px;\n"
"        color: #666666;\n"
"    }\n"
"    /* Target QLabels with the custom dynamic property 'cssClass' set to 'cardIcon' */\n"
"    QLabel[cssClass=\"cardIcon\"] {\n"
"        font-size: 40px; /* Adjust icon size */\n"
"        padding: 8px;\n"
"        border-radius: 50%;\n"
"    }\n"
"    #carIcon1 { background-color: #F8FBF8; color: #6FCF97; } /* Green */\n"
"    #carIcon2 { background-color: #F8F0FF; color: #BB6BD9; } /* Purple */\n"
""
                        "    #carIcon3 { background-color: #E6F0FF; color: #4285F4; } /* Blue */\n"
"    #carIcon4 { background-color: #FFF0E6; color: #FF9F42; } /* Orange */\n"
"    #userIcon { background-color: #E6F0FF; color: #4285F4; }\n"
"    #categoryIcon { background-color: #F8FBF8; color: #6FCF97; }\n"
"\n"
"    /* Footer / Main Content Text */\n"
"    #footerTextLabel {\n"
"        font-family: \"Inter\";\n"
"        font-size: 16px;\n"
"        color: #999999;\n"
"        text-align: center;\n"
"        padding: 20px;\n"
"    }\n"
"   "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_main = new QHBoxLayout(centralwidget);
        horizontalLayout_main->setSpacing(0);
        horizontalLayout_main->setObjectName("horizontalLayout_main");
        horizontalLayout_main->setContentsMargins(0, 0, 0, 0);
        sidebarFrame = new QFrame(centralwidget);
        sidebarFrame->setObjectName("sidebarFrame");
        sidebarFrame->setMinimumSize(QSize(220, 0));
        sidebarFrame->setMaximumSize(QSize(250, 16777215));
        sidebarFrame->setFrameShape(QFrame::NoFrame);
        sidebarFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_sidebar = new QVBoxLayout(sidebarFrame);
        verticalLayout_sidebar->setSpacing(0);
        verticalLayout_sidebar->setObjectName("verticalLayout_sidebar");
        verticalLayout_sidebar->setContentsMargins(0, 0, 0, 0);
        sidebarListWidget = new QListWidget(sidebarFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/dashboard.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(sidebarListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/category.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(sidebarListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/add_vehicle.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(sidebarListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/manage_vehicle.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(sidebarListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/reports.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(sidebarListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/search_vehicle.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(sidebarListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/reg_users.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(sidebarListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        sidebarListWidget->setObjectName("sidebarListWidget");
        sidebarListWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout_sidebar->addWidget(sidebarListWidget);


        horizontalLayout_main->addWidget(sidebarFrame);

        contentFrame = new QFrame(centralwidget);
        contentFrame->setObjectName("contentFrame");
        contentFrame->setFrameShape(QFrame::NoFrame);
        contentFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_content = new QVBoxLayout(contentFrame);
        verticalLayout_content->setSpacing(20);
        verticalLayout_content->setObjectName("verticalLayout_content");
        verticalLayout_content->setContentsMargins(20, 20, 20, 20);
        headerFrame = new QFrame(contentFrame);
        headerFrame->setObjectName("headerFrame");
        headerFrame->setFrameShape(QFrame::NoFrame);
        headerFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_header = new QHBoxLayout(headerFrame);
        horizontalLayout_header->setObjectName("horizontalLayout_header");
        horizontalLayout_header->setContentsMargins(0, 0, 0, 0);
        adminLabel = new QLabel(headerFrame);
        adminLabel->setObjectName("adminLabel");
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        adminLabel->setFont(font);

        horizontalLayout_header->addWidget(adminLabel);

        horizontalSpacer_header = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_header->addItem(horizontalSpacer_header);

        menuIconLabel = new QLabel(headerFrame);
        menuIconLabel->setObjectName("menuIconLabel");
        QFont font1;
        font1.setPointSize(28);
        menuIconLabel->setFont(font1);

        horizontalLayout_header->addWidget(menuIconLabel);

        horizontalSpacer_header_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_header->addItem(horizontalSpacer_header_2);

        userIconLabel = new QLabel(headerFrame);
        userIconLabel->setObjectName("userIconLabel");
        userIconLabel->setFont(font1);

        horizontalLayout_header->addWidget(userIconLabel);


        verticalLayout_content->addWidget(headerFrame);

        cardGridFrame = new QFrame(contentFrame);
        cardGridFrame->setObjectName("cardGridFrame");
        cardGridFrame->setFrameShape(QFrame::NoFrame);
        cardGridFrame->setFrameShadow(QFrame::Raised);
        gridLayout_cards = new QGridLayout(cardGridFrame);
        gridLayout_cards->setSpacing(20);
        gridLayout_cards->setObjectName("gridLayout_cards");
        card1Frame = new QFrame(cardGridFrame);
        card1Frame->setObjectName("card1Frame");
        card1Frame->setMinimumSize(QSize(250, 120));
        card1Frame->setFrameShape(QFrame::StyledPanel);
        card1Frame->setFrameShadow(QFrame::Raised);
        verticalLayout_card1 = new QVBoxLayout(card1Frame);
        verticalLayout_card1->setSpacing(10);
        verticalLayout_card1->setObjectName("verticalLayout_card1");
        verticalLayout_card1->setContentsMargins(20, 20, 20, 20);
        carIcon1 = new QLabel(card1Frame);
        carIcon1->setObjectName("carIcon1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(carIcon1->sizePolicy().hasHeightForWidth());
        carIcon1->setSizePolicy(sizePolicy);
        QFont font2;
        carIcon1->setFont(font2);
        carIcon1->setStyleSheet(QString::fromUtf8("\n"
"                 QLabel {\n"
"                     font-size: 40px; /* Adjust icon size */\n"
"                     padding: 8px;\n"
"                     border-radius: 50%;\n"
"                 }\n"
"                "));
        carIcon1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_card1->addWidget(carIcon1);

        card1ValueLabel = new QLabel(card1Frame);
        card1ValueLabel->setObjectName("card1ValueLabel");

        verticalLayout_card1->addWidget(card1ValueLabel);

        card1TitleLabel = new QLabel(card1Frame);
        card1TitleLabel->setObjectName("card1TitleLabel");

        verticalLayout_card1->addWidget(card1TitleLabel);


        gridLayout_cards->addWidget(card1Frame, 0, 0, 1, 1);

        card2Frame = new QFrame(cardGridFrame);
        card2Frame->setObjectName("card2Frame");
        card2Frame->setMinimumSize(QSize(250, 120));
        card2Frame->setFrameShape(QFrame::StyledPanel);
        card2Frame->setFrameShadow(QFrame::Raised);
        verticalLayout_card2 = new QVBoxLayout(card2Frame);
        verticalLayout_card2->setSpacing(10);
        verticalLayout_card2->setObjectName("verticalLayout_card2");
        verticalLayout_card2->setContentsMargins(20, 20, 20, 20);
        carIcon2 = new QLabel(card2Frame);
        carIcon2->setObjectName("carIcon2");

        verticalLayout_card2->addWidget(carIcon2);

        card2ValueLabel = new QLabel(card2Frame);
        card2ValueLabel->setObjectName("card2ValueLabel");

        verticalLayout_card2->addWidget(card2ValueLabel);

        card2TitleLabel = new QLabel(card2Frame);
        card2TitleLabel->setObjectName("card2TitleLabel");

        verticalLayout_card2->addWidget(card2TitleLabel);


        gridLayout_cards->addWidget(card2Frame, 0, 1, 1, 1);

        card3Frame = new QFrame(cardGridFrame);
        card3Frame->setObjectName("card3Frame");
        card3Frame->setMinimumSize(QSize(250, 120));
        card3Frame->setFrameShape(QFrame::StyledPanel);
        card3Frame->setFrameShadow(QFrame::Raised);
        verticalLayout_card3 = new QVBoxLayout(card3Frame);
        verticalLayout_card3->setSpacing(10);
        verticalLayout_card3->setObjectName("verticalLayout_card3");
        verticalLayout_card3->setContentsMargins(20, 20, 20, 20);
        carIcon3 = new QLabel(card3Frame);
        carIcon3->setObjectName("carIcon3");

        verticalLayout_card3->addWidget(carIcon3);

        card3ValueLabel = new QLabel(card3Frame);
        card3ValueLabel->setObjectName("card3ValueLabel");

        verticalLayout_card3->addWidget(card3ValueLabel);

        card3TitleLabel = new QLabel(card3Frame);
        card3TitleLabel->setObjectName("card3TitleLabel");

        verticalLayout_card3->addWidget(card3TitleLabel);


        gridLayout_cards->addWidget(card3Frame, 0, 2, 1, 1);

        card4Frame = new QFrame(cardGridFrame);
        card4Frame->setObjectName("card4Frame");
        card4Frame->setMinimumSize(QSize(250, 120));
        card4Frame->setFrameShape(QFrame::StyledPanel);
        card4Frame->setFrameShadow(QFrame::Raised);
        verticalLayout_card4 = new QVBoxLayout(card4Frame);
        verticalLayout_card4->setSpacing(10);
        verticalLayout_card4->setObjectName("verticalLayout_card4");
        verticalLayout_card4->setContentsMargins(20, 20, 20, 20);
        carIcon4 = new QLabel(card4Frame);
        carIcon4->setObjectName("carIcon4");

        verticalLayout_card4->addWidget(carIcon4);

        card4ValueLabel = new QLabel(card4Frame);
        card4ValueLabel->setObjectName("card4ValueLabel");

        verticalLayout_card4->addWidget(card4ValueLabel);

        card4TitleLabel = new QLabel(card4Frame);
        card4TitleLabel->setObjectName("card4TitleLabel");

        verticalLayout_card4->addWidget(card4TitleLabel);


        gridLayout_cards->addWidget(card4Frame, 0, 3, 1, 1);

        card5Frame = new QFrame(cardGridFrame);
        card5Frame->setObjectName("card5Frame");
        card5Frame->setMinimumSize(QSize(250, 120));
        card5Frame->setFrameShape(QFrame::StyledPanel);
        card5Frame->setFrameShadow(QFrame::Raised);
        verticalLayout_card5 = new QVBoxLayout(card5Frame);
        verticalLayout_card5->setSpacing(10);
        verticalLayout_card5->setObjectName("verticalLayout_card5");
        verticalLayout_card5->setContentsMargins(20, 20, 20, 20);
        userIcon = new QLabel(card5Frame);
        userIcon->setObjectName("userIcon");

        verticalLayout_card5->addWidget(userIcon);

        card5ValueLabel = new QLabel(card5Frame);
        card5ValueLabel->setObjectName("card5ValueLabel");

        verticalLayout_card5->addWidget(card5ValueLabel);

        card5TitleLabel = new QLabel(card5Frame);
        card5TitleLabel->setObjectName("card5TitleLabel");

        verticalLayout_card5->addWidget(card5TitleLabel);


        gridLayout_cards->addWidget(card5Frame, 1, 0, 1, 1);

        card6Frame = new QFrame(cardGridFrame);
        card6Frame->setObjectName("card6Frame");
        card6Frame->setMinimumSize(QSize(250, 120));
        card6Frame->setFrameShape(QFrame::StyledPanel);
        card6Frame->setFrameShadow(QFrame::Raised);
        verticalLayout_card6 = new QVBoxLayout(card6Frame);
        verticalLayout_card6->setSpacing(10);
        verticalLayout_card6->setObjectName("verticalLayout_card6");
        verticalLayout_card6->setContentsMargins(20, 20, 20, 20);
        categoryIcon = new QLabel(card6Frame);
        categoryIcon->setObjectName("categoryIcon");

        verticalLayout_card6->addWidget(categoryIcon);

        card6ValueLabel = new QLabel(card6Frame);
        card6ValueLabel->setObjectName("card6ValueLabel");

        verticalLayout_card6->addWidget(card6ValueLabel);

        card6TitleLabel = new QLabel(card6Frame);
        card6TitleLabel->setObjectName("card6TitleLabel");

        verticalLayout_card6->addWidget(card6TitleLabel);


        gridLayout_cards->addWidget(card6Frame, 1, 1, 1, 1);

        horizontalSpacer_card_row2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_cards->addItem(horizontalSpacer_card_row2, 1, 2, 1, 1);

        horizontalSpacer_card_row2_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_cards->addItem(horizontalSpacer_card_row2_2, 1, 3, 1, 1);


        verticalLayout_content->addWidget(cardGridFrame);

        verticalSpacer_content = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_content->addItem(verticalSpacer_content);

        footerTextLabel = new QLabel(contentFrame);
        footerTextLabel->setObjectName("footerTextLabel");

        verticalLayout_content->addWidget(footerTextLabel, 0, Qt::AlignCenter);


        horizontalLayout_main->addWidget(contentFrame);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "VPMS Admin Dashboard", nullptr));

        const bool __sortingEnabled = sidebarListWidget->isSortingEnabled();
        sidebarListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = sidebarListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "  Dashboard", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = sidebarListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "  Vehicle Category", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = sidebarListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "  Add Vehicle", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = sidebarListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "  Manage Vehicle", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = sidebarListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "  Reports", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = sidebarListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "  Search Vehicle", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = sidebarListWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "  Reg Users", nullptr));
        sidebarListWidget->setSortingEnabled(__sortingEnabled);

        adminLabel->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        menuIconLabel->setText(QCoreApplication::translate("MainWindow", "\342\230\260", nullptr));
        userIconLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244", nullptr));
        carIcon1->setText(QCoreApplication::translate("MainWindow", "\360\237\232\227", nullptr));
        carIcon1->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardIcon", nullptr)));
        card1ValueLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        card1ValueLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardValue", nullptr)));
        card1TitleLabel->setText(QCoreApplication::translate("MainWindow", "Todays Vehicle Entries", nullptr));
        card1TitleLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardTitle", nullptr)));
        carIcon2->setText(QCoreApplication::translate("MainWindow", "\360\237\232\227", nullptr));
        carIcon2->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardIcon", nullptr)));
        card2ValueLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        card2ValueLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardValue", nullptr)));
        card2TitleLabel->setText(QCoreApplication::translate("MainWindow", "Yesterdays Vehicle Entries", nullptr));
        card2TitleLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardTitle", nullptr)));
        carIcon3->setText(QCoreApplication::translate("MainWindow", "\360\237\232\227", nullptr));
        carIcon3->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardIcon", nullptr)));
        card3ValueLabel->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        card3ValueLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardValue", nullptr)));
        card3TitleLabel->setText(QCoreApplication::translate("MainWindow", "Last 7 days Vehicle Entries", nullptr));
        card3TitleLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardTitle", nullptr)));
        carIcon4->setText(QCoreApplication::translate("MainWindow", "\360\237\232\227", nullptr));
        carIcon4->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardIcon", nullptr)));
        card4ValueLabel->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        card4ValueLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardValue", nullptr)));
        card4TitleLabel->setText(QCoreApplication::translate("MainWindow", "Total Vehicle Entries", nullptr));
        card4TitleLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardTitle", nullptr)));
        userIcon->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244", nullptr));
        userIcon->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardIcon", nullptr)));
        card5ValueLabel->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        card5ValueLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardValue", nullptr)));
        card5TitleLabel->setText(QCoreApplication::translate("MainWindow", "Total Registered Users", nullptr));
        card5TitleLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardTitle", nullptr)));
        categoryIcon->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204", nullptr));
        categoryIcon->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardIcon", nullptr)));
        card6ValueLabel->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        card6ValueLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardValue", nullptr)));
        card6TitleLabel->setText(QCoreApplication::translate("MainWindow", "Listed Categories", nullptr));
        card6TitleLabel->setProperty("cssClass", QVariant(QCoreApplication::translate("MainWindow", "cardTitle", nullptr)));
        footerTextLabel->setText(QCoreApplication::translate("MainWindow", "Vehicle Parking Management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
