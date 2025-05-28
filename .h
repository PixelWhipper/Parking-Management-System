#include "ui_.h"
#include <QWidget>
#include <QDebug>
#include <QString>
#include <QListWidgetItem>

class AdminInput : public QWidget {
    Q_OBJECT

public:
    AdminInput(QWidget *parent = nullptr) : QWidget(parent), ui(new Ui::AdminInputUI) {
        ui->setupUi(this);
        connect(ui->saveButton, &QPushButton::clicked, this, &AdminInput::saveParkingLotData);
        connect(ui->addCustomRateButton, &QPushButton::clicked, this, &AdminInput::addCustomVehicleEntry);
    }

    ~AdminInput() {
        delete ui;
    }

private slots:
    void saveParkingLotData();
    void addCustomVehicleEntry();

private:
    Ui::AdminInputUI *ui;
};
