#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include "persona.h"

class Trabajador: public Persona
{
    private:
        QString producto_vendido;
        QString almacen_trabajo;

    public:
        Trabajador(QString,long,QString,QString);
        ~Trabajador();
        QString getProductoVendido();
        QString getAlmacenTrabajo();

};

#endif // TRABAJADOR_H
