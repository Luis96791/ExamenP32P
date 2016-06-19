#include "Apoyoaprendizaje.h"

ApoyoAprendizaje::ApoyoAprendizaje()
{
    //ctor
}

void ApoyoAprendizaje::setDescripcion(string d)
{
    descripcion = d;
}

string ApoyoAprendizaje::getDescripcion()
{
    return descripcion;
}

void ApoyoAprendizaje::setNumAspecto(int n)
{
    num_aspecto = n;
}

int ApoyoAprendizaje::getNumAspecto()
{
    return num_aspecto;
}

void ApoyoAprendizaje::setPuntos(int p)
{
    puntos = p;
}

int ApoyoAprendizaje::getPuntos()
{
    return puntos;
}

ApoyoAprendizaje::~ApoyoAprendizaje()
{
    //dtor
}
