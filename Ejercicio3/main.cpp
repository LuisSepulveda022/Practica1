#include <iostream>

using namespace std;
/*  Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
    Ej: si se ingresan 7 y 3 se debe imprimir:
    El mayor es 7
 */

int main()
{

    int numero1,numero2;
    cout << "Ingrese el primer Numero: ";
    cin >> numero1; //Pedimos por consola el número 1
    cout << "Ingrese el segundo Numero: ";
    cin >> numero2; //Pedimos por consola el número 2

    if(numero1>numero2){ // Evaluamos si el número 1 es mayor a el número 2
        cout<<"El mayor es el Numero 1: "<<numero1<< endl;

    }
    else if(numero2>numero1){
        cout<<"El mayor es el Numero 2: "<<numero2<< endl;
    }else{
        cout<<"Los numeros ingresados son iguales."<<endl; // si ninguna de las dos condiciones se cumple es porque los numeros son iguales
    }
    return 0;
}
