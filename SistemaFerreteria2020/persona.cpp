#include "persona.h"

Persona::Persona(QString nombre_p,long dni_p)
{
    this->nombre_persona = nombre_p;
    this->dni_persona = dni_p;
}

QString Persona::getNombrePersona(){
    return nombre_persona;
}

long Persona::getDniPeronsa(){
    return dni_persona;
}
