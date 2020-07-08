#ifndef REGISTRO_CLIENTE_H
#define REGISTRO_CLIENTE_H

#include <QWidget>

namespace Ui {
class Registro_cliente;
}

class Registro_cliente : public QWidget
{
    Q_OBJECT

public:
    explicit Registro_cliente(QWidget *parent = nullptr);
    ~Registro_cliente();
signals:
    void back_operaciones();
private slots:
    void on_id_regresaroperaciones_clicked();

private:
    Ui::Registro_cliente *ui;
};

#endif // REGISTRO_CLIENTE_H
