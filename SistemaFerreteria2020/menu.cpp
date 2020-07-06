#include "menu.h"
#include "ui_menu.h"
#include "operaciones.h"
#include "login.h"
#include "comprayventa.h"
#include "reportes.h"
#include "ferreteria.h"
Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)

{
    ui->setupUi(this);
    setFixedSize(ui->ventana_menu->sizeHint());
    setWindowTitle("Menu");
    ui->id_iralogin->setStyleSheet("* { background-color: rgb(96,0,205) }");

    Ferreteria *ferreteria = new Ferreteria("Ferreteria Covid");
    ferreteria->setTiempo("2 meses");

    ui->nombre_ferreteria->setStyleSheet("QLabel {color: rgb(255,255,255) }");
    ui->nombre_ferreteria->setText(ferreteria->getNombreFerreteria());
    ui->tiempo_ferreteria->setStyleSheet("QLabel {color: rgb(255,255,255) }");
    ui->tiempo_ferreteria->setText(ferreteria->getTiempo());
    ui->name_user->setStyleSheet("QLabel {color: rgb(255,255,255) }");


}

void Menu::establecetitulo(QString user){
    ui->name_user->setText(user);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_3_clicked()
{
    Operaciones * next = new Operaciones();
    next->show();

    close();

}

void Menu::on_id_iralogin_clicked()
{
    Login * next = new Login();
    next->show();

    close();
}

void Menu::on_pushButton_2_clicked()
{
    ComprayVenta * next = new ComprayVenta();
    next->show();

    close();
}

void Menu::on_pushButton_clicked()
{
    Reportes * next = new Reportes();
    next->show();

    close();
}
