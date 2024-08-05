/******************************************************************************

ACTIVIDAD 1 CÁLCULO DE EDAD MAYOR O MENOR
*******************************************************************************/
#include<iostream>
using namespace std;
int main ()
{
    int edad;
    cout<< "Ingresa una edad: ";
    cin>> edad;
    if (edad >= 18){
        cout<< "Eres mayor de edad";
    }
    else{
        cout<< "Eres menor de edad";
    }
    return 0;
}
