/********************************************************************************
** Form generated from reading UI file 'processexitdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSEXITDIALOG_H
#define UI_PROCESSEXITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProcessExitDialog
{
public:
    QVBoxLayout *mainLayout;
    QLabel *titleLabel;
    QGroupBox *searchGroup;
    QHBoxLayout *searchLayout;
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QGroupBox *vehicleInfoGroup;
    QFormLayout *infoLayout;
    QLabel *vehicleNoDisplayLabel;
    QLabel *vehicleNoDisplay;
    QLabel *vehicleTypeDisplayLabel;
    QLabel *vehicleTypeDisplay;
    QLabel *ownerDisplayLabel;
    QLabel *ownerDisplay;
    QLabel *slotDisplay;
    QLabel *entryTimeDisplayLabel;
    QLabel *entryTimeDisplay;
    QLabel *slotDisplayLabel;
    QGroupBox *billingGroup;
    QFormLayout *billingLayout;
    QLabel *durationLabel;
    QLabel *durationDisplay;
    QLabel *totalFeeLabel;
    QLabel *totalFeeDisplay;
    QHBoxLayout *buttonLayout;
    QPushButton *cancelButton;
    QPushButton *processExitButton;

    void setupUi(QDialog *ProcessExitDialog)
    {
        if (ProcessExitDialog->objectName().isEmpty())
            ProcessExitDialog->setObjectName("ProcessExitDialog");
        ProcessExitDialog->resize(500, 450);
        ProcessExitDialog->setModal(true);
        mainLayout = new QVBoxLayout(ProcessExitDialog);
        mainLayout->setObjectName("mainLayout");
        titleLabel = new QLabel(ProcessExitDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("font-size: 18px; font-weight: bold; color: #2e3b4e; padding: 10px;"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        mainLayout->addWidget(titleLabel);

        searchGroup = new QGroupBox(ProcessExitDialog);
        searchGroup->setObjectName("searchGroup");
        searchLayout = new QHBoxLayout(searchGroup);
        searchLayout->setObjectName("searchLayout");
        searchEdit = new QLineEdit(searchGroup);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setStyleSheet(QString::fromUtf8("padding: 8px; border: 2px solid #ddd; border-radius: 4px;"));

        searchLayout->addWidget(searchEdit);

        searchButton = new QPushButton(searchGroup);
        searchButton->setObjectName("searchButton");
        searchButton->setStyleSheet(QString::fromUtf8("padding: 8px 16px; font-weight: bold; background-color: #2196f3; color: white; border-radius: 4px;"));

        searchLayout->addWidget(searchButton);


        mainLayout->addWidget(searchGroup);

        vehicleInfoGroup = new QGroupBox(ProcessExitDialog);
        vehicleInfoGroup->setObjectName("vehicleInfoGroup");
        vehicleInfoGroup->setEnabled(false);
        infoLayout = new QFormLayout(vehicleInfoGroup);
        infoLayout->setObjectName("infoLayout");
        vehicleNoDisplayLabel = new QLabel(vehicleInfoGroup);
        vehicleNoDisplayLabel->setObjectName("vehicleNoDisplayLabel");

        infoLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, vehicleNoDisplayLabel);

        vehicleNoDisplay = new QLabel(vehicleInfoGroup);
        vehicleNoDisplay->setObjectName("vehicleNoDisplay");
        vehicleNoDisplay->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #2e3b4e;"));

        infoLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, vehicleNoDisplay);

        vehicleTypeDisplayLabel = new QLabel(vehicleInfoGroup);
        vehicleTypeDisplayLabel->setObjectName("vehicleTypeDisplayLabel");

        infoLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, vehicleTypeDisplayLabel);

        vehicleTypeDisplay = new QLabel(vehicleInfoGroup);
        vehicleTypeDisplay->setObjectName("vehicleTypeDisplay");
        vehicleTypeDisplay->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #2e3b4e;"));

        infoLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, vehicleTypeDisplay);

        ownerDisplayLabel = new QLabel(vehicleInfoGroup);
        ownerDisplayLabel->setObjectName("ownerDisplayLabel");

        infoLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, ownerDisplayLabel);

        ownerDisplay = new QLabel(vehicleInfoGroup);
        ownerDisplay->setObjectName("ownerDisplay");
        ownerDisplay->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #2e3b4e;"));

        infoLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, ownerDisplay);

        slotDisplay = new QLabel(vehicleInfoGroup);
        slotDisplay->setObjectName("slotDisplay");
        slotDisplay->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #2e3b4e;"));

        infoLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, slotDisplay);

        entryTimeDisplayLabel = new QLabel(vehicleInfoGroup);
        entryTimeDisplayLabel->setObjectName("entryTimeDisplayLabel");

        infoLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, entryTimeDisplayLabel);

        entryTimeDisplay = new QLabel(vehicleInfoGroup);
        entryTimeDisplay->setObjectName("entryTimeDisplay");
        entryTimeDisplay->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #2e3b4e;"));

        infoLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, entryTimeDisplay);

        slotDisplayLabel = new QLabel(vehicleInfoGroup);
        slotDisplayLabel->setObjectName("slotDisplayLabel");

        infoLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, slotDisplayLabel);


        mainLayout->addWidget(vehicleInfoGroup);

        billingGroup = new QGroupBox(ProcessExitDialog);
        billingGroup->setObjectName("billingGroup");
        billingGroup->setEnabled(false);
        billingLayout = new QFormLayout(billingGroup);
        billingLayout->setObjectName("billingLayout");
        durationLabel = new QLabel(billingGroup);
        durationLabel->setObjectName("durationLabel");

        billingLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, durationLabel);

        durationDisplay = new QLabel(billingGroup);
        durationDisplay->setObjectName("durationDisplay");
        durationDisplay->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #ff9800;"));

        billingLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, durationDisplay);

        totalFeeLabel = new QLabel(billingGroup);
        totalFeeLabel->setObjectName("totalFeeLabel");

        billingLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, totalFeeLabel);

        totalFeeDisplay = new QLabel(billingGroup);
        totalFeeDisplay->setObjectName("totalFeeDisplay");
        totalFeeDisplay->setStyleSheet(QString::fromUtf8("font-size: 16px; font-weight: bold; color: #4caf50;"));

        billingLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, totalFeeDisplay);


        mainLayout->addWidget(billingGroup);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        cancelButton = new QPushButton(ProcessExitDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setStyleSheet(QString::fromUtf8("padding: 10px 20px; font-weight: bold; background-color: #f44336; color: white; border-radius: 4px;"));

        buttonLayout->addWidget(cancelButton);

        processExitButton = new QPushButton(ProcessExitDialog);
        processExitButton->setObjectName("processExitButton");
        processExitButton->setEnabled(false);
        processExitButton->setStyleSheet(QString::fromUtf8("padding: 10px 20px; font-weight: bold; background-color: #ff9800; color: white; border-radius: 4px;"));

        buttonLayout->addWidget(processExitButton);


        mainLayout->addLayout(buttonLayout);


        retranslateUi(ProcessExitDialog);

        QMetaObject::connectSlotsByName(ProcessExitDialog);
    } // setupUi

    void retranslateUi(QDialog *ProcessExitDialog)
    {
        ProcessExitDialog->setWindowTitle(QCoreApplication::translate("ProcessExitDialog", "\360\237\232\252 Process Vehicle Exit", nullptr));
        titleLabel->setText(QCoreApplication::translate("ProcessExitDialog", "Vehicle Exit Processing", nullptr));
        searchGroup->setTitle(QCoreApplication::translate("ProcessExitDialog", "Find Vehicle", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("ProcessExitDialog", "Enter vehicle number or slot number", nullptr));
        searchButton->setText(QCoreApplication::translate("ProcessExitDialog", "\360\237\224\215 Search", nullptr));
        vehicleInfoGroup->setTitle(QCoreApplication::translate("ProcessExitDialog", "Vehicle Details", nullptr));
        vehicleNoDisplayLabel->setText(QCoreApplication::translate("ProcessExitDialog", "Vehicle Number:", nullptr));
        vehicleNoDisplay->setText(QCoreApplication::translate("ProcessExitDialog", "-", nullptr));
        vehicleTypeDisplayLabel->setText(QCoreApplication::translate("ProcessExitDialog", "Vehicle Type", nullptr));
        vehicleTypeDisplay->setText(QCoreApplication::translate("ProcessExitDialog", "-", nullptr));
        ownerDisplayLabel->setText(QCoreApplication::translate("ProcessExitDialog", "Owner Name:", nullptr));
        ownerDisplay->setText(QCoreApplication::translate("ProcessExitDialog", "-", nullptr));
        slotDisplay->setText(QCoreApplication::translate("ProcessExitDialog", "-", nullptr));
        entryTimeDisplayLabel->setText(QCoreApplication::translate("ProcessExitDialog", "Entry Time:", nullptr));
        entryTimeDisplay->setText(QCoreApplication::translate("ProcessExitDialog", "-", nullptr));
        slotDisplayLabel->setText(QCoreApplication::translate("ProcessExitDialog", "Slot Number:", nullptr));
        billingGroup->setTitle(QCoreApplication::translate("ProcessExitDialog", "Billing Information", nullptr));
        durationLabel->setText(QCoreApplication::translate("ProcessExitDialog", "Parking Duration:", nullptr));
        durationDisplay->setText(QCoreApplication::translate("ProcessExitDialog", "-", nullptr));
        totalFeeLabel->setText(QCoreApplication::translate("ProcessExitDialog", "Total Fee:", nullptr));
        totalFeeDisplay->setText(QCoreApplication::translate("ProcessExitDialog", "NPR 0.00", nullptr));
        cancelButton->setText(QCoreApplication::translate("ProcessExitDialog", " Cancel", nullptr));
        processExitButton->setText(QCoreApplication::translate("ProcessExitDialog", " Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessExitDialog: public Ui_ProcessExitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSEXITDIALOG_H
