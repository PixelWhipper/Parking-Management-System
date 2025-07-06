#ifndef ADDVEHICLE_H
#define ADDVEHICLE_H

#include <QWidget>

namespace Ui {
class addvehicle;
}

class addvehicle : public QWidget
{
    Q_OBJECT

public:
    explicit addvehicle(QWidget *parent = nullptr);
    ~addvehicle();

private:
    Ui::addvehicle *ui;
};

#endif
