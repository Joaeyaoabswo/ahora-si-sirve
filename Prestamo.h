#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "Cliente.h"
#include "pago.h"
#include "Fecha.h"
#define VAR 50

class Prestamo
{
    public:
            Prestamo(int id);
            int getNumPrestamo();
            void setNumeroPrestamo(int nump);
            CLIENTE *getCliente();
            void setCliente(CLIENTE *clik);
            void setFecha(fecha *feA);
            fecha *getfechaAprobacion();
            void setMontoAprobado(float Mp);
            float getMontoAprobado();
            bool hacerPagos(Pago *pg);
            Pago **getlstPago();
            float getsaldoPendiente();
            int getContadorPagos();
       // virtual ~Prestamo();

    protected:

    private:
       int numeroPrestamo;
       CLIENTE *Cliente;
       fecha  *fechaAprobacion;
       float MontoAprobado;
       Pago *lstPago[VAR];
       float saldoPendiente;
       int  contadorPago;
};

#endif // PRESTAMO_H
