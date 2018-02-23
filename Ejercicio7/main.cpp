#include <iostream>

using namespace std;

/*Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15*/

int main()
{
    int numero,i,suma=0; // en la variable numero almacenamos el numero pedido, i es el contador del ciclo for y en suma almacenamos la suma de los numeros.
    cout << "Ingrese el Número hasta donde va la suma: " ;
    cin >> numero; // Se pide en consola el numero para ejecutar la suma
    //cout << i << endl;
    for(i=0; i <= numero ; i++ ){ // en cada iteración del ciclo que comienza en 0 se suma un numero hasta llegar al numero que se ingreso por consola
        suma +=i;
        //cout << suma << endl;

    }
    cout << "La suma es: "<<suma<<endl; // se muestra el resultado de la suma
    return 0;
}
