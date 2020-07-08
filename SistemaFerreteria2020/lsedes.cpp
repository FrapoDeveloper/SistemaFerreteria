#include "lsedes.h"
#include "QDebug"
Lsedes::Lsedes(Sede *sedes)
{
    this->lista_sedes = sedes->getNombreSede();
}

QString Lsedes::getListaSedes(){
    return lista_sedes;
}
Lsedes::~Lsedes()
{

}
