#include "registro_cliente.h"
#include "ui_registro_cliente.h"

Registro_cliente::Registro_cliente(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Registro_cliente)
{
    ui->setupUi(this);
    ui->id_clientes->setStyleSheet("* { background-color: rgb(19,48,105) }");
    ui->id_productos->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_proveedores->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_lineaproductos->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_trabajadores->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_regresaroperaciones->setStyleSheet("* { background-color: rgb(96,0,205) }");
}

Registro_cliente::~Registro_cliente()
{
    delete ui;
}

void Registro_cliente::on_id_regresaroperaciones_clicked()
{
     emit(back_operaciones());
}
