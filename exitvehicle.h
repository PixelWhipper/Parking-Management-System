#ifndef EXITVEHICLE_H
#define EXITVEHICLE_H

#include <QWidget>

namespace Ui {
class exitvehicle;
}

class exitvehicle : public QWidget
{
    Q_OBJECT

public:
    explicit exitvehicle(QWidget *parent = nullptr);
    ~exitvehicle();

private:
    Ui::exitvehicle *ui;
};

#endif // EXITVEHICLE_H
