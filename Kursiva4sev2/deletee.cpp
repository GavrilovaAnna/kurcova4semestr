#include "deletee.h"
#include "ui_deletee.h"

#include <QString>
#include <QDebug>

deletee::deletee(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deletee)
{
    ui->setupUi(this);
}

deletee::~deletee()
{
    delete ui;
}

void deletee::on_pushButtonDeb_clicked()
{
    deld.show();
}


void deletee::on_pushButton_Ur_clicked()
{
    delu.show();
}


void deletee::on_pushButton_Fiz_clicked()
{
    delfiz.show();
}


void deletee::on_pushButton_Prise_clicked()
{
    delp.show();
}

