#include "delur.h"
#include "qmessagebox.h"
#include "qsqlerror.h"
#include "qsqlquery.h"
#include "qurlquery.h"
#include "ui_delur.h"

delur::delur(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::delur)
{
    ui->setupUi(this);
}

delur::~delur()
{
    delete ui;
}

void delur::on_pushButton_clicked()
{
    QSqlQuery*query = new QSqlQuery;
    QMessageBox*mes = new QMessageBox();

    if(query->exec(QString("DeleteUr %1, %2").arg(ui->lineEdit->text()).arg(ui->lineEdit_3->text())))
    {
        mes->setText("Запрос выполнен");
        mes->show();
    }
    else
    {
        qDebug() << "error" << query->lastError().text();
    }
}

