#include <iostream>

using namespace std;
/*
Escriba un programa que pida un número N e imprima en pantalla su tabla de mul-
tiplicar hasta 10xN.
*/
int main()
{
    int N; // Se define la variable N como tipo entero
    cout << "Ingrese un numero: "; // Se pide un numero por consola
    cin>>N;                        // Se alamcena el dato en la variable N
    cout << endl;
    for (int i=1;i<=10;i++){        // el ciclo va hasta 10 y aumenta de 1 en 1, que corresponde a una tabla hasta el 10
        cout << N << "X" << i << "=" << N*i <<endl; //Se imprime el dato ingresado , el valor de i en el momento y la multiplicacion correspondiente de N*i
    }
    return 0;
}
