#ifndef COMPRAYVENTA_H
#define COMPRAYVENTA_H

#include <QWidget>

namespace Ui {
class ComprayVenta;
}

class ComprayVenta : public QWidget
{
    Q_OBJECT

public:
    explicit ComprayVenta(QWidget *parent = nullptr);
    ~ComprayVenta();

private slots:
    void on_id_regresardecomprayventa_clicked();

private:
    Ui::ComprayVenta *ui;
};

#endif // COMPRAYVENTA_H
