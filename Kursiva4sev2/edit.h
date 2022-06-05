#ifndef EDIT_H
#define EDIT_H


#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

#include "editdeb.h"
#include "ui_editdeb.h"

namespace Ui {
class edit;
}

class edit : public QWidget
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = nullptr);
    ~edit();

private slots:
    void on_pushButtonDeb_clicked();

private:
    Ui::edit *ui;
    editdeb eddeb;
};

#endif // EDIT_H
