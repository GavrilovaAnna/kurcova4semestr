#ifndef DELPRISE_H
#define DELPRISE_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class delprise;
}

class delprise : public QWidget
{
    Q_OBJECT

public:
    explicit delprise(QWidget *parent = nullptr);
    ~delprise();

private slots:
    void on_pushButton_clicked();

private:
    Ui::delprise *ui;
};

#endif // DELPRISE_H
