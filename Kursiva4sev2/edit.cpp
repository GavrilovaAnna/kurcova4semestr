#include "edit.h"
#include "ui_edit.h"

edit::edit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::edit)
{
    ui->setupUi(this);
}

edit::~edit()
{
    delete ui;
}

void edit::on_pushButtonDeb_clicked()
{
    eddeb.show();
}

