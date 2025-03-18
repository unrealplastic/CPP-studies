#include <iostream>

using namespace std;

int main(){
    /*Crie um código em que o usuário informa a dimensão de uma matriz e os elementos de duas matrizes e o algoritmo mostra a soma entre elas*/

    int linhas, colunas;
    cout << "Qual a quantidade de linhas: \n";
    cin >> linhas;
    cout << "Qual a quantidade de colunas: \n";
    cin >> colunas;

    float matriz1[linhas][colunas], matriz2[linhas][colunas];

    //matriz 1
    cout << "Quais os elementos da primeira matriz?\n";

    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            cout << "Digite o elemento da linha " << i+1 << " e coluna " << j+1<< endl;
            cin >> matriz1[i][j];
        }
    }

    //matriz 2
    cout << "Quais os elementos da segunda matriz?\n";

    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            cout << "Digite o elemento da linha " << i+1 << " e coluna " << j+1 << endl;
            cin >> matriz2[i][j];
        }
    }

    //soma
    float soma[linhas][colunas];
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }


    //soma
    cout << "A soma entre as duas matrizes é: " << endl;
    for(int i = 0; i<linhas; i++){
        for(int j =0; j<colunas; j++){
            cout << "[" << soma[i][j] << "]";
        }
        cout << endl;
    }
    return 0;
}