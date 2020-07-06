#include "ferreteria.h"

Ferreteria::Ferreteria(QString nombre)
{
    this->nombre_ferreteria = nombre;
}
QString Ferreteria::getTiempo(){
    QString tiempo_mercado = tiempo_ferreteria;
    tiempo_mercado.prepend("Tiempo en el mercado: ");
    return tiempo_mercado;
}

