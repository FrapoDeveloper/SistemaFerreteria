#include "trabajador.h"
#include "persona.h"
Trabajador::Trabajador(QString nombre_t,long dni_t,QString producto_v,QString almacen_t):Persona(nombre_t,dni_t)
{
this->producto_vendido  = producto_v;
this->almacen_trabajo = almacen_t;
}

QString Trabajador::getProductoVendido(){
    return producto_vendido;
}

QString Trabajador::getAlmacenTrabajo(){
    return  almacen_trabajo;
}
