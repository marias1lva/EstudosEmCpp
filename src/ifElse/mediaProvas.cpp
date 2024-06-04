#include <iostream>
using namespace std;

int main (){
    float nota1, nota2, nota3, media;
    cout << "Informe a primeira nota: ";
    cin >> nota1;
    cout << "Informe a segunda nota: ";
    cin >> nota2;
    cout << "Informe a terceira nota: ";
    cin >> nota3;
    media = (nota1 + nota2 + nota3) / 3;
    cout << "Sua media foi: " << media << endl;
    if (media >= 6){
        cout << "Aprovado!" << endl;
    }else{
        cout << "Reprovado!" << endl;
    }
    return 0;
}