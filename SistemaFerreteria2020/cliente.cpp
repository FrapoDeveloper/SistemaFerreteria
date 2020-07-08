#include "cliente.h"
#include "persona.h"
Cliente::Cliente(QString nombre_cliente,long dni_cliente,QString nombre_producto,float importe_cliente):Persona(nombre_cliente,dni_cliente)
{
   this->producto_comprado = nombre_producto;
   this->importe_pagado = importe_cliente;
}
QString Cliente::getProductoComprado(){
    return  producto_comprado;
}

float Cliente::getImporteVenta(){
    return  importe_pagado;
}
