#include "menu.h"
#include "ui_menu.h"
#include "operaciones.h"
#include "login.h"
#include "comprayventa.h"
#include "reportes.h"
#include "lsedes.h"
#include "ferreteria.h"
#include "QDebug"
Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)

{
    ui->setupUi(this);
    //Signals y slots
    ventana_operaciones = new Operaciones();
    ventana_reportes = new Reportes();
    ventana_comprayventa = new ComprayVenta();

    QObject::connect(ventana_operaciones,SIGNAL(back_menu()),this,SLOT(solo_menu()));
    QObject::connect(ventana_reportes,SIGNAL(back_menu()),this,SLOT(solo_menu()));
    QObject::connect(ventana_comprayventa,SIGNAL(back_menu()),this,SLOT(solo_menu()));

    //Pantalla no maximizable
    setFixedSize(ui->ventana_menu->sizeHint());
    //Nombre de ventana
    setWindowTitle("Menu");
    //Color de botón
    ui->id_iralogin->setStyleSheet("* { background-color: rgb(96,0,205) }");

    Ferreteria *ferreteria = new Ferreteria("Ferretería Covid");
    Sede *sedes[3];
    sedes[0] = new Sede("Callao - Lima",12);
    sedes[1] = new Sede("Esperanza - Trujillo",5);
    sedes[2] = new Sede("Comas - Lima",6);

    int longitud = sizeof(sedes)/sizeof(*sedes);
    Lsedes *todas_sedes[longitud];

    for(int i=0;i<=longitud-1;i++){
      todas_sedes[i]= new Lsedes(sedes[i]);
    }

    //Color de labels
    ui->nombre_ferreteria->setStyleSheet("QLabel {color: rgb(255,255,255) }");
    ui->nombre_sede->setStyleSheet("QLabel {color: rgb(255,255,255) }");
    ui->name_user->setStyleSheet("QLabel {color: rgb(255,255,255) }");
    ui->tiempo_sede->setStyleSheet("QLabel {color: rgb(255,255,255) }");
    ui->l_ferreteria->setStyleSheet("QLabel {color: rgb(255,255,255) }");
    ui->l_sede->setStyleSheet("QLabel {color: rgb(255,255,255) }");
    ui->l_numerosedes->setStyleSheet("QLabel {color: rgb(255,255,255) }");
    ui->l_sedes->setStyleSheet("QLabel {color: rgb(255,255,255) }");

    //Usando los objetos para mostrarla en pantalla
    ui->nombre_ferreteria->setText(ferreteria->getNombreFerreteria());
    ui->nombre_sede->setText(sedes[0]->getNombreSede());
    ui->tiempo_sede->setText(QString::number(sedes[0]->getTiempoSede()).append(" meses."));
    for(int i=0;i<=longitud-1;i++){
        ui->lista_sedes->addItem(todas_sedes[i]->getListaSedes());
    }

}

void Menu::setNameUser(QString user){
    ui->name_user->setText(user);
}

void Menu::solo_menu(){
    this->setVisible(true);
    ventana_operaciones->setVisible(false);
    ventana_reportes->setVisible(false);
    ventana_comprayventa->setVisible(false);
}
Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_3_clicked()
{
    this->setVisible(false);
    ventana_operaciones->setVisible(true);
}

void Menu::on_id_iralogin_clicked()
{
    Login * next = new Login();
    next->show();

    close();
}

void Menu::on_pushButton_2_clicked()
{
    this->setVisible(false);
    ventana_comprayventa->setVisible(true);
}

void Menu::on_pushButton_clicked()
{
    this->setVisible(false);
    ventana_reportes->setVisible(true);
}
