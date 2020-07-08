#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "login.h"
#include "operaciones.h"
#include "reportes.h"
#include "comprayventa.h"
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
    void solo_menu();
    void on_pushButton_3_clicked();

    void on_id_iralogin_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Menu *ui;
    Operaciones *ventana_operaciones;
    Reportes *ventana_reportes;
    ComprayVenta *ventana_comprayventa;

};

#endif // MENU_H
