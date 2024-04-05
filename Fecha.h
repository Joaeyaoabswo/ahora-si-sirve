#ifndef FECHA_H
#define FECHA_H
#include <iostream>
using namespace std;

class fecha
{
    public:
        fecha();
       // virtual ~Fecha();
        fecha(int d,int m, int a);
        void mostrarFecha();

    protected:

    private:
         private:
    int dia;
    int mes;
    int anio;
};
#endif // FECHA_H
