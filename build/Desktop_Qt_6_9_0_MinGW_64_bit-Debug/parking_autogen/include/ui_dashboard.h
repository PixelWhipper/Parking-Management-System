/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_dashboard_content;
    QVBoxLayout *verticalLayout_dashboard;
    QLabel *label_dashboard_title;
    QGridLayout *gridLayout_stats;
    QVBoxLayout *layout_cell_available;
    QFrame *frame_available_spots;
    QVBoxLayout *verticalLayout_available;
    QLabel *label_available_title;
    QLabel *label_available_count;
    QVBoxLayout *layout_cell_occupied;
    QFrame *frame_occupied_spots;
    QVBoxLayout *verticalLayout_occupied;
    QLabel *label_occupied_title;
    QLabel *label_occupied_count;
    QTableWidget *tableWidget_parking_log;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_logout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DashboardWindow)
    {
        if (DashboardWindow->objectName().isEmpty())
            DashboardWindow->setObjectName("DashboardWindow");
        DashboardWindow->resize(800, 700);
        DashboardWindow->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #2d2d2d;\n"
"    color: white;\n"
"   "));
        centralwidget = new QWidget(DashboardWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame_dashboard_content = new QFrame(centralwidget);
        frame_dashboard_content->setObjectName("frame_dashboard_content");
        frame_dashboard_content->setStyleSheet(QString::fromUtf8("\n"
"        background-color: #3a3a3a;\n"
"        border-radius: 15px;\n"
"        padding: 20px;\n"
"       "));
        frame_dashboard_content->setFrameShape(QFrame::StyledPanel);
        frame_dashboard_content->setFrameShadow(QFrame::Raised);
        verticalLayout_dashboard = new QVBoxLayout(frame_dashboard_content);
        verticalLayout_dashboard->setObjectName("verticalLayout_dashboard");
        label_dashboard_title = new QLabel(frame_dashboard_content);
        label_dashboard_title->setObjectName("label_dashboard_title");
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label_dashboard_title->setFont(font);
        label_dashboard_title->setStyleSheet(QString::fromUtf8("color: #00C781; margin-bottom: 15px;"));
        label_dashboard_title->setAlignment(Qt::AlignCenter);

        verticalLayout_dashboard->addWidget(label_dashboard_title);

        gridLayout_stats = new QGridLayout();
        gridLayout_stats->setObjectName("gridLayout_stats");
        layout_cell_available = new QVBoxLayout();
        layout_cell_available->setObjectName("layout_cell_available");
        frame_available_spots = new QFrame(frame_dashboard_content);
        frame_available_spots->setObjectName("frame_available_spots");
        frame_available_spots->setStyleSheet(QString::fromUtf8("background-color: #2d2d2d; border-radius: 10px; padding: 15px;"));
        frame_available_spots->setFrameShape(QFrame::StyledPanel);
        verticalLayout_available = new QVBoxLayout(frame_available_spots);
        verticalLayout_available->setObjectName("verticalLayout_available");
        label_available_title = new QLabel(frame_available_spots);
        label_available_title->setObjectName("label_available_title");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_available_title->setFont(font1);
        label_available_title->setAlignment(Qt::AlignCenter);

        verticalLayout_available->addWidget(label_available_title);

        label_available_count = new QLabel(frame_available_spots);
        label_available_count->setObjectName("label_available_count");
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(true);
        label_available_count->setFont(font2);
        label_available_count->setStyleSheet(QString::fromUtf8("color: #00C781;"));
        label_available_count->setAlignment(Qt::AlignCenter);

        verticalLayout_available->addWidget(label_available_count);


        layout_cell_available->addWidget(frame_available_spots);


        gridLayout_stats->addLayout(layout_cell_available, 0, 0, 1, 1);

        layout_cell_occupied = new QVBoxLayout();
        layout_cell_occupied->setObjectName("layout_cell_occupied");
        frame_occupied_spots = new QFrame(frame_dashboard_content);
        frame_occupied_spots->setObjectName("frame_occupied_spots");
        frame_occupied_spots->setStyleSheet(QString::fromUtf8("background-color: #2d2d2d; border-radius: 10px; padding: 15px;"));
        frame_occupied_spots->setFrameShape(QFrame::StyledPanel);
        verticalLayout_occupied = new QVBoxLayout(frame_occupied_spots);
        verticalLayout_occupied->setObjectName("verticalLayout_occupied");
        label_occupied_title = new QLabel(frame_occupied_spots);
        label_occupied_title->setObjectName("label_occupied_title");
        label_occupied_title->setFont(font1);
        label_occupied_title->setAlignment(Qt::AlignCenter);

        verticalLayout_occupied->addWidget(label_occupied_title);

        label_occupied_count = new QLabel(frame_occupied_spots);
        label_occupied_count->setObjectName("label_occupied_count");
        label_occupied_count->setFont(font2);
        label_occupied_count->setStyleSheet(QString::fromUtf8("color: #E74C3C;"));
        label_occupied_count->setAlignment(Qt::AlignCenter);

        verticalLayout_occupied->addWidget(label_occupied_count);


        layout_cell_occupied->addWidget(frame_occupied_spots);


        gridLayout_stats->addLayout(layout_cell_occupied, 0, 1, 1, 1);


        verticalLayout_dashboard->addLayout(gridLayout_stats);

        tableWidget_parking_log = new QTableWidget(frame_dashboard_content);
        if (tableWidget_parking_log->columnCount() < 4)
            tableWidget_parking_log->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_parking_log->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_parking_log->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_parking_log->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_parking_log->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_parking_log->setObjectName("tableWidget_parking_log");
        tableWidget_parking_log->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget {\n"
"    background-color: #2d2d2d;\n"
"    gridline-color: #4a4a4a;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"}\n"
"QHeaderView::section {\n"
"    background-color: #3a3a3a;\n"
"    color: white;\n"
"    padding: 5px;\n"
"    border: 1px solid #4a4a4a;\n"
"    font-weight: bold;\n"
"}\n"
"QTableWidget::item {\n"
"    padding: 5px;\n"
"}\n"
"QTableWidget::item:selected {\n"
"    background-color: #00C781;\n"
"    color: #2d2d2d;\n"
"}\n"
"          "));
        tableWidget_parking_log->setAlternatingRowColors(true);
        tableWidget_parking_log->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_dashboard->addWidget(tableWidget_parking_log);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_dashboard->addItem(verticalSpacer);

        pushButton_logout = new QPushButton(frame_dashboard_content);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setMinimumSize(QSize(0, 40));
        pushButton_logout->setStyleSheet(QString::fromUtf8("\n"
"            background-color: #E74C3C;\n"
"            color: white;\n"
"            font: bold 10pt \"Segoe UI\";\n"
"            padding: 10px;\n"
"            border-radius: 8px;\n"
"          "));

        verticalLayout_dashboard->addWidget(pushButton_logout);


        verticalLayout->addWidget(frame_dashboard_content);

        DashboardWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DashboardWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        DashboardWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DashboardWindow);
        statusbar->setObjectName("statusbar");
        DashboardWindow->setStatusBar(statusbar);

        retranslateUi(DashboardWindow);

        QMetaObject::connectSlotsByName(DashboardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DashboardWindow)
    {
        DashboardWindow->setWindowTitle(QCoreApplication::translate("DashboardWindow", "Parking Management Dashboard", nullptr));
        label_dashboard_title->setText(QCoreApplication::translate("DashboardWindow", "Parking Dashboard", nullptr));
        label_available_title->setText(QCoreApplication::translate("DashboardWindow", "Available Spots", nullptr));
        label_available_count->setText(QCoreApplication::translate("DashboardWindow", "150", nullptr));
        label_occupied_title->setText(QCoreApplication::translate("DashboardWindow", "Occupied Spots", nullptr));
        label_occupied_count->setText(QCoreApplication::translate("DashboardWindow", "50", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_parking_log->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DashboardWindow", "Vehicle ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_parking_log->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DashboardWindow", "Entry Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_parking_log->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DashboardWindow", "Exit Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_parking_log->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DashboardWindow", "Status", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("DashboardWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashboardWindow: public Ui_DashboardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
