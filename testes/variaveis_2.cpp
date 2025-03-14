#include <iostream>

using namespace std;

int main(){
    int inteiro;
    inteiro = 5;
    cout << inteiro << endl;

    float real;
    real = 5.2e99; //valor maior do que o float é capaz de representar, então resulta em infinito no console
    cout << real << endl;

    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;

    bool booleano;
    booleano = true; //imprime 1 
    cout << booleano << endl;

    char letra;
    letra = 'a'; //utilizamos aspas simples para variaveis do tipo char
    cout << letra << endl;

    string palavra;
    palavra = "bola"; //utilizamos aspas duplas para variáveis do tipo string
    cout << palavra << endl;

    int idade;
    cout << "Qual sua idade?" << endl;
    cin >> idade;
    cout << "Voce tem " << idade << " anos" << endl;

    return 0;
}