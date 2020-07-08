#ifndef LPERSONAS_H
#define LPERSONAS_H
#include "cliente.h"
#include "trabajador.h"
class Lpersonas
{
private:
    QString lista_clientes;
    QString lista_trabajadores;
public:
    Lpersonas(Cliente *cliente);
    Lpersonas(Trabajador *trabajador);
};

#endif // LPERSONAS_H
