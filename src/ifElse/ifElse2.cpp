#include <iostream>
using namespace std;

int main(){
    float nota1, nota2, nota3, media;
    cout << "PRIMEIRA NOTA: ";
    cin >> nota1;
    cout << "SEGUNDA NOTA: ";
    cin >> nota2;
    cout << "TERCEIRA NOTA: ";
    cin >> nota3;
    media = (nota1 + nota2 + nota3) / 3;
    if (media >= 6){
        cout << "APROVADO!";
    }else{
        cout << "REPROVADO!";
    }
    return 0;
}