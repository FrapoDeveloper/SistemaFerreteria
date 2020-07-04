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

private:
    Ui::Operaciones *ui;
};

#endif // OPERACIONES_H
