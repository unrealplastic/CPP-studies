#include <iostream>
#include <cstddef>

using namespace std;

int main(){
    int variavel1;
    int* ponteiro1; //tipo da variável que será acessada

    variavel1 = 5;
    ponteiro1 = &variavel1;

    cout << "Variavel = " << variavel1 << endl;
    cout << "Ponteiro = " << ponteiro1 << endl;
    cout << "Acesso de valor com ponteiro = " << *ponteiro1 << endl;

    int variavel2 = *ponteiro1;
    cout << variavel2 << endl;

    /*int* ponteiro2;
    ponteiro2 = NULL;
    cout << *ponteiro2;*/

    int* ponteiro3 = new int; //reserva um espaço de memória, mesmo que não tenha uma variável naquele espaço
    *ponteiro3 = 35;
    delete ponteiro3; //usado para evitar vazamento de memória
    ponteiro3 = ponteiro1;
    cout << ponteiro3;


    return 0;
}