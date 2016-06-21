#ifndef VERATENCIONTIEMPO_H
#define VERATENCIONTIEMPO_H
#include "AtencionTiempo.h"
#include <iostream>

using namespace std;

class VerAtencionTiempo
{
    public:
        Utility utility;
        AtencionTiempo atencionTiempo;
        VerAtencionTiempo();
        string descripcion[6];
        string mostrarDescripcion(int c,string ac_des);
        void llenarDescripcion();
        int devolverIngreso(sf::String ingreso);
        int ventana();
        virtual ~VerAtencionTiempo();

    protected:

    private:
};

#endif // VERATENCIONTIEMPO_H
