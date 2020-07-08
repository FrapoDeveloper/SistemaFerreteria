#include "comprayventa.h"
#include "ui_comprayventa.h"
#include "menu.h"

ComprayVenta::ComprayVenta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ComprayVenta)
{
    ui->setupUi(this);
    ui->id_registroventas->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_busquedaventas->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_registrocompras->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_guiacompras->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_regresardecomprayventa->setStyleSheet("* { background-color: rgb(96,0,205) }");
    setFixedSize(ui->ventana_comprayventa->sizeHint());
    setWindowTitle("Compra y venta");

}

ComprayVenta::~ComprayVenta()
{
    delete ui;
}

void ComprayVenta::on_id_regresardecomprayventa_clicked()
{
    emit(back_menu());
}
