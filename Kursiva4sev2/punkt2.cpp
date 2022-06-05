#include "punkt2.h"
#include "ui_punkt2.h"

punkt2::punkt2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::punkt2)
{
    ui->setupUi(this);
}

punkt2::~punkt2()
{
    delete ui;
}

void punkt2::on_pushButton_clicked()
{
    punkt2 = new pun2a();
    punkta->setTable();
    punkta->show();
}

