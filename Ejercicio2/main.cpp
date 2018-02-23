#include <iostream>

using namespace std;
/* Función main
 *
 */
int main()
{
    int numero;
    cout << "Escriba un número: ";
    cin >> numero; //Se pide el número por consola
    cout <<"El número que escribio es el "<< numero << endl;
    if(numero%2 == 0){ //Se mira si el residuo de dividirlo por dos es 0
        cout << "El número que escribio es par"<< endl;

    }
    else{
        cout<<"El numero es impar"<<endl;
    }
    return 0;
}
