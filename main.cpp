#include <SFML/Graphics.hpp>
#include "VerApoyoAprendizaje.h"
#include "Aspecto.h"
#include <iostream>

using namespace std;

int main()
{
    Aspecto *aspecto;
    ApoyoAprendizaje apoyoAprendizaje;
    aspecto = &apoyoAprendizaje;

    VerApoyoAprendizaje verApoyoAprendizaje;

    aspecto->setPuntos(verApoyoAprendizaje.ventana());
    cout<<aspecto->getPuntos()<<endl;
    return 0;
}
