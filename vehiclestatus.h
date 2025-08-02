#ifndef VEHICLESTATUS_H
#define VEHICLESTATUS_H

#include <QWidget>

namespace Ui {
class vehcilestaus;
}

class vehcilestaus : public QWidget
{
    Q_OBJECT

public:
    explicit vehcilestaus(QWidget *parent = nullptr);
    ~vehcilestaus();

private:
    Ui::vehcilestaus *ui;
};

#endif // VEHICLESTATUS_H
