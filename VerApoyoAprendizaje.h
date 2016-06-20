#ifndef VERAPOYOAPRENDIZAJE_H
#define VERAPOYOAPRENDIZAJE_H
#include "Apoyoaprendizaje.h"
#include <iostream>

using namespace std;

class VerApoyoAprendizaje
{
    public:
        Utility utility;
        ApoyoAprendizaje apoyoAprendizaje;
        VerApoyoAprendizaje();
        string descripcion[6];
        string mostrarDescripcion(int c,string ac_des);
        void llenarDescripcion();
        int devolverIngreso(sf::String ingreso);
        int ventana();
        virtual ~VerApoyoAprendizaje();
    protected:

    private:
};

#endif // VERAPOYOAPRENDIZAJE_H
