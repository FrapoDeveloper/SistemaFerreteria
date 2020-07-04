#include "menu.h"
#include "ui_menu.h"
#include "operaciones.h"
#include "login.h"
Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    setFixedSize(ui->ventana_menu->sizeHint());
    setWindowTitle("Login");
    ui->id_iralogin->setStyleSheet("* { background-color: rgb(96,0,205) }");

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
