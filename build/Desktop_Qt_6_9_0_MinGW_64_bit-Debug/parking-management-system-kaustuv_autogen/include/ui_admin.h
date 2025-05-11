/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *adminTitle;
    QTabWidget *adminTabWidget;
    QWidget *parkingInfoTab;
    QFormLayout *formLayout;
    QLabel *locationLabel;
    QLineEdit *locationLineEdit;
    QLabel *levelsLabel;
    QSpinBox *levelsSpinBox;
    QLabel *bikeCapacityLabel;
    QSpinBox *bikeCapacitySpinBox;
    QLabel *minivanCapacityLabel;
    QSpinBox *minivanCapacitySpinBox;
    QLabel *carCapacityLabel;
    QSpinBox *carCapacitySpinBox;
    QLabel *busCapacityLabel;
    QSpinBox *busCapacitySpinBox;
    QPushButton *saveParkingInfoButton;
    QPushButton *clearParkingInfoButton;
    QWidget *customVehiclesTab;
    QVBoxLayout *customVehiclesLayout;
    QLabel *customVehiclesLabel;
    QPushButton *addCustomVehicleButton;

    void setupUi(QWidget *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(600, 430);
        verticalLayout = new QVBoxLayout(AdminWindow);
        verticalLayout->setObjectName("verticalLayout");
        adminTitle = new QLabel(AdminWindow);
        adminTitle->setObjectName("adminTitle");
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        adminTitle->setFont(font);
        adminTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(adminTitle);

        adminTabWidget = new QTabWidget(AdminWindow);
        adminTabWidget->setObjectName("adminTabWidget");
        parkingInfoTab = new QWidget();
        parkingInfoTab->setObjectName("parkingInfoTab");
        formLayout = new QFormLayout(parkingInfoTab);
        formLayout->setObjectName("formLayout");
        locationLabel = new QLabel(parkingInfoTab);
        locationLabel->setObjectName("locationLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, locationLabel);

        locationLineEdit = new QLineEdit(parkingInfoTab);
        locationLineEdit->setObjectName("locationLineEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, locationLineEdit);

        levelsLabel = new QLabel(parkingInfoTab);
        levelsLabel->setObjectName("levelsLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, levelsLabel);

        levelsSpinBox = new QSpinBox(parkingInfoTab);
        levelsSpinBox->setObjectName("levelsSpinBox");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, levelsSpinBox);

        bikeCapacityLabel = new QLabel(parkingInfoTab);
        bikeCapacityLabel->setObjectName("bikeCapacityLabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, bikeCapacityLabel);

        bikeCapacitySpinBox = new QSpinBox(parkingInfoTab);
        bikeCapacitySpinBox->setObjectName("bikeCapacitySpinBox");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, bikeCapacitySpinBox);

        minivanCapacityLabel = new QLabel(parkingInfoTab);
        minivanCapacityLabel->setObjectName("minivanCapacityLabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, minivanCapacityLabel);

        minivanCapacitySpinBox = new QSpinBox(parkingInfoTab);
        minivanCapacitySpinBox->setObjectName("minivanCapacitySpinBox");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, minivanCapacitySpinBox);

        carCapacityLabel = new QLabel(parkingInfoTab);
        carCapacityLabel->setObjectName("carCapacityLabel");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, carCapacityLabel);

        carCapacitySpinBox = new QSpinBox(parkingInfoTab);
        carCapacitySpinBox->setObjectName("carCapacitySpinBox");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, carCapacitySpinBox);

        busCapacityLabel = new QLabel(parkingInfoTab);
        busCapacityLabel->setObjectName("busCapacityLabel");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, busCapacityLabel);

        busCapacitySpinBox = new QSpinBox(parkingInfoTab);
        busCapacitySpinBox->setObjectName("busCapacitySpinBox");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, busCapacitySpinBox);

        saveParkingInfoButton = new QPushButton(parkingInfoTab);
        saveParkingInfoButton->setObjectName("saveParkingInfoButton");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, saveParkingInfoButton);

        clearParkingInfoButton = new QPushButton(parkingInfoTab);
        clearParkingInfoButton->setObjectName("clearParkingInfoButton");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, clearParkingInfoButton);

        adminTabWidget->addTab(parkingInfoTab, QString());
        customVehiclesTab = new QWidget();
        customVehiclesTab->setObjectName("customVehiclesTab");
        customVehiclesLayout = new QVBoxLayout(customVehiclesTab);
        customVehiclesLayout->setObjectName("customVehiclesLayout");
        customVehiclesLabel = new QLabel(customVehiclesTab);
        customVehiclesLabel->setObjectName("customVehiclesLabel");
        customVehiclesLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        customVehiclesLayout->addWidget(customVehiclesLabel);

        addCustomVehicleButton = new QPushButton(customVehiclesTab);
        addCustomVehicleButton->setObjectName("addCustomVehicleButton");

        customVehiclesLayout->addWidget(addCustomVehicleButton);

        adminTabWidget->addTab(customVehiclesTab, QString());

        verticalLayout->addWidget(adminTabWidget);


        retranslateUi(AdminWindow);

        adminTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QWidget *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Admin Window", nullptr));
        adminTitle->setText(QCoreApplication::translate("AdminWindow", "Admin Interface", nullptr));
        locationLabel->setText(QCoreApplication::translate("AdminWindow", "Location:", nullptr));
        levelsLabel->setText(QCoreApplication::translate("AdminWindow", "Number of Levels:", nullptr));
        bikeCapacityLabel->setText(QCoreApplication::translate("AdminWindow", "Bike Parking Capacity:", nullptr));
        minivanCapacityLabel->setText(QCoreApplication::translate("AdminWindow", "Minivan Parking Capacity:", nullptr));
        carCapacityLabel->setText(QCoreApplication::translate("AdminWindow", "Car Parking Capacity:", nullptr));
        busCapacityLabel->setText(QCoreApplication::translate("AdminWindow", "Bus Parking Capacity:", nullptr));
        saveParkingInfoButton->setText(QCoreApplication::translate("AdminWindow", "Save Parking Info", nullptr));
        clearParkingInfoButton->setText(QCoreApplication::translate("AdminWindow", "Clear Fields", nullptr));
        adminTabWidget->setTabText(adminTabWidget->indexOf(parkingInfoTab), QCoreApplication::translate("AdminWindow", "Parking Info", nullptr));
        customVehiclesLabel->setText(QCoreApplication::translate("AdminWindow", "Manage custom vehicle types here.", nullptr));
        addCustomVehicleButton->setText(QCoreApplication::translate("AdminWindow", "Add Custom Vehicle", nullptr));
        adminTabWidget->setTabText(adminTabWidget->indexOf(customVehiclesTab), QCoreApplication::translate("AdminWindow", "Custom Vehicles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
