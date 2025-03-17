#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a nota 1\n";
    cin >> nota1;
    cout << "informe a nota 2\n";
    cin >> nota2;

    float media = (nota1+nota2)/2;
    cout << "Media = " << media << endl;

    float frequencia;
    cout<< "Qual a frequencia do aluno?\n";
    cin >> frequencia;

    if(media<5 || frequencia <75){
        cout << "Aluno reprovado\n";
    } else {
        cout<< "Aluno aprovado\n";
    }

    return 0;
}