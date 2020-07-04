#include "operaciones.h"
#include "ui_operaciones.h"
#include "menu.h"

Operaciones::Operaciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Operaciones)
{
    ui->setupUi(this);
    //ui->id_clientes->setStyleSheet("* { background-color: rgb(144,220,219) }");
    ui->id_clientes->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_productos->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_proveedores->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_lineaproductos->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_trabajadores->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_regresarmenu->setStyleSheet("* { background-color: rgb(96,0,205) }");

}

Operaciones::~Operaciones()
{
    delete ui;
}

void Operaciones::on_id_regresarmenu_clicked()
{
    Menu * next = new Menu();
    next->show();
    close();
}
