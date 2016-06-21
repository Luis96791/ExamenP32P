#ifndef COMUNICACION_H
#define COMUNICACION_H
#include <iostream>
#include <stdlib.h>
#include "Aspecto.h"
#include "Utility.h"

using namespace std;

class Comunicacion : public Aspecto
{
    public:
        Comunicacion();
        int getPuntos();
        void setPuntos(int p);
        virtual ~Comunicacion();

    protected:

    private:
        int puntos;
};

#endif // COMUNICACION_H
