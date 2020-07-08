#ifndef SEDE_H
#define SEDE_H
#include "QString"
class Sede
{
    private:
        QString nombre_sede;
        int tiempo_sede;
    public:
        QString getNombreSede(){
            return nombre_sede;
        }
        int getTiempoSede(){
            return  tiempo_sede;
        }
        Sede(QString,int);
};

#endif // SEDE_H
