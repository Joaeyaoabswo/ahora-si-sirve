#include "Prestamo.h"

#define VAR 50

   Prestamo::Prestamo(int id){
       numeroPrestamo=id;
       saldoPendiente=0;
       contadorPago=0;
       MontoAprobado=0;
       numeroPrestamo=0;
       }
       int Prestamo::getNumPrestamo(){
       return numeroPrestamo;
       }
       void Prestamo::setNumeroPrestamo(int nump){
         numeroPrestamo=nump;
       }
       CLIENTE *Prestamo::getCliente(){
        return Cliente;
       }
       void Prestamo::setCliente(CLIENTE *clik){
            Cliente=clik;
       }
       void Prestamo::setFecha(fecha *feA){
            fechaAprobacion=feA;
       }
       fecha *Prestamo::getfechaAprobacion(){
        return fechaAprobacion;
       }
       void Prestamo::setMontoAprobado(float Mp){
            MontoAprobado=Mp;
            saldoPendiente=Mp;
       }
       float Prestamo::getMontoAprobado(){
       return MontoAprobado;
       }
       bool Prestamo::hacerPagos(Pago *pg){
           bool retorno=false;
            if(contadorPago<VAR){
               lstPago[contadorPago]=pg;
                contadorPago++;
                saldoPendiente -= pg->getMontoPago();
                retorno=true;
            }
            return retorno;
       }

       Pago **Prestamo::getlstPago(){
      return lstPago;
       }

       float Prestamo::getsaldoPendiente(){
       return saldoPendiente;
       }

       int Prestamo::getContadorPagos(){
          return contadorPago;
       }
//Prestamo::~Prestamo()
