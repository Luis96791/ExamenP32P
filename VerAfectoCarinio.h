#ifndef VERAFECTOCARINIO_H
#define VERAFECTOCARINIO_H
#include "AfectoCarinio.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class VerAfectoCarinio
{
    public:
        Utility utility;
        AfectoCarinio afectoCarinio;
        VerAfectoCarinio();
        string descripcion[6];
        string mostrarDescripcion(int c,string ac_des);
        void llenarDescripcion();
        int devolverIngreso(sf::String ingreso);
        int ventana();
        virtual ~VerAfectoCarinio();

    protected:

    private:
};

#endif // VERAFECTOCARINIO_H
