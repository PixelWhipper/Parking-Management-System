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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QVBoxLayout *verticalLayoutLogin;
    QLabel *loginTitle;
    QFormLayout *loginForm;
    QLabel *emailLabel;
    QLineEdit *emailEdit;
    QLabel *passwordLabel_login;
    QLineEdit *passwordEdit_login;
    QPushButton *loginButton;
    QLabel *signUpLabel;
    QWidget *signUpPage;
    QVBoxLayout *verticalLayoutSignUp;
    QLabel *signUpTitle;
    QFormLayout *signUpForm;
    QLabel *emailLabel_signup;
    QLineEdit *emailEdit_signup;
    QLabel *passwordLabel_signup;
    QLineEdit *passwordEdit_signup;
    QPushButton *signUpButton;
    QWidget *adminDashboard;
    QVBoxLayout *verticalLayoutAdmin;
    QHBoxLayout *headerLayout;
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
    QWidget *ParkingManagementUI;
    QVBoxLayout *mainLayout;
    QLabel *titleLabel;
    QHBoxLayout *topSectionLayout;
    QGroupBox *controlGroup;
    QHBoxLayout *topButtonsLayout;
    QPushButton *addEntryButton;
    QPushButton *processExitButton;
    QPushButton *refreshButton;
    QGroupBox *tableGroup;
    QVBoxLayout *vboxLayout;
    QTableWidget *parkingTable;
    QLabel *statusLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(750, 795);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 721, 750));
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        verticalLayoutLogin = new QVBoxLayout(loginPage);
        verticalLayoutLogin->setObjectName("verticalLayoutLogin");
        loginTitle = new QLabel(loginPage);
        loginTitle->setObjectName("loginTitle");
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        loginTitle->setFont(font);

        verticalLayoutLogin->addWidget(loginTitle);

        loginForm = new QFormLayout();
        loginForm->setObjectName("loginForm");
        emailLabel = new QLabel(loginPage);
        emailLabel->setObjectName("emailLabel");

        loginForm->setWidget(0, QFormLayout::ItemRole::LabelRole, emailLabel);

        emailEdit = new QLineEdit(loginPage);
        emailEdit->setObjectName("emailEdit");

        loginForm->setWidget(0, QFormLayout::ItemRole::FieldRole, emailEdit);

        passwordLabel_login = new QLabel(loginPage);
        passwordLabel_login->setObjectName("passwordLabel_login");

        loginForm->setWidget(1, QFormLayout::ItemRole::LabelRole, passwordLabel_login);

        passwordEdit_login = new QLineEdit(loginPage);
        passwordEdit_login->setObjectName("passwordEdit_login");
        passwordEdit_login->setEchoMode(QLineEdit::EchoMode::Normal);

        loginForm->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit_login);


        verticalLayoutLogin->addLayout(loginForm);

        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName("loginButton");

        verticalLayoutLogin->addWidget(loginButton);

        signUpLabel = new QLabel(loginPage);
        signUpLabel->setObjectName("signUpLabel");
        signUpLabel->setOpenExternalLinks(false);

        verticalLayoutLogin->addWidget(signUpLabel);

        stackedWidget->addWidget(loginPage);
        signUpPage = new QWidget();
        signUpPage->setObjectName("signUpPage");
        verticalLayoutSignUp = new QVBoxLayout(signUpPage);
        verticalLayoutSignUp->setObjectName("verticalLayoutSignUp");
        signUpTitle = new QLabel(signUpPage);
        signUpTitle->setObjectName("signUpTitle");
        signUpTitle->setFont(font);

        verticalLayoutSignUp->addWidget(signUpTitle);

        signUpForm = new QFormLayout();
        signUpForm->setObjectName("signUpForm");
        emailLabel_signup = new QLabel(signUpPage);
        emailLabel_signup->setObjectName("emailLabel_signup");

        signUpForm->setWidget(0, QFormLayout::ItemRole::LabelRole, emailLabel_signup);

        emailEdit_signup = new QLineEdit(signUpPage);
        emailEdit_signup->setObjectName("emailEdit_signup");

        signUpForm->setWidget(0, QFormLayout::ItemRole::FieldRole, emailEdit_signup);

        passwordLabel_signup = new QLabel(signUpPage);
        passwordLabel_signup->setObjectName("passwordLabel_signup");

        signUpForm->setWidget(1, QFormLayout::ItemRole::LabelRole, passwordLabel_signup);

        passwordEdit_signup = new QLineEdit(signUpPage);
        passwordEdit_signup->setObjectName("passwordEdit_signup");
        passwordEdit_signup->setEchoMode(QLineEdit::EchoMode::Normal);

        signUpForm->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit_signup);


        verticalLayoutSignUp->addLayout(signUpForm);

        signUpButton = new QPushButton(signUpPage);
        signUpButton->setObjectName("signUpButton");

        verticalLayoutSignUp->addWidget(signUpButton);

        stackedWidget->addWidget(signUpPage);
        adminDashboard = new QWidget();
        adminDashboard->setObjectName("adminDashboard");
        verticalLayoutAdmin = new QVBoxLayout(adminDashboard);
        verticalLayoutAdmin->setObjectName("verticalLayoutAdmin");
        headerLayout = new QHBoxLayout();
        headerLayout->setObjectName("headerLayout");
        labelTitle = new QLabel(adminDashboard);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setStyleSheet(QString::fromUtf8("font-weight: bold; font-size: 16px;"));

        headerLayout->addWidget(labelTitle);


        verticalLayoutAdmin->addLayout(headerLayout);

        nameEdit = new QLineEdit(adminDashboard);
        nameEdit->setObjectName("nameEdit");

        verticalLayoutAdmin->addWidget(nameEdit);

        locationEdit = new QLineEdit(adminDashboard);
        locationEdit->setObjectName("locationEdit");

        verticalLayoutAdmin->addWidget(locationEdit);

        rateLabel = new QLabel(adminDashboard);
        rateLabel->setObjectName("rateLabel");
        rateLabel->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        verticalLayoutAdmin->addWidget(rateLabel);

        carRateLayout = new QHBoxLayout();
        carRateLayout->setObjectName("carRateLayout");
        rateCar = new QDoubleSpinBox(adminDashboard);
        rateCar->setObjectName("rateCar");

        carRateLayout->addWidget(rateCar);

        capacityCar = new QSpinBox(adminDashboard);
        capacityCar->setObjectName("capacityCar");
        capacityCar->setMaximum(1000);

        carRateLayout->addWidget(capacityCar);


        verticalLayoutAdmin->addLayout(carRateLayout);

        bikeRateLayout = new QHBoxLayout();
        bikeRateLayout->setObjectName("bikeRateLayout");
        rateBike = new QDoubleSpinBox(adminDashboard);
        rateBike->setObjectName("rateBike");

        bikeRateLayout->addWidget(rateBike);

        capacityBike = new QSpinBox(adminDashboard);
        capacityBike->setObjectName("capacityBike");
        capacityBike->setMaximum(1000);

        bikeRateLayout->addWidget(capacityBike);


        verticalLayoutAdmin->addLayout(bikeRateLayout);

        busRateLayout = new QHBoxLayout();
        busRateLayout->setObjectName("busRateLayout");
        rateBus = new QDoubleSpinBox(adminDashboard);
        rateBus->setObjectName("rateBus");

        busRateLayout->addWidget(rateBus);

        capacityBus = new QSpinBox(adminDashboard);
        capacityBus->setObjectName("capacityBus");
        capacityBus->setMaximum(1000);

        busRateLayout->addWidget(capacityBus);


        verticalLayoutAdmin->addLayout(busRateLayout);

        minivanRateLayout = new QHBoxLayout();
        minivanRateLayout->setObjectName("minivanRateLayout");
        rateMinivan = new QDoubleSpinBox(adminDashboard);
        rateMinivan->setObjectName("rateMinivan");

        minivanRateLayout->addWidget(rateMinivan);

        capacityMinivan = new QSpinBox(adminDashboard);
        capacityMinivan->setObjectName("capacityMinivan");
        capacityMinivan->setMaximum(1000);

        minivanRateLayout->addWidget(capacityMinivan);


        verticalLayoutAdmin->addLayout(minivanRateLayout);

        handicappedSpotsSpinBox = new QSpinBox(adminDashboard);
        handicappedSpotsSpinBox->setObjectName("handicappedSpotsSpinBox");
        handicappedSpotsSpinBox->setMaximum(1000);

        verticalLayoutAdmin->addWidget(handicappedSpotsSpinBox);

        customLabel = new QLabel(adminDashboard);
        customLabel->setObjectName("customLabel");
        customLabel->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        verticalLayoutAdmin->addWidget(customLabel);

        customVehicleLayout = new QHBoxLayout();
        customVehicleLayout->setObjectName("customVehicleLayout");
        customVehicleName = new QLineEdit(adminDashboard);
        customVehicleName->setObjectName("customVehicleName");

        customVehicleLayout->addWidget(customVehicleName);

        customRate = new QDoubleSpinBox(adminDashboard);
        customRate->setObjectName("customRate");

        customVehicleLayout->addWidget(customRate);

        customCapacity = new QSpinBox(adminDashboard);
        customCapacity->setObjectName("customCapacity");
        customCapacity->setMaximum(1000);

        customVehicleLayout->addWidget(customCapacity);

        addCustomRateButton = new QPushButton(adminDashboard);
        addCustomRateButton->setObjectName("addCustomRateButton");

        customVehicleLayout->addWidget(addCustomRateButton);

        editCustomRateButton = new QPushButton(adminDashboard);
        editCustomRateButton->setObjectName("editCustomRateButton");

        customVehicleLayout->addWidget(editCustomRateButton);

        deleteCustomRateButton = new QPushButton(adminDashboard);
        deleteCustomRateButton->setObjectName("deleteCustomRateButton");

        customVehicleLayout->addWidget(deleteCustomRateButton);


        verticalLayoutAdmin->addLayout(customVehicleLayout);

        customVehicleList = new QListWidget(adminDashboard);
        customVehicleList->setObjectName("customVehicleList");

        verticalLayoutAdmin->addWidget(customVehicleList);

        saveButton = new QPushButton(adminDashboard);
        saveButton->setObjectName("saveButton");

        verticalLayoutAdmin->addWidget(saveButton);

        stackedWidget->addWidget(adminDashboard);
        ParkingManagementUI = new QWidget();
        ParkingManagementUI->setObjectName("ParkingManagementUI");
        mainLayout = new QVBoxLayout(ParkingManagementUI);
        mainLayout->setObjectName("mainLayout");
        titleLabel = new QLabel(ParkingManagementUI);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("font-size: 24px; font-weight: bold; color: #2e3b4e; padding: 10px;"));

        mainLayout->addWidget(titleLabel);

        topSectionLayout = new QHBoxLayout();
        topSectionLayout->setObjectName("topSectionLayout");
        controlGroup = new QGroupBox(ParkingManagementUI);
        controlGroup->setObjectName("controlGroup");
        topButtonsLayout = new QHBoxLayout(controlGroup);
        topButtonsLayout->setObjectName("topButtonsLayout");
        addEntryButton = new QPushButton(controlGroup);
        addEntryButton->setObjectName("addEntryButton");
        addEntryButton->setStyleSheet(QString::fromUtf8("padding: 8px 16px; font-weight: bold; background-color: #0D47A1; border-radius: 4px;"));

        topButtonsLayout->addWidget(addEntryButton);

        processExitButton = new QPushButton(controlGroup);
        processExitButton->setObjectName("processExitButton");
        processExitButton->setStyleSheet(QString::fromUtf8("padding: 8px 16px; font-weight: bold; background-color: #0D47A1; border-radius: 4px;"));

        topButtonsLayout->addWidget(processExitButton);

        refreshButton = new QPushButton(controlGroup);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setStyleSheet(QString::fromUtf8("padding: 8px 16px; font-weight: bold; background-color: #0D47A1; border-radius: 4px;"));

        topButtonsLayout->addWidget(refreshButton);


        topSectionLayout->addWidget(controlGroup);


        mainLayout->addLayout(topSectionLayout);

        tableGroup = new QGroupBox(ParkingManagementUI);
        tableGroup->setObjectName("tableGroup");
        vboxLayout = new QVBoxLayout(tableGroup);
        vboxLayout->setObjectName("vboxLayout");
        parkingTable = new QTableWidget(tableGroup);
        if (parkingTable->columnCount() < 6)
            parkingTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        parkingTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        parkingTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        parkingTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        parkingTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        parkingTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        parkingTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        parkingTable->setObjectName("parkingTable");
        parkingTable->setStyleSheet(QString::fromUtf8("font-size: 14px; selection-background-color: #90caf9; gridline-color: #ddd;"));
        parkingTable->setAlternatingRowColors(true);
        parkingTable->setRowCount(0);
        parkingTable->setColumnCount(6);

        vboxLayout->addWidget(parkingTable);


        mainLayout->addWidget(tableGroup);

        statusLabel = new QLabel(ParkingManagementUI);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setStyleSheet(QString::fromUtf8("font-style: italic; color: #666; margin-top: 6px;"));

        mainLayout->addWidget(statusLabel);

        stackedWidget->addWidget(ParkingManagementUI);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Parking Management System", nullptr));
        loginTitle->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        emailLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        passwordLabel_login->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signUpLabel->setText(QCoreApplication::translate("MainWindow", "Don't have an account? <a href=\"signup\">Sign up</a>", nullptr));
        signUpTitle->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        emailLabel_signup->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        passwordLabel_signup->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        signUpButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        labelTitle->setText(QCoreApplication::translate("MainWindow", "Enter Parking Lot Details", nullptr));
        nameEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Parking Lot Name", nullptr));
        locationEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        rateLabel->setText(QCoreApplication::translate("MainWindow", "Rates Per Hour and Capacities:", nullptr));
        rateCar->setPrefix(QCoreApplication::translate("MainWindow", "Car: NPR ", nullptr));
        rateCar->setSuffix(QCoreApplication::translate("MainWindow", "/hr", nullptr));
        capacityCar->setPrefix(QCoreApplication::translate("MainWindow", "Capacity: ", nullptr));
        rateBike->setPrefix(QCoreApplication::translate("MainWindow", "Bike: NPR ", nullptr));
        rateBike->setSuffix(QCoreApplication::translate("MainWindow", "/hr", nullptr));
        capacityBike->setPrefix(QCoreApplication::translate("MainWindow", "Capacity: ", nullptr));
        rateBus->setPrefix(QCoreApplication::translate("MainWindow", "Bus: NPR ", nullptr));
        rateBus->setSuffix(QCoreApplication::translate("MainWindow", "/hr", nullptr));
        capacityBus->setPrefix(QCoreApplication::translate("MainWindow", "Capacity: ", nullptr));
        rateMinivan->setPrefix(QCoreApplication::translate("MainWindow", "Minivan: NPR ", nullptr));
        rateMinivan->setSuffix(QCoreApplication::translate("MainWindow", "/hr", nullptr));
        capacityMinivan->setPrefix(QCoreApplication::translate("MainWindow", "Capacity: ", nullptr));
        handicappedSpotsSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "Handicapped Spots: ", nullptr));
        customLabel->setText(QCoreApplication::translate("MainWindow", "Custom Vehicle Rate", nullptr));
        customVehicleName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Vehicle Type", nullptr));
        customRate->setPrefix(QCoreApplication::translate("MainWindow", "NPR ", nullptr));
        customRate->setSuffix(QCoreApplication::translate("MainWindow", "/hr", nullptr));
        customCapacity->setPrefix(QCoreApplication::translate("MainWindow", "Capacity: ", nullptr));
        addCustomRateButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        editCustomRateButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        deleteCustomRateButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        ParkingManagementUI->setWindowTitle(QCoreApplication::translate("MainWindow", "\360\237\232\230 Parking Management Dashboard", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\232\227 Parking Management System", nullptr));
        controlGroup->setTitle(QCoreApplication::translate("MainWindow", "Vehicle Operations", nullptr));
        addEntryButton->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Add Vehicle Entry", nullptr));
        processExitButton->setText(QCoreApplication::translate("MainWindow", "\360\237\232\252 Process Exit", nullptr));
        refreshButton->setText(QCoreApplication::translate("MainWindow", "\360\237\224\204 Check Status", nullptr));
        tableGroup->setTitle(QCoreApplication::translate("MainWindow", "Parked Vehicles", nullptr));
        QTableWidgetItem *___qtablewidgetitem = parkingTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Vehicle No", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = parkingTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Vehicle Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = parkingTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Entry Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = parkingTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Exit Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = parkingTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Slot", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = parkingTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
