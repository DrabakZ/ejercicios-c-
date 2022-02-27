#define sumar(a,b) a+b
#define multiplicar(a,b) a*b
#define dividir(a,b) a/b



#include <iostream>


int numero1 = 2;
int numero2 = 4;

int suma;
int mult;
int dividid;


using namespace std;
int main()
{
    suma = sumar (numero1, numero2);
    mult = multiplicar (numero1, numero2);
    dividid = dividir (numero2, numero1);


    cout << "la suma es:  " << suma << endl;
    cout << "la multiplicacion es: " << mult << endl;
    cout << "el cociente es:  " << dividid << endl;

    cin.get ();
    return 0;
}