#include <iostream>

using namespace std;
/*Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el mayor de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El numero mayor fue: 3
 */

int main()
{
    int numero,Num_mayor=0; /* Definimos la variable numero donde vamos ha almacenar el numero ingresado
                            y en la variable Num_mayor vamos a almacenar el numero mayor ingresado*/

    do{
        cout<< "Ingrese un Numero: "; // se pide un numero por consola
        cin >> numero;              // se almacena el numero ingresado en la variable

        if (Num_mayor == 0){  // esta condicion solo se cumple en la primera iteracio y ahi le damos el valor de numero inicial
            Num_mayor = numero;
        }else if(Num_mayor < numero){ //miramos si el numero ingresado es mayor al numero ya almacenado , se cambia el numero mayor
            Num_mayor = numero; // se almacena el numero que contiene la vriable numero en Num_mayor para seguir con la ejecución
        }

    }while(numero != 0); //si el numero ingresado es igual a cero, se termina la ejcucion del ciclo

    cout << "El valor mayor ingresado fue: "<< Num_mayor <<endl; //se imprime el numero mayor ingresado
    return 0;
}
