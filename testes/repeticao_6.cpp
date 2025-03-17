#include <iostream>

using namespace std;

int main(){
    int numero;
    cout << "Diga um numero inteiro\n";
    cin>> numero;

    int soma = 0;
    //int contador = 1;

    /*while(contador <= numero){
        soma += contador;
        contador++;
    }

    do{ //não recomendado porque o contador é iniciado imediatamente
        soma += contador;
        contador++;
    } while(contador<=numero);*/

    for(int i = 1; i<=numero; i++){
        soma+=i;
    }

    cout << "Soma dos numeros de 0 ate " << numero << " = " << soma << endl;

    return 0;
}