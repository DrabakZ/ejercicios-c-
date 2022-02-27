#include <iostream>

using namespace std;

int main()
{
    struct hogar
    {
        int numeroDireccion;
        int numerotel;
        hogar() {numeroDireccion = 0, numerotel = 2;}
        int verDir() {return numeroDireccion;}
        int guardarDir(int a){numeroDireccion = a;}
    } 
    
    Fernandez, Gonzales, perez;
    Fernandez.numerotel= 1034;
    Fernandez.numeroDireccion = 321;

    Gonzales = Fernandez;
    cout << Gonzales.numerotel << endl;
    cout << perez.numerotel << endl;

    perez.guardarDir(156);
    cout << perez.verDir() << endl;

    cin.get();
    return 0;
    
}