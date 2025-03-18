#include <iostream>

using namespace std;

int main(){

    //Alocação estática
    int vetor[4] = {5, 10, 15, 20};

    /*vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;
    vetor[3] = 20;*/

    for(int i = 0; i<4; i++){
        cout << vetor[i]<< endl;
    }

    int x = sizeof(vetor)/sizeof(int); // encontrando quantidade de elementos de um vetor
    cout << x << endl;


    //Alocação dinâmica
    int tamanho;
    cout << "Digite o tamanho do vetor desejado: ";
    cin >> tamanho;
    int* vetor2 = new int [tamanho];

    for(int i = 0; i<tamanho; i++){
        cout << "Digite o elemento: ";
        cin >> vetor2[i];
    }

    for(int i = 0; i<tamanho; i++){
        cout << vetor2[i] << endl;
    }

    

    return 0;
}