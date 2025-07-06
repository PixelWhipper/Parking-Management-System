/********************************************************************************
** Form generated from reading UI file 'addVehicle.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVEHICLE_H
#define UI_ADDVEHICLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddVehicleDialog
{
public:
    QVBoxLayout *verticalLayout_main;
    QFrame *headerFrame;
    QHBoxLayout *horizontalLayout_header;
    QLabel *headerTitleLabel;
    QSpacerItem *horizontalSpacer_header;
    QFrame *formFrame;
    QGridLayout *gridLayout_form;
    QLabel *timestampLabel;
    QDateTimeEdit *timestampDateTimeEdit;
    QLabel *vehicleNumberLabel;
    QLineEdit *vehicleNumberLineEdit;
    QLabel *categoryLabel;
    QComboBox *categoryComboBox;
    QLabel *pricePerHourLabel;
    QLineEdit *pricePerHourLineEdit;
    QLabel *driverNameLabel;
    QLineEdit *driverNameLineEdit;
    QSpacerItem *verticalSpacer_form;
    QFrame *buttonsFrame;
    QHBoxLayout *horizontalLayout_buttons;
    QSpacerItem *horizontalSpacer_buttons;
    QPushButton *submitButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddVehicleDialog)
    {
        if (AddVehicleDialog->objectName().isEmpty())
            AddVehicleDialog->setObjectName("AddVehicleDialog");
        AddVehicleDialog->resize(700, 550);
        AddVehicleDialog->setStyleSheet(QString::fromUtf8("\n"
"    QDialog {\n"
"        background-color: #F0FFF0; /* Very Light Green */\n"
"    }\n"
"    QLabel {\n"
"        font-family: \"Inter\";\n"
"        font-size: 14px;\n"
"        color: #333333; /* Ensure label text is dark */\n"
"    }\n"
"    QLineEdit, QComboBox, QDateTimeEdit {\n"
"        border: 1px solid #E0E0E0;\n"
"        border-radius: 6px;\n"
"        padding: 8px 12px;\n"
"        font-family: \"Inter\";\n"
"        font-size: 14px;\n"
"        color: #333333;\n"
"        background-color: #FFFFFF;\n"
"    }\n"
"    QLineEdit:focus, QComboBox:focus, QDateTimeEdit:focus {\n"
"        border: 1px solid #4285F4;\n"
"    }\n"
"    QPushButton {\n"
"        border-radius: 6px;\n"
"        padding: 10px 20px;\n"
"        font-family: \"Inter\";\n"
"        font-size: 15px;\n"
"        font-weight: bold;\n"
"        color: #FFFFFF;\n"
"        background-color: #4285F4; /* Blue */\n"
"        border: none;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #357AE8;\n"
"    }\n"
"  "
                        "  QPushButton#cancelButton { /* Targeting by objectName */\n"
