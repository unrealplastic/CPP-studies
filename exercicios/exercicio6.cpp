#include <iostream>

using namespace std;

int main(){
    /*Crie um código em que o usuário informa os gastos com alimentação de 5 famílias, calcula a média de gastos e diz de cada família, se seu gasto é abaixo da média, acima da média ou na média*/

    float familias[5];
    float soma = 0;
    float media;

    for(int i = 0; i<5; i++){ //pede os dados do usuário
        cout << "Quanto a familia gastou? " << endl;
        cin >> familias[i];
    }

    for(int i = 0; i<5; i++){ //soma os elementos do vetor
        soma+=familias[i];
    }

    media = soma/5; //calcula a média
    cout << media<< endl;

    for(int i = 0; i<5; i++){ //verifica se os gastos das famílias estão abaixo, acima ou na média
        if(familias[i]<media){
            cout << "Familia " << i+1 << " esta abaixo da media" << endl;
        } else if (familias[i] == media){
            cout << "Familia " << i+1 << " esta na media" << endl;
        } else {
            cout << "Familia " << i+1 << " esta acima da media" << endl;
        }
    }

    return 0;
}