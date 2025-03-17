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
    cout << variavel2;

    int* ponteiro2;
    ponteiro2 = NULL;
    cout << *ponteiro2;


    return 0;
}