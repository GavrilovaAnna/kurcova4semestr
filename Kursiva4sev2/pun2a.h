#ifndef PUN2A_H
#define PUN2A_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class pun2a;
}

class pun2a : public QWidget
{
    Q_OBJECT

public:
    explicit pun2a(QWidget *parent = nullptr);
    ~pun2a();
    void setTable();

private:
    Ui::pun2a *ui;
};

#endif // PUN2A_H
