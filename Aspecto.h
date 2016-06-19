#ifndef ASPECTO_H
#define ASPECTO_H
#include <iostream>

using namespace std;

class Aspecto
{
    public:
        Aspecto();
        virtual string getDescripcion()=0;
        virtual void setDescripcion(string d)=0;
        virtual int getNumAspecto()=0;
        virtual void setNumAspecto(int n)=0;
        virtual int getPuntos()=0;
        virtual void setPuntos(int p)=0;
        virtual ~Aspecto();

    protected:

    private:
        string descripcion;
        int num_aspecto, puntos;
};

#endif // ASPECTO_H
