#include <iostream>

#include <cstdlib>
#include <time.h>
using namespace std;

/*Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B es mayor o menor
que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa le dirá
el número de intentos que tardo el usuario en adivinar el número.
Nota: para generar el número aleatorio use la función rand() de la librería <cstdlib>, recuerde
convertirlo al rango (0,100).*/
int main()
{
    //int fin_intervalo = 100;

      // Generamos una semilla
      srand( time( NULL ) );

      int A = rand() % 100; // Generamos el numero para adivinar
      int B,contador=0;  // creamos el contador de los intentos, y la variable para almacenar el numero
      do{
          cout << "Ingrese un Numero: ";
          cin >> B;
          contador ++;    // contador aumenta un intento

          if(A > B){    // miramos si el numero ingresado es menor al numero a adivinar
                  cout << "El numero que ingreso es menor "<< endl;

          }else if(A < B){  //miramos si el numero ingresado es mayor al numero a adivinar
                  cout << "El numero que ingreso es mayor" << endl;
         }
      }while(A != B); // si no se cumple la condición, es porque ya adivinamos el numero

      cout << "Usted tardo " << contador<< " intentos para adivinar el numero"<< endl; // mostramos los intentos realizados
    return 0;
}
