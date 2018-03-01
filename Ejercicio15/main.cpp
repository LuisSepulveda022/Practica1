#include <iostream>

using namespace std;

/*Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla la suma de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6
 */
int main()
{

    int sumatorio=0,numero; // Se define las variable para almacenar la suma de los numeros y el numero ingresado

    do{  // Utilizamos un ciclo do while , para que itere una vez en el ciclo por lo menos
       cout << "Ingrese un numero: "; // se pide que ingresen un numero por consola
       cin >> numero;                 // almacenamos el valor ingresado en lavariable numero
       sumatorio +=numero;            // Le sumamos a sumatoria el numero ingresado

    }while(numero != 0);  //si el numero es igual a cero deja de iterar
    cout <<"La suma de los numeros fue: "<< sumatorio<< endl;
    return 0;
}
