#ifndef ATENCIONTIEMPO_H
#define ATENCIONTIEMPO_H
#include <iostream>
#include <stdlib.h>
#include "Aspecto.h"
#include "Utility.h"

using namespace std;

class AtencionTiempo : public Aspecto
{
    public:
        AtencionTiempo();
        int getPuntos();
        void setPuntos(int p);
        virtual ~AtencionTiempo();

    protected:

    private:
        int puntos;
};

#endif // ATENCIONTIEMPO_H
