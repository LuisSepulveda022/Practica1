#include <iostream>

using namespace std;
/*Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N
Ej: si se ingresa 1234 se debe imprimir:
1234 tiene 4 digitos.
*/
int main()
{
    int contador =0 ,N;// definimos el N donde almacenamos el numero y contador para contar los digitos
    cout << " ingresse un numero : ";
    cin >> N;
    while( N>=1 ) { //si el numero es mayor o igual a 1 el ciclo se ejecuta

    N=N/10;    // cambiamos el valor de la variable N, a la cual le almacenamos el resultado de N/10
    contador=contador+1; //el contador contara cuantos digitos tiene un numero segun las ietraciones en el ciclo
    }
    cout << "El Numero de digitos es: "<< contador << endl;
}
