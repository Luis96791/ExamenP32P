#ifndef APOYOAPRENDIZAJE_H
#define APOYOAPRENDIZAJE_H
#include <iostream>
#include <stdlib.h>
#include "Aspecto.h"
#include "Utility.h"

using namespace std;

class ApoyoAprendizaje : public Aspecto
{
    public:
        ApoyoAprendizaje();
        int getPuntos();
        void setPuntos(int p);
        virtual ~ApoyoAprendizaje();

    protected:

    private:
        int puntos;
};

#endif // APOYOAPRENDIZAJE_H
