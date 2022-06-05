#include "login.h"
#include "ui_login.h"
#include <QDebug>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    ui->lineEdit->setEchoMode(QLineEdit::Password);
    mes = new QMessageBox();
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
    QString address = "LAPTOP-2ERU779C\\SQLEXPRESS";
    QString name = "Kurcova_4_semectr";
    db.setDatabaseName("DRIVER={SQL Server};SERVER="+address+";DATABASE="+name+";");
    db.setUserName(ui->lineEdit_2->text());
    db.setPassword(ui->lineEdit->text());


    if(db.open())
    {
        mes->setText("Соединилась");
    }
    else
    {
       mes->setText("Соединение НЕ установлено");
       qDebug() <<  db.lastError().text();
    }

    mes->show();
}

