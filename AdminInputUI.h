#include "ui_AdminInputUI.h"

class AdminInputUI : public QWidget {
    Q_OBJECT

public:
    explicit AdminInputUI(QWidget* parent = nullptr)
        : QWidget(parent), ui(new Ui::AdminInputUI) {
        ui->setupUi(this);
        setupConnections();
    }

private slots:
    void onAddCustomVehicle();
    void onEditCustomVehicle();
    void onDeleteCustomVehicle();
    void onLoadCustomVehicle(QListWidgetItem* item);
    void onSaveParkingLot();

private:
    Ui::AdminInputUI* ui;
  void setupConnections();
void clearCustomVehicleInputs();
};
