#include <iostream>

using namespace std;
/*
 * Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.
Ej: si se ingresa B se debe imprimir:
Letra convertida: b
y si se ingresa k se debe imprimir:
Letra convertida: K
*/
int main()
{
       char c;      // definimos la variable
       cout << "Ingrese una letra: ";  //pedimos el valor para la variable por consola
       cin >> c;    // almacenamos el dato ingresadado por consola en la variable

       if  (int(c) < 91 && int(c) > 64){       //convertimos con el int(c) la letra en numero y miramos si la letra esta en las mayusculas de la tabla ASCII

           cout << char(c+32)<< endl;  //imprimos char(c+32) que es el numero de la letra + 32 para que sea ya minuscula y la convertimos en letra

       }else if( int(c) > 96 && int(c) < 123){  //convertimos con el int(c) la letra en numero y miramos si la letra esta en las minusculas de la tabla ASCII

           cout << char(c-32)<<endl; //imprimos char(c-32) que es el numero de la letra - 32 para que sea ya mayuscula y la convertimos en letra
       }else{
           cout << "No se ingreso una letra,lo que usted ingreso fue: "<<c<<endl;  //si no cumple las condiciones, no es un letra el valor ingresado
       }

    return 0;
}
