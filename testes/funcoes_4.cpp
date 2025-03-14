#include <iostream>

#define apagar cout << "Estou apagando" << endl;
#define pi 3.14;


using namespace std;

int t = 2; //variável global

//função sem entrada e sem retorno
void escrever(){
    cout << "Estou escrevendo" << endl;
}

//função com entrada e saída
int somar(int x, int y){ //somar(int &x, int &y) podemos usar & para que as modificações feitas na função possam ser usada depois

    //x = 30;

    /*int t;
    t = 1; variável local*/

    int soma;
    soma = x+y;
    
    return soma;
}

int main(){
    escrever();

    int a=5, b=4;
    int s = somar(a,b);
    cout << "Soma = " << s << endl;

    cout << "T = " << t << endl;

    cout<< "PI = " << pi;
    apagar;

    return 0;
}