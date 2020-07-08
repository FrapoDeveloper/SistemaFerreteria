#ifndef FERRETERIA_H
#define FERRETERIA_H
#include <QString>
class Ferreteria
{
       private:
             QString  nombre_ferreteria;

       public:

             QString  getNombreFerreteria(){
                 return nombre_ferreteria;
             }

             Ferreteria(QString nombre);
             ~Ferreteria();
};


#endif // FERRETERIA_H
