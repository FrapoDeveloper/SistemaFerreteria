#ifndef FERRETERIA_H
#define FERRETERIA_H
#include <QString>
class Ferreteria
{
       private:
             QString  nombre_ferreteria;
             QString  tiempo_ferreteria;
       public:

             QString  getNombreFerreteria(){
                 return nombre_ferreteria;
             }

             void setTiempo(QString tiempo){
                 this->tiempo_ferreteria = tiempo;
             }

             QString getTiempo();

             Ferreteria(QString nombre);
             ~Ferreteria();
};


#endif // FERRETERIA_H
