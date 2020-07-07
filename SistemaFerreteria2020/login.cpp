#include "login.h"
#include "ui_login.h"
#include "menu.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->id_ingresar->setStyleSheet("* { background-color: rgb(219,101,211,86) }");
    ui->mensaje_error->setStyleSheet("QLabel {color: rgb(255,0,35) }");
    ui->mensaje_error->setText("");
    setFixedSize(ui->ventana_login->sizeHint());
    setWindowTitle("Login");



}

Login::~Login()
{
    delete ui;
}


void Login::on_id_ingresar_clicked()
{

   QString pass = "root123";
    if(  ui->pass_user->text() == pass){
        Menu * next = new Menu();
        next->setNameUser(ui->name_user->text());
        next->show();

        close();
    }else{
           ui->mensaje_error->setText("Usuario o contaseña incorrecta.");
    }

}
