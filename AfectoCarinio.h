#ifndef AFECTOCARINIO_H
#define AFECTOCARINIO_H
#include <iostream>
#include <stdlib.h>
#include "Aspecto.h"
#include "Utility.h"

class AfectoCarinio : public Aspecto
{
   public:
        AfectoCarinio();
        int getPuntos();
        void setPuntos(int p);
        virtual ~AfectoCarinio();

    protected:

    private:
        int puntos;
};

#endif // AFECTOCARINIO_H
