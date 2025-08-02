/********************************************************************************
** Form generated from reading UI file 'vehicleaddentry.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEADDENTRY_H
#define UI_VEHICLEADDENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddVehicle
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_addVehicleTitle;
    QFormLayout *formLayout;
    QLabel *label_vehicleNumber;
    QLineEdit *vehicleNumberEdit;
    QLabel *label_vehicleType;
    QComboBox *vehicleTypeComboBox;
    QLabel *label_ownerName;
    QLineEdit *ownerNameEdit;
    QLabel *label_phoneNumber;
    QLineEdit *phoneNumberEdit;
    QLabel *label_assignedSlot;
    QLineEdit *slotNumberEdit;
    QLabel *label_entryTime;
    QDateTimeEdit *entryTimeDateTimeEdit;
    QCheckBox *handicappedCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addEntryConfirmButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddVehicle)
    {
        if (AddVehicle->objectName().isEmpty())
            AddVehicle->setObjectName("AddVehicle");
        AddVehicle->resize(400, 450);
        verticalLayout = new QVBoxLayout(AddVehicle);
        verticalLayout->setObjectName("verticalLayout");
        label_addVehicleTitle = new QLabel(AddVehicle);
        label_addVehicleTitle->setObjectName("label_addVehicleTitle");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_addVehicleTitle->setFont(font);
        label_addVehicleTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_addVehicleTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        label_vehicleNumber = new QLabel(AddVehicle);
        label_vehicleNumber->setObjectName("label_vehicleNumber");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_vehicleNumber);

        vehicleNumberEdit = new QLineEdit(AddVehicle);
        vehicleNumberEdit->setObjectName("vehicleNumberEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, vehicleNumberEdit);

        label_vehicleType = new QLabel(AddVehicle);
        label_vehicleType->setObjectName("label_vehicleType");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_vehicleType);

        vehicleTypeComboBox = new QComboBox(AddVehicle);
        vehicleTypeComboBox->addItem(QString());
        vehicleTypeComboBox->addItem(QString());
        vehicleTypeComboBox->addItem(QString());
        vehicleTypeComboBox->addItem(QString());
        vehicleTypeComboBox->setObjectName("vehicleTypeComboBox");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, vehicleTypeComboBox);

        label_ownerName = new QLabel(AddVehicle);
        label_ownerName->setObjectName("label_ownerName");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_ownerName);

        ownerNameEdit = new QLineEdit(AddVehicle);
        ownerNameEdit->setObjectName("ownerNameEdit");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, ownerNameEdit);

        label_phoneNumber = new QLabel(AddVehicle);
        label_phoneNumber->setObjectName("label_phoneNumber");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_phoneNumber);

        phoneNumberEdit = new QLineEdit(AddVehicle);
        phoneNumberEdit->setObjectName("phoneNumberEdit");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, phoneNumberEdit);

        label_assignedSlot = new QLabel(AddVehicle);
        label_assignedSlot->setObjectName("label_assignedSlot");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_assignedSlot);

        slotNumberEdit = new QLineEdit(AddVehicle);
        slotNumberEdit->setObjectName("slotNumberEdit");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, slotNumberEdit);

        label_entryTime = new QLabel(AddVehicle);
        label_entryTime->setObjectName("label_entryTime");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_entryTime);

        entryTimeDateTimeEdit = new QDateTimeEdit(AddVehicle);
        entryTimeDateTimeEdit->setObjectName("entryTimeDateTimeEdit");
        entryTimeDateTimeEdit->setCalendarPopup(true);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, entryTimeDateTimeEdit);

        handicappedCheckBox = new QCheckBox(AddVehicle);
        handicappedCheckBox->setObjectName("handicappedCheckBox");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, handicappedCheckBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addEntryConfirmButton = new QPushButton(AddVehicle);
        addEntryConfirmButton->setObjectName("addEntryConfirmButton");

        horizontalLayout->addWidget(addEntryConfirmButton);

        cancelButton = new QPushButton(AddVehicle);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddVehicle);

        QMetaObject::connectSlotsByName(AddVehicle);
    } // setupUi

    void retranslateUi(QDialog *AddVehicle)
    {
        AddVehicle->setWindowTitle(QCoreApplication::translate("AddVehicle", "Add Vehicle Entry", nullptr));
        label_addVehicleTitle->setText(QCoreApplication::translate("AddVehicle", "Add New Vehicle Entry", nullptr));
        label_vehicleNumber->setText(QCoreApplication::translate("AddVehicle", "Vehicle Number:", nullptr));
        vehicleNumberEdit->setPlaceholderText(QCoreApplication::translate("AddVehicle", "e.g., Ba 1 Pa 1234", nullptr));
        label_vehicleType->setText(QCoreApplication::translate("AddVehicle", "Vehicle Type:", nullptr));
        vehicleTypeComboBox->setItemText(0, QCoreApplication::translate("AddVehicle", "Car", nullptr));
        vehicleTypeComboBox->setItemText(1, QCoreApplication::translate("AddVehicle", "Bike", nullptr));
        vehicleTypeComboBox->setItemText(2, QCoreApplication::translate("AddVehicle", "Bus", nullptr));
        vehicleTypeComboBox->setItemText(3, QCoreApplication::translate("AddVehicle", "Minivan", nullptr));

        label_ownerName->setText(QCoreApplication::translate("AddVehicle", "Owner Name:", nullptr));
        ownerNameEdit->setPlaceholderText(QCoreApplication::translate("AddVehicle", "Optional", nullptr));
        label_phoneNumber->setText(QCoreApplication::translate("AddVehicle", "Phone Number:", nullptr));
        phoneNumberEdit->setPlaceholderText(QCoreApplication::translate("AddVehicle", "Optional", nullptr));
        label_assignedSlot->setText(QCoreApplication::translate("AddVehicle", "Assigned Slot:", nullptr));
        slotNumberEdit->setPlaceholderText(QCoreApplication::translate("AddVehicle", "e.g., A1, B5", nullptr));
        label_entryTime->setText(QCoreApplication::translate("AddVehicle", "Entry Time:", nullptr));
        entryTimeDateTimeEdit->setDisplayFormat(QCoreApplication::translate("AddVehicle", "yyyy-MM-dd hh:mm:ss", nullptr));
        handicappedCheckBox->setText(QCoreApplication::translate("AddVehicle", "Vehicle requires handicapped spot", nullptr));
        addEntryConfirmButton->setText(QCoreApplication::translate("AddVehicle", "Add Entry", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddVehicle", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddVehicle: public Ui_AddVehicle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEADDENTRY_H
