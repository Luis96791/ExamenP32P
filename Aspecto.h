#ifndef ASPECTO_H
#define ASPECTO_H
#include <iostream>

using namespace std;

class Aspecto
{
    public:
        Aspecto();
        virtual int getPuntos()=0;
        virtual void setPuntos(int p)=0;
        virtual ~Aspecto();

    protected:

    private:
        string descripcion;
        int num_aspecto, puntos;
};

#endif // ASPECTO_H
