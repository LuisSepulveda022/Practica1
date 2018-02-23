#include <iostream>

using namespace std;
/*  Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
    Ej: si se ingresan 7 y 3 se debe imprimir:
    El mayor es 7
 */

int main()
{

    int numero1,numero2;
    cout << "Ingrese el primer Número: ";
    cin >> numero1; //Pedimos por consola el número 1
    cout << "Ingrese el segundo Número: ";
    cin >> numero2; //Pedimos por consola el número 2

    if(numero1>numero2){ // Evaluamos si el número 1 es mayor a el número 2
        cout<<"El mayor es el Número 1: "<<numero1<< endl;

    }
    else{
        cout<<"El mayor es el Número 2: "<<numero2<< endl;
    }
    return 0;
}
