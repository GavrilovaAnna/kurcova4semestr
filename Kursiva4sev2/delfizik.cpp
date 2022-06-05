#include "delfizik.h"
#include "qmessagebox.h"
#include "qsqlerror.h"
#include "qsqlquery.h"
#include "ui_delfizik.h"

delfizik::delfizik(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::delfizik)
{
    ui->setupUi(this);
}

delfizik::~delfizik()
{
    delete ui;
}

void delfizik::on_pushButton_clicked()
{
    QSqlQuery*query = new QSqlQuery;
    QMessageBox*mes = new QMessageBox();

    if(query->exec(QString("DeleteFizik %1, %2").arg(ui->lineEdit->text()).arg(ui->lineEdit_2->text())))
    {
        mes->setText("Запрос выполнен");
        mes->show();
    }
    else
    {
        qDebug() << "error" << query->lastError().text();
    }
}

