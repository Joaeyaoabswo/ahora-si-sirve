#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
using namespace std;

class CLIENTE
{
    public:
          CLIENTE(int ID,string nom,string ape);
         int getIdcliente();
         string getNombre();
         string getApellido();
//        virtual ~Cliente();

    protected:

    private:
    int IdCliente;
    string nombre;
    string apellido;
};

#endif // CLIENTE_H
