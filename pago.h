#ifndef PAGO_H
#define PAGO_H
#include "Fecha.h"
#include <iostream>
using namespace std;

class Pago
{
    public:
        Pago(fecha *FP,float MP);
          fecha *getFechaPago();
          float getMontoPago();
        //virtual ~Pago();

    protected:

    private:
      float montoP;
     fecha *fechaP;

};

#endif // PAGO_H
