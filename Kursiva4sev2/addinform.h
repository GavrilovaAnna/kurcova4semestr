#ifndef ADDINFORM_H
#define ADDINFORM_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

#include "adinfdeb.h"
#include "ui_adinfdeb.h"

#include "addur.h"
#include "ui_addur.h"

#include "addfiz.h"
#include "ui_addfiz.h"

#include "addprise.h"
#include "ui_addprise.h"

namespace Ui {
class addinform;
}

class addinform : public QWidget
{
    Q_OBJECT

public:
    explicit addinform(QWidget *parent = nullptr);
    ~addinform();

private slots:

    void on_pushButtonDebtore_clicked();

    void on_pushButton_Ur_clicked();

    void on_pushButtonFiz_clicked();

    void on_pushButton_Prise_clicked();

private:
    Ui::addinform *ui;
    adinfDeb dopinf;
    addUr adur;
    addfiz adfiz;
    addprise adprise;
};

#endif // ADDINFORM_H