"        background-color: #6c757d; /* Grey for Cancel */\n"
"    }\n"
"    QPushButton#cancelButton:hover {\n"
"        background-color: #5a6268;\n"
"    }\n"
"    /* Style for the main header */\n"
"    #headerFrame {\n"
"        background-color: #FFFFFF;\n"
"        border-bottom: 1px solid #E0E0E0;\n"
"        padding: 15px 20px;\n"
"        margin-bottom: 20px;\n"
"    }\n"
"    #headerTitleLabel {\n"
"        font-family: \"Inter\";\n"
"        font-size: 20px;\n"
"        font-weight: bold;\n"
"        color: #333333;\n"
"    }\n"
"    /* Explicitly set background for formFrame to white */\n"
"    #formFrame {\n"
"        background-color: #FFFFFF;\n"
"    }\n"
"   "));
        verticalLayout_main = new QVBoxLayout(AddVehicleDialog);
        verticalLayout_main->setSpacing(0);
        verticalLayout_main->setObjectName("verticalLayout_main");
        verticalLayout_main->setContentsMargins(0, 0, 0, 0);
        headerFrame = new QFrame(AddVehicleDialog);
        headerFrame->setObjectName("headerFrame");
        headerFrame->setFrameShape(QFrame::Shape::NoFrame);
        headerFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_header = new QHBoxLayout(headerFrame);
        horizontalLayout_header->setObjectName("horizontalLayout_header");
        horizontalLayout_header->setContentsMargins(20, 0, 20, 0);
        headerTitleLabel = new QLabel(headerFrame);
        headerTitleLabel->setObjectName("headerTitleLabel");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        headerTitleLabel->setFont(font);

        horizontalLayout_header->addWidget(headerTitleLabel);

        horizontalSpacer_header = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_header->addItem(horizontalSpacer_header);


        verticalLayout_main->addWidget(headerFrame);

        formFrame = new QFrame(AddVehicleDialog);
        formFrame->setObjectName("formFrame");
        formFrame->setFrameShape(QFrame::Shape::StyledPanel);
        formFrame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_form = new QGridLayout(formFrame);
        gridLayout_form->setSpacing(15);
        gridLayout_form->setObjectName("gridLayout_form");
        gridLayout_form->setContentsMargins(20, 20, 20, 20);
        timestampLabel = new QLabel(formFrame);
        timestampLabel->setObjectName("timestampLabel");

        gridLayout_form->addWidget(timestampLabel, 0, 0, 1, 1);

        timestampDateTimeEdit = new QDateTimeEdit(formFrame);
        timestampDateTimeEdit->setObjectName("timestampDateTimeEdit");
        timestampDateTimeEdit->setCalendarPopup(true);

        gridLayout_form->addWidget(timestampDateTimeEdit, 0, 1, 1, 1);

        vehicleNumberLabel = new QLabel(formFrame);
        vehicleNumberLabel->setObjectName("vehicleNumberLabel");

        gridLayout_form->addWidget(vehicleNumberLabel, 0, 2, 1, 1);

        vehicleNumberLineEdit = new QLineEdit(formFrame);
        vehicleNumberLineEdit->setObjectName("vehicleNumberLineEdit");

        gridLayout_form->addWidget(vehicleNumberLineEdit, 0, 3, 1, 1);

        categoryLabel = new QLabel(formFrame);
        categoryLabel->setObjectName("categoryLabel");

        gridLayout_form->addWidget(categoryLabel, 1, 0, 1, 1);

        categoryComboBox = new QComboBox(formFrame);
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->setObjectName("categoryComboBox");

        gridLayout_form->addWidget(categoryComboBox, 1, 1, 1, 1);

        pricePerHourLabel = new QLabel(formFrame);
        pricePerHourLabel->setObjectName("pricePerHourLabel");

        gridLayout_form->addWidget(pricePerHourLabel, 1, 2, 1, 1);

        pricePerHourLineEdit = new QLineEdit(formFrame);
        pricePerHourLineEdit->setObjectName("pricePerHourLineEdit");

        gridLayout_form->addWidget(pricePerHourLineEdit, 1, 3, 1, 1);

        driverNameLabel = new QLabel(formFrame);
        driverNameLabel->setObjectName("driverNameLabel");

        gridLayout_form->addWidget(driverNameLabel, 2, 0, 1, 1);

        driverNameLineEdit = new QLineEdit(formFrame);
        driverNameLineEdit->setObjectName("driverNameLineEdit");

        gridLayout_form->addWidget(driverNameLineEdit, 2, 1, 1, 3);

        verticalSpacer_form = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_form->addItem(verticalSpacer_form, 3, 0, 1, 4);


        verticalLayout_main->addWidget(formFrame);

        buttonsFrame = new QFrame(AddVehicleDialog);
        buttonsFrame->setObjectName("buttonsFrame");
        buttonsFrame->setFrameShape(QFrame::Shape::NoFrame);
        buttonsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_buttons = new QHBoxLayout(buttonsFrame);
        horizontalLayout_buttons->setSpacing(10);
        horizontalLayout_buttons->setObjectName("horizontalLayout_buttons");
        horizontalLayout_buttons->setContentsMargins(20, 10, 20, 20);
        horizontalSpacer_buttons = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_buttons->addItem(horizontalSpacer_buttons);

        submitButton = new QPushButton(buttonsFrame);
        submitButton->setObjectName("submitButton");

        horizontalLayout_buttons->addWidget(submitButton);

        cancelButton = new QPushButton(buttonsFrame);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_buttons->addWidget(cancelButton);


        verticalLayout_main->addWidget(buttonsFrame);


        retranslateUi(AddVehicleDialog);

        QMetaObject::connectSlotsByName(AddVehicleDialog);
    } // setupUi

    void retranslateUi(QDialog *AddVehicleDialog)
    {
        AddVehicleDialog->setWindowTitle(QCoreApplication::translate("AddVehicleDialog", "Add Vehicle", nullptr));
        headerTitleLabel->setText(QCoreApplication::translate("AddVehicleDialog", "Add Vehicle", nullptr));
        timestampLabel->setText(QCoreApplication::translate("AddVehicleDialog", "Vehicle Timestamp *", nullptr));
        timestampDateTimeEdit->setDisplayFormat(QCoreApplication::translate("AddVehicleDialog", "yyyy-MM-dd HH:mm:ss", nullptr));
        vehicleNumberLabel->setText(QCoreApplication::translate("AddVehicleDialog", "Vehicle Number *", nullptr));
        categoryLabel->setText(QCoreApplication::translate("AddVehicleDialog", "Vehicle Category *", nullptr));
        categoryComboBox->setItemText(0, QCoreApplication::translate("AddVehicleDialog", "-Select-", nullptr));
        categoryComboBox->setItemText(1, QCoreApplication::translate("AddVehicleDialog", "Car", nullptr));
        categoryComboBox->setItemText(2, QCoreApplication::translate("AddVehicleDialog", "Motorcycle", nullptr));
        categoryComboBox->setItemText(3, QCoreApplication::translate("AddVehicleDialog", "Truck", nullptr));

        pricePerHourLabel->setText(QCoreApplication::translate("AddVehicleDialog", "Price Per Hour ($) *", nullptr));
        pricePerHourLineEdit->setInputMask(QCoreApplication::translate("AddVehicleDialog", "999.99", nullptr));
        pricePerHourLineEdit->setPlaceholderText(QCoreApplication::translate("AddVehicleDialog", "e.g., 2.50", nullptr));
        driverNameLabel->setText(QCoreApplication::translate("AddVehicleDialog", "Driver Name *", nullptr));
        submitButton->setText(QCoreApplication::translate("AddVehicleDialog", "Submit", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddVehicleDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddVehicleDialog: public Ui_AddVehicleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVEHICLE_H
