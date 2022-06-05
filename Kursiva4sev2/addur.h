#ifndef ADDUR_H
#define ADDUR_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class addUr;
}

class addUr : public QWidget
{
    Q_OBJECT

public:
    explicit addUr(QWidget *parent = nullptr);
    ~addUr();

private slots:
    void on_pushButtonUr_clicked();

private:
    Ui::addUr *ui;
};

#endif // ADDUR_H
