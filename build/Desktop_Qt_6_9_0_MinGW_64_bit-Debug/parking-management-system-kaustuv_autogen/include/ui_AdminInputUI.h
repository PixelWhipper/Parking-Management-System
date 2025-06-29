/********************************************************************************
** Form generated from reading UI file 'AdminInputUI.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININPUTUI_H
#define UI_ADMININPUTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminInputUI
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QLineEdit *nameEdit;
    QLineEdit *locationEdit;
    QLabel *rateLabel;
    QHBoxLayout *carRateLayout;
    QDoubleSpinBox *rateCar;
    QSpinBox *capacityCar;
    QHBoxLayout *bikeRateLayout;
    QDoubleSpinBox *rateBike;
    QSpinBox *capacityBike;
    QHBoxLayout *busRateLayout;
    QDoubleSpinBox *rateBus;
    QSpinBox *capacityBus;
    QHBoxLayout *minivanRateLayout;
    QDoubleSpinBox *rateMinivan;
    QSpinBox *capacityMinivan;
    QSpinBox *handicappedSpotsSpinBox;
    QLabel *customLabel;
    QHBoxLayout *customVehicleLayout;
    QLineEdit *customVehicleName;
    QDoubleSpinBox *customRate;
    QSpinBox *customCapacity;
    QPushButton *addCustomRateButton;
    QPushButton *editCustomRateButton;
    QPushButton *deleteCustomRateButton;
    QListWidget *customVehicleList;
    QPushButton *saveButton;

    void setupUi(QWidget *AdminInputUI)
    {
        if (AdminInputUI->objectName().isEmpty())
            AdminInputUI->setObjectName("AdminInputUI");
        AdminInputUI->resize(500, 750);
        verticalLayout = new QVBoxLayout(AdminInputUI);
        verticalLayout->setObjectName("verticalLayout");
        labelTitle = new QLabel(AdminInputUI);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setStyleSheet(QString::fromUtf8("font-weight: bold; font-size: 16px;"));
        labelTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelTitle);

        nameEdit = new QLineEdit(AdminInputUI);
        nameEdit->setObjectName("nameEdit");

        verticalLayout->addWidget(nameEdit);

        locationEdit = new QLineEdit(AdminInputUI);
        locationEdit->setObjectName("locationEdit");

        verticalLayout->addWidget(locationEdit);

        rateLabel = new QLabel(AdminInputUI);
        rateLabel->setObjectName("rateLabel");
        rateLabel->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        verticalLayout->addWidget(rateLabel);

        carRateLayout = new QHBoxLayout();
        carRateLayout->setObjectName("carRateLayout");
        rateCar = new QDoubleSpinBox(AdminInputUI);
        rateCar->setObjectName("rateCar");

        carRateLayout->addWidget(rateCar);

        capacityCar = new QSpinBox(AdminInputUI);
        capacityCar->setObjectName("capacityCar");
        capacityCar->setMaximum(1000);

        carRateLayout->addWidget(capacityCar);


        verticalLayout->addLayout(carRateLayout);

        bikeRateLayout = new QHBoxLayout();
        bikeRateLayout->setObjectName("bikeRateLayout");
        rateBike = new QDoubleSpinBox(AdminInputUI);
        rateBike->setObjectName("rateBike");

        bikeRateLayout->addWidget(rateBike);

        capacityBike = new QSpinBox(AdminInputUI);
        capacityBike->setObjectName("capacityBike");
        capacityBike->setMaximum(1000);

        bikeRateLayout->addWidget(capacityBike);


        verticalLayout->addLayout(bikeRateLayout);

        busRateLayout = new QHBoxLayout();
        busRateLayout->setObjectName("busRateLayout");
        rateBus = new QDoubleSpinBox(AdminInputUI);
        rateBus->setObjectName("rateBus");

        busRateLayout->addWidget(rateBus);

        capacityBus = new QSpinBox(AdminInputUI);
        capacityBus->setObjectName("capacityBus");
        capacityBus->setMaximum(1000);

        busRateLayout->addWidget(capacityBus);


        verticalLayout->addLayout(busRateLayout);

        minivanRateLayout = new QHBoxLayout();
        minivanRateLayout->setObjectName("minivanRateLayout");
        rateMinivan = new QDoubleSpinBox(AdminInputUI);
        rateMinivan->setObjectName("rateMinivan");

        minivanRateLayout->addWidget(rateMinivan);

        capacityMinivan = new QSpinBox(AdminInputUI);
        capacityMinivan->setObjectName("capacityMinivan");
        capacityMinivan->setMaximum(1000);

        minivanRateLayout->addWidget(capacityMinivan);


        verticalLayout->addLayout(minivanRateLayout);

        handicappedSpotsSpinBox = new QSpinBox(AdminInputUI);
        handicappedSpotsSpinBox->setObjectName("handicappedSpotsSpinBox");
        handicappedSpotsSpinBox->setMaximum(1000);

        verticalLayout->addWidget(handicappedSpotsSpinBox);

        customLabel = new QLabel(AdminInputUI);
        customLabel->setObjectName("customLabel");
        customLabel->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        verticalLayout->addWidget(customLabel);

        customVehicleLayout = new QHBoxLayout();
        customVehicleLayout->setObjectName("customVehicleLayout");
        customVehicleName = new QLineEdit(AdminInputUI);
        customVehicleName->setObjectName("customVehicleName");

        customVehicleLayout->addWidget(customVehicleName);

        customRate = new QDoubleSpinBox(AdminInputUI);
        customRate->setObjectName("customRate");

        customVehicleLayout->addWidget(customRate);

        customCapacity = new QSpinBox(AdminInputUI);
        customCapacity->setObjectName("customCapacity");
        customCapacity->setMaximum(1000);

        customVehicleLayout->addWidget(customCapacity);

        addCustomRateButton = new QPushButton(AdminInputUI);
        addCustomRateButton->setObjectName("addCustomRateButton");

        customVehicleLayout->addWidget(addCustomRateButton);

        editCustomRateButton = new QPushButton(AdminInputUI);
        editCustomRateButton->setObjectName("editCustomRateButton");

        customVehicleLayout->addWidget(editCustomRateButton);

        deleteCustomRateButton = new QPushButton(AdminInputUI);
        deleteCustomRateButton->setObjectName("deleteCustomRateButton");

        customVehicleLayout->addWidget(deleteCustomRateButton);


        verticalLayout->addLayout(customVehicleLayout);

        customVehicleList = new QListWidget(AdminInputUI);
        customVehicleList->setObjectName("customVehicleList");

        verticalLayout->addWidget(customVehicleList);

        saveButton = new QPushButton(AdminInputUI);
        saveButton->setObjectName("saveButton");

        verticalLayout->addWidget(saveButton);


        retranslateUi(AdminInputUI);

        QMetaObject::connectSlotsByName(AdminInputUI);
    } // setupUi

    void retranslateUi(QWidget *AdminInputUI)
    {
        AdminInputUI->setWindowTitle(QCoreApplication::translate("AdminInputUI", "Admin Parking Lot Input", nullptr));
        labelTitle->setText(QCoreApplication::translate("AdminInputUI", "Enter Parking Lot Details", nullptr));
        nameEdit->setPlaceholderText(QCoreApplication::translate("AdminInputUI", "Parking Lot Name", nullptr));
        locationEdit->setPlaceholderText(QCoreApplication::translate("AdminInputUI", "Location", nullptr));
        rateLabel->setText(QCoreApplication::translate("AdminInputUI", "Rates Per Hour and Capacities:", nullptr));
        rateCar->setPrefix(QCoreApplication::translate("AdminInputUI", "Car: NPR ", nullptr));
        rateCar->setSuffix(QCoreApplication::translate("AdminInputUI", "/hr", nullptr));
        capacityCar->setPrefix(QCoreApplication::translate("AdminInputUI", "Capacity: ", nullptr));
        rateBike->setPrefix(QCoreApplication::translate("AdminInputUI", "Bike: NPR ", nullptr));
        rateBike->setSuffix(QCoreApplication::translate("AdminInputUI", "/hr", nullptr));
        capacityBike->setPrefix(QCoreApplication::translate("AdminInputUI", "Capacity: ", nullptr));
        rateBus->setPrefix(QCoreApplication::translate("AdminInputUI", "Bus: NPR ", nullptr));
        rateBus->setSuffix(QCoreApplication::translate("AdminInputUI", "/hr", nullptr));
        capacityBus->setPrefix(QCoreApplication::translate("AdminInputUI", "Capacity: ", nullptr));
        rateMinivan->setPrefix(QCoreApplication::translate("AdminInputUI", "Minivan: NPR ", nullptr));
        rateMinivan->setSuffix(QCoreApplication::translate("AdminInputUI", "/hr", nullptr));
        capacityMinivan->setPrefix(QCoreApplication::translate("AdminInputUI", "Capacity: ", nullptr));
        handicappedSpotsSpinBox->setPrefix(QCoreApplication::translate("AdminInputUI", "Handicapped Spots: ", nullptr));
        customLabel->setText(QCoreApplication::translate("AdminInputUI", "Custom Vehicle Rate", nullptr));
        customVehicleName->setPlaceholderText(QCoreApplication::translate("AdminInputUI", "Vehicle Type", nullptr));
        customRate->setPrefix(QCoreApplication::translate("AdminInputUI", "NPR ", nullptr));
        customRate->setSuffix(QCoreApplication::translate("AdminInputUI", "/hr", nullptr));
        customCapacity->setPrefix(QCoreApplication::translate("AdminInputUI", "Capacity: ", nullptr));
        addCustomRateButton->setText(QCoreApplication::translate("AdminInputUI", "Add", nullptr));
        editCustomRateButton->setText(QCoreApplication::translate("AdminInputUI", "Edit", nullptr));
        deleteCustomRateButton->setText(QCoreApplication::translate("AdminInputUI", "Delete", nullptr));
        saveButton->setText(QCoreApplication::translate("AdminInputUI", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminInputUI: public Ui_AdminInputUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININPUTUI_H
