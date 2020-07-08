#include "reportes.h"
#include "ui_reportes.h"
#include "menu.h"

Reportes::Reportes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reportes)
{
    ui->setupUi(this);
    ui->id_listaclientes->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_busquedaproductos->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_ventasperiodo->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_productosreposicion->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_listatrabajadores->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_listaproveedores->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_regresardereportes->setStyleSheet("* { background-color: rgb(96,0,205) }");
    setFixedSize(ui->ventana_reportes->sizeHint());
    setWindowTitle("Reportes");

}

Reportes::~Reportes()
{
    delete ui;
}

void Reportes::on_id_regresardereportes_clicked()
{
   emit(back_menu());
}
