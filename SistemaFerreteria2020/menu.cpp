#include "menu.h"
#include "ui_menu.h"
#include "operaciones.h"
Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    setFixedSize(ui->ventana_menu->sizeHint());
    setWindowTitle("Login");
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
