#include <SFML/Graphics.hpp>
#include "VerApoyoAprendizaje.h"
#include "VerAtencionTiempo.h"
#include "VerAfectoCarinio.h"
#include "Aspecto.h"
#include <iostream>

using namespace std;

int main()
{
    Aspecto *aspecto;

//    ApoyoAprendizaje apoyoAprendizaje;
//    aspecto = &apoyoAprendizaje;
//    VerApoyoAprendizaje verApoyoAprendizaje;
//    aspecto->setPuntos(verApoyoAprendizaje.ventana());
//    cout<<aspecto->getPuntos()<<endl;

//    AtencionTiempo atencionTiempo;
//    aspecto = &atencionTiempo;
//    VerAtencionTiempo verAtencionTiempo;
//    aspecto->setPuntos(verAtencionTiempo.ventana());
//    cout<<aspecto->getPuntos()<<endl;

    AfectoCarinio afectoCarinio;
    aspecto = &afectoCarinio;
    VerAfectoCarinio verAfectoCarinio;
    aspecto->setPuntos(verAfectoCarinio.ventana());
    cout<<aspecto->getPuntos()<<endl;

    return 0;
}
