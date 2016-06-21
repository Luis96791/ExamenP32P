#ifndef VERCOMUNICACION_H
#define VERCOMUNICACION_H
#include "Comunicacion.h"
#include <iostream>

using namespace std;

class VerComunicacion
{
    public:
        Utility utility;
        Comunicacion comunicacion;
        VerComunicacion();
        string descripcion[5];
        string mostrarDescripcion(int c,string ac_des);
        void llenarDescripcion();
        int devolverIngreso(sf::String ingreso);
        int ventana();
        virtual ~VerComunicacion();

    protected:

    private:
};

#endif // VERCOMUNICACION_H
