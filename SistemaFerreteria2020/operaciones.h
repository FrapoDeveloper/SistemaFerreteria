#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <QWidget>

namespace Ui {
class Operaciones;
}

class Operaciones : public QWidget
{
    Q_OBJECT

public:
    explicit Operaciones(QWidget *parent = nullptr);
    ~Operaciones();

private slots:
    void on_id_regresarmenu_clicked();

private:
    Ui::Operaciones *ui;
};

#endif // OPERACIONES_H
