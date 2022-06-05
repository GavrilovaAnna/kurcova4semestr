#include "addfiz.h"
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQuery>
#include "ui_addfiz.h"

#include <QString>
#include <QDebug>

addfiz::addfiz(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addfiz)
{
    ui->setupUi(this);
}

addfiz::~addfiz()
{
    delete ui;
}

void addfiz::on_pushButtonFiz_clicked()
{
    QSqlQuery*query = new QSqlQuery;
    QMessageBox*mes = new QMessageBox();

    if(query->exec(QString("addFizik %1, %2").arg(ui->lineEdit->text()).arg(ui->lineEdit_2->text())))
    {
        mes->setText("Запрос выполнен");
        mes->show();
    }
    else
    {
        qDebug() << "error" << query->lastError().text();
    }
}

