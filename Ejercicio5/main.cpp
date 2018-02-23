#include <iostream>

using namespace std;
/*  Escriba un programa que pida dos números A y B e imprima en pantalla la división
    A/B con redondeo.
    Ej: si se ingresan 8 y 3 se debe imprimir:
    8/3=3
    Si se ingresan 7 y 3 se debe imprimir:
    7/3=2
*/
int main()
{
    float numero1,numero2; //Definimos las varibles como float ya que necesitamos que el resultado sean decimales
    cout << "Ingrese el primer Número: ";
    cin >> numero1; //Pedimos por consola el número 1
    cout << "Ingrese el segundo Número: ";
    cin >> numero2; //Pedimos por consola el número 2
    float division = numero1 / numero2 ;  // Almacenamos en divison el resultado decimal de la división
    float aproximacion = int(division)+0.5; //El resultado de la division lo convertimos entero y le sumamos 0.5 para asi tener un valor base para ajustar la aproximación

    if (division >= aproximacion ){ //miramos si el resultado de la divison es mayor que la base de aproximación
        cout << "El resultado es: "<< int(division+1)<< endl; // se imprime el resultado de la division entero + 1
    }
    else{
        cout<<"El resultado es: "<< int(division)<< endl; // se imprime el resultado de la division en entero
    }
    //cout << "La aproximación es: "<< division <<"hay " << aproximacion << endl;
    return 0;
}
