#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a = 5, b = 2;

    //soma
    int soma = a+b;
    //cout << "Soma = " << a+b << endl;
    cout << "Soma = " << soma << endl;

    //subtração
    int subtrai = a-b;
    cout << "Subtracao = " << subtrai << endl;

    //multiplicação
    int multiplica = a*b;
    cout << "Multiplicacao = " << multiplica << endl;
    
    //divisão
    int quociente = a/b;
    cout << "Quociente da divisao = " << quociente << endl;

    int resto = a%b;
    cout << "Resto da divisao = " << resto << endl;

    float divisao = (float)a/(float)b;
    cout << "Divisao = " << divisao << endl;

    //potência
    float potencia = pow(a,b); //a^b
    cout << "Potencia = " << potencia << endl;

    //incremento e decremento
    cout << "a antigo: " << a << endl;
    a+=2;
    cout << "a novo: " << a << endl;

    cout << "a antigo: " << a << endl;
    a--;
    cout << "a novo: " << a << endl;

    cout << "a antigo: " << a << endl;
    a*=2;
    cout << "a novo: " << a << endl;








    return 0;
}