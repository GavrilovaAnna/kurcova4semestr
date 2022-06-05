#ifndef ADDPRISE_H
#define ADDPRISE_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>
namespace Ui {
class addprise;
}

class addprise : public QWidget
{
    Q_OBJECT

public:
    explicit addprise(QWidget *parent = nullptr);
    ~addprise();

private slots:
    void on_pushButtonPrise_clicked();

private:
    Ui::addprise *ui;
};

#endif // ADDPRISE_H
