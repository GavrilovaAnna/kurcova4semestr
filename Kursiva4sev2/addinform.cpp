#include "addinform.h"
#include "qsqlerror.h"
#include "ui_addinform.h"

#include <QString>
#include <QDebug>

addinform::addinform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addinform)
{
    ui->setupUi(this);
}

addinform::~addinform()
{
    delete ui;
}


void addinform::on_pushButtonDebtore_clicked()
{
     dopinf.show();

}


void addinform::on_pushButton_Ur_clicked()
{
    adur.show();
}


void addinform::on_pushButtonFiz_clicked()
{
    adfiz.show();
}


void addinform::on_pushButton_Prise_clicked()
{
    adprise.show();
}

