#ifndef DELUR_H
#define DELUR_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class delur;
}

class delur : public QWidget
{
    Q_OBJECT

public:
    explicit delur(QWidget *parent = nullptr);
    ~delur();

private slots:
    void on_pushButton_clicked();

private:
    Ui::delur *ui;
};

#endif // DELUR_H
