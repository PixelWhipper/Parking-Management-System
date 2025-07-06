#include "addvehicle.h"
#include "ui_addvehicle.h"

addvehicle::addvehicle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addvehicle)
{
    ui->setupUi(this);
}

addvehicle::~addvehicle()
{
    delete ui;
}
