#include <iostream>

using namespace std;

void troca(int* &ponteiro1, int* &ponteiro2){
    int temp;
    temp = *ponteiro1;
    *ponteiro1 = *ponteiro2;
    *ponteiro2 = temp;
}

int main(){
    /*Crie um código que tenha uma função que recebe dois ponteiros e troca o valor de referência entre os dois, mas não troca o endereço*/

    int* ponteiro1 = new int;
    *ponteiro1 = 5;
    int* ponteiro2 = new int;
    *ponteiro2 = 7;

    cout << "Ponteiro 1: " << ponteiro1 << " vale " << *ponteiro1 << endl;
    cout << "Ponteiro 2: " << ponteiro2 << " vale " << *ponteiro2 << endl;

    troca(ponteiro1, ponteiro2);
    cout << "Ponteiro 1: " << ponteiro1 << " vale " << *ponteiro1 << endl;
    cout << "Ponteiro 2: " << ponteiro2 << " vale " << *ponteiro2 << endl;

    return 0;
}