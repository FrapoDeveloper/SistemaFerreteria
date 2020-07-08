#ifndef LSEDES_H
#define LSEDES_H
#include "sede.h"
#include "QList"
#include "QString"
#include "array"

class Lsedes
{
private:
    QString lista_sedes="";
public:

    Lsedes(Sede *sedes);
    QString getListaSedes();

    ~Lsedes();


};

#endif // LSEDES_H
