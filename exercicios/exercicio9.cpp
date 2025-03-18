#include <iostream>

using namespace std;

int main(){
    /*Crie um código utilizando apenas ponteiros em que o usuário informa a idade de duas pessoas e o algoritmo informa a média destas duas idades*/

    int* idade1 = new int;
    int* idade2 = new int;
    cout << "Qual a idade da primeira pessoa?\n";
    cin >> *idade1;
    cout << "Qual a idade da segunda pessoa?\n";
    cin >> *idade2;

    float* media = new float;
    *media = ((float)*idade1 + (float)*idade2)/2;
    cout << "Media das idades: " << *media;



    return 0;
}