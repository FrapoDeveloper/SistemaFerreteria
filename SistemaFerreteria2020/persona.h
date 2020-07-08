#ifndef PERSONA_H
#define PERSONA_H
#include "QString"

class Persona
{
    private:
        QString nombre_persona;
        long dni_persona;
    public:
       Persona(QString,long);
       ~Persona();
       QString getNombrePersona();
       long getDniPeronsa();


};

#endif // PERSONA_H
