#include "pago.h"

Pago::Pago(fecha *FP,float MP){
    fechaP=FP;
    montoP=MP;
}

fecha *Pago::getFechaPago(){
     return fechaP;
}

float Pago::getMontoPago(){
   return montoP;
}
//Pago::~Pago()
