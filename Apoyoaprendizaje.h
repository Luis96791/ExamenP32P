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
        string getDescripcion();
        void setDescripcion(string d);
        int getNumAspecto();
        void setNumAspecto(int n);
        int getPuntos();
        void setPuntos(int p);
        virtual ~ApoyoAprendizaje();

    protected:

    private:
        string descripcion;
        int num_aspecto, puntos;
};

#endif // APOYOAPRENDIZAJE_H
