#include "operaciones.h"
#include "ui_operaciones.h"
#include "menu.h"

Operaciones::Operaciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Operaciones)
{
    ui->setupUi(this);
    ventana_registrocliente = new Registro_cliente();

    QObject::connect(ventana_registrocliente,SIGNAL(back_operaciones()),this,SLOT(solo_operaciones()));
    //ui->id_clientes->setStyleSheet("* { background-color: rgb(144,220,219) }");
    ui->id_clientes->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_productos->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_proveedores->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_lineaproductos->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_trabajadores->setStyleSheet("* { background-color: rgb(29,98,105) }");
    ui->id_regresarmenu->setStyleSheet("* { background-color: rgb(96,0,205) }");
    setFixedSize(ui->ventana_operaciones->sizeHint());
    setWindowTitle("Operaciones");

}

Operaciones::~Operaciones()
{
    delete ui;
}

void Operaciones::solo_operaciones(){
    this->setVisible(true);
    ventana_registrocliente->setVisible(false);
}
void Operaciones::on_id_regresarmenu_clicked()
{
    emit(back_menu());
}

void Operaciones::on_id_clientes_clicked()
{
    this->setVisible(false);
    ventana_registrocliente->setVisible(true);
}
