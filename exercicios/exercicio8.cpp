#include <iostream>

using namespace std;

int main(){
    /*Crie um código em que o usuário informa o tamanho de um vetor e seus elementos. O algoritmo deve imprimir este vetor e logo após, perguntar ao usuário se ele quer imprimir outro vetor. Utilize o delete após a impressão do vetor*/

    int tamanho;
    char resp = 'n';

    do{
        cout << "Digite o tamanho do vetor: ";
        cin >> tamanho;
        float* vetor = new float[tamanho];

        for(int i = 0; i<tamanho; i++){
            cout << "Digite o elemento " << i+1 << " do vetor" << endl;
            cin >> vetor[i];
        }
        cout << "Vetor inserido: ";
        for(int i = 0; i<tamanho; i++){
            cout << "[" << vetor[i] << "]";
        }
        cout << endl;

        cout << "Deseja inserir outro vetor? ";
        cin >> resp;

        delete [] vetor;
        cout << "Vetor antigo deletado\n";

    } while (resp!='n');

    return 0;
}