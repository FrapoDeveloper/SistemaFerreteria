#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <QWidget>
#include "registro_cliente.h"
namespace Ui {
class Operaciones;
}

class Operaciones : public QWidget
{
    Q_OBJECT

public:
    explicit Operaciones(QWidget *parent = nullptr);
    ~Operaciones();
signals:
    void back_menu();
private slots:
    void solo_operaciones();
    void on_id_regresarmenu_clicked();
    void on_id_clientes_clicked();

private:
    Ui::Operaciones *ui;
    Registro_cliente *ventana_registrocliente;

};

#endif // OPERACIONES_H
