#include <iostream>

using namespace std;
/*Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir posiblemente año bisiesto.
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una  Fecha invalida.
27/4 es una  Fecha valida.
29/2 es valida en bisiesto.*/

int main()
{
    int mes,dia;                    //definimos las variables de mes y dia para almacenar un dato pedido por consola
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout <<"Ingrese un dia respectivo de ese mes: ";
    cin >> dia;

    switch (mes) {    // utilizamos el condicional swith, para asi poder trabajar en todos los casos,que serian
                      // los respectivos meses del año,con su condición respectiva de rango(primer dia del mes,hasta ultimo dia del mes)
                      // dependiendo del valor de la variable mes se entra en un case respectivo
        case 1 :
            if (dia<=31 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;  //si se encunetra en el rango definido por mes, es fecha valida
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl; //si no se encuentra en el rango fecha invalida
            }
            break;
        case 2 :
            if (dia<=28 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;

            }else if(dia == 29){ //estudiamos un caso especial ya que el mes 2 puede incluir al 29 en año bisiesto
                cout << dia <<"/"<< mes <<" Fecha valida en bisiesto"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;
        case 3 :
            if (dia<=31 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;
        case 4 :
            if (dia<=30 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;
        case 5 :
            if (dia<=31 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;
        case 6 :
            if (dia<=30 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;
        case 7 :
            if (dia<=31 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;
        case 8 :
            if (dia<=31 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;
        case 9 :
            if (dia<=30 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;
        case 10 :
            if (dia<=31 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;
        case 11:
            if (dia<=30 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;
        case 12 :
            if (dia<=31 && dia>0){
                cout << dia <<"/"<< mes <<" Fecha valida"<<endl;
            }else{
                cout << dia <<"/"<< mes <<" Fecha invalida"<<endl;
            }
            break;

        default:  // si el valor de la variable mes no se encuentra en ningun case, se sabe que el mes ingresado no es valido
            cout<<"Mes invalido"<<endl;
            break;
    }
    return 0;
}
