#include <iostream>

using namespace std;

int main()
{
    int numero,suma=1;
    do{
        cout <<"Ingrese un numero impar"<<endl;
        cin >> numero;
    }while(numero % 2 == 0);

    //cout << numero <<endl;
    int matriz[numero][numero]={};

    matriz[numero/2][numero/2]=suma;
    for (int i=0; )

    cout << matriz[(numero/2)][(numero/2)]<<endl;
    return 0;
}
