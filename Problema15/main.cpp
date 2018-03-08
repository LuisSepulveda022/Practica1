#include <iostream>

using namespace std;

int main(){

    int  M[100][100],a, b, c, x, i, j, num;
    do{
        cout << "Ingrese el tamaño de la matriz: ";
        cin >> num;
        a = num % 2;
    }while( num < 0 || num >= 200 || a==0);

    x = 1;
    a = (num - 1)/2;
    b =a;
    c= a;
    do{
        j = c;
        for(i = b; i >= c-1; i--){
            M[i][j]= x;
            x ++;
        }
        i++;
        for(j = i+2 ; j <= b + 1; j++){
            M[i][j]= x;
            x ++;
        }
        j--;
        for(i = c; i <= b+1; i++){
            M[i][j]= x;
            x ++;
        }
        i--;
        for(j = b; j >= c; j--){
            M[i][j]= x;
            x ++;
        }
        b++;
        c--;
    }while( x <= num*num);
    for(i = 0; i < num; i++){
        for( j = 0; j < num; j++){
            if( M[i][j]< 10){
                cout << " "<<M[i][j]<<" ";
            }else{
                cout << M[i][j]<<" ";
                }
        }
        cout << endl;
    }
    int suma1=0,suma2=0,z=num-1;

    for(i=0;i<num;i++){
        suma1 += M[i][i];
    }
    for(i=0;i<num;i++){
        suma2 += M[i][z];
        z--;
    }
    cout << suma1 << " " <<suma2<<endl;
    cout << suma1+suma2 <<endl;
}
