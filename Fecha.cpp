#include "Fecha.h"
#include <iostream>
using namespace std;

fecha::fecha(int d,int m, int a){
        dia=d;
        mes=m;
        anio=a;
}

void fecha::mostrarFecha(){
      cout<<dia<<"//"<<mes<<"//"<<anio<<endl;
}

/* Fecha::~Fecha()
{
    //dtor
}
*/
