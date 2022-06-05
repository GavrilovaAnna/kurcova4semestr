#include "delprise.h"
#include "qmessagebox.h"
#include "qsqlerror.h"
#include "qsqlquery.h"
#include "qurlquery.h"
#include "ui_delprise.h"

delprise::delprise(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::delprise)
{
    ui->setupUi(this);
}

delprise::~delprise()
{
    delete ui;
}

void delprise::on_pushButton_clicked()
{
    QSqlQuery*query = new QSqlQuery;
    QMessageBox*mes = new QMessageBox();

    if(query->exec(QString("DeletePrise %1, %2, %3").arg(ui->lineEdit->text()).arg(ui->lineEdit_2->text()).arg(ui->lineEdit_3->text())))
    {
        mes->setText("Запрос выполнен");
        mes->show();
    }
    else
    {
        qDebug() << "error" << query->lastError().text();
    }
}

