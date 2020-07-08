#ifndef CLIENTE_H
#define CLIENTE_H
#include "persona.h"

class Cliente: public Persona
{
private:
    QString producto_comprado;
    float importe_pagado;

public:
    Cliente(QString,long,QString,float);
    ~Cliente();
    QString getProductoComprado();
    float getImporteVenta();


};

#endif // CLIENTE_H
