#include "lpersonas.h"
#include "persona.h"
#include "trabajador.h"
Lpersonas::Lpersonas(Cliente *cliente)
{
    this->lista_clientes = cliente->getNombrePersona();
}
Lpersonas::Lpersonas(Trabajador *trabajador){
    this->lista_trabajadores = trabajador->getNombrePersona();
}

