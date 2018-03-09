#include <iostream>

using namespace std;

int main(){
/*Definimos el rangon de la matriz, a,b y c las utilizamos para ir manipulando las posiciones de la matriz;
 x va ser la variable en la cual vamos ha ir aumentando los valores de la matriz; i y j van hacer las variables
 correspondientes de los ciclos for
*/
    int  M[100][100],a, b, c, x, i, j, num;
    do{
        cout << "Ingrese el tamaño de la matriz (menor a 100): ";
        cin >> num;
        a = num % 2;
    }while( num < 0 || num > 100 || a==0); //si el numero ingresado es diferente al rango establecido o igual a cero,
                                           // o es un numero impar no saliremos del ciclo si paso alguna deestas situaciones

    x = 1;
    a = (num - 1)/2;    // a va hacer el centro de la matriz
    b = a;
    c = a;
    do{
        //En este ciclo llenamos la matriz de orden nxn

        j = c;
        for(i = b; i >= c-1; i--){
            M[i][j] = x;
            x ++;
        }
        i++;
        for(j = i+2 ; j <= b + 1; j++){
            M[i][j] = x;
            x ++;
        }
        j--;
        for(i = c; i <= b+1; i++){
            M[i][j] = x;
            x ++;
        }
        i--;
        for(j = b; j >= c; j--){
            M[i][j] = x;
            x ++;
        }
        b++;
        c--;
    }while( x <= num*num); // el ciclo se rompe si el valor de x que va aumentando sobrepasa numxnum
    /*for(i = 0; i < num; i++){
        for( j = 0; j < num; j++){
            if( M[i][j]< 10){
                cout << " "<<M[i][j]<<" ";
            }else{
                cout << M[i][j]<<" ";
                }
        }
        cout << endl;
    }*/
    int suma1=0,suma2=0,z=num-1;    //definimos las variables donde almacenaremos las sumas de las diagonales
                                    //en z almacenamos el valor de num-1, para poder manipular la segunda diagonal

    for(i=0;i<num;i++){     // con este ciclo sumamos la primera diagonal
        suma1 += M[i][i];
    }

    for(i=0;i<num;i++){    // con este ciclo sumamos la segunda diagonal
        suma2 += M[i][z];
        z--;
    }
    cout << "En una espiral de "<<num<<"x"<<num<< ", la suma es: " <<suma1+suma2<<endl;

}
