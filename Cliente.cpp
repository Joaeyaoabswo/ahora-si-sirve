#include "Cliente.h"

CLIENTE::CLIENTE(int ID,string nom,string ape){
            IdCliente=ID;
            nombre=nom;
            apellido=ape;
        }
int CLIENTE::getIdcliente(){
        return IdCliente;
        }

string CLIENTE::getNombre(){
        return nombre;
        }
string CLIENTE::getApellido(){
        return apellido;
        }



// Cliente::~Cliente()
//{
    //dtor
//}
