#include <iostream>

using namespace std;
/*En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10*/
int main()
{
    int anterior=0,fibonacci=1,anterior2,suma=0,n;      //definimos las variables para producir la serie fibonacci,
                                                        //y para la suma de los numero pares y para el numero n.

    cout << "Ingrese un numero: ";
    cin >> n;
    while(fibonacci<n){     //el ciclo seguira mientras que el numero de la serie fibonacci sea menor al numero ingresado


        if (fibonacci % 2 == 0){    // si el numero de la serie fibonacci es par lo sumamos
            suma = suma+fibonacci;

        }
        anterior2 = anterior;   // almacenamos el numero anterior en la variable anterior2
        anterior = fibonacci;   // en la variable anterior almacenamos el valor que tiene el numero fibonacci
        fibonacci = anterior+anterior2;  // almacenamos la suma de los numero anteriores en fibonacci
    }
    cout << "El resultado de la suma es: "<< suma <<endl;
}
