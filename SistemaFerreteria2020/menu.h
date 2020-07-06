#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "login.h"
namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);

    void setNameUser(QString);

    ~Menu();

private slots:
    void on_pushButton_3_clicked();

    void on_id_iralogin_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Menu *ui;
    QString name_user_menu;
};

#endif // MENU_H
