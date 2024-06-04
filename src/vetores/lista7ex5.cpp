#include <iostream>
using namespace std;

int main(){
    int i;
    float vetorSalario[5], somaSalarios = 0, media;
    string vetorNome[5];
    for(i = 0; i < 5; i++){
        cout << "Insira seu nome: ";
        cin >> vetorNome[i];
        cout << "Insira seu salario: R$";
        cin >> vetorSalario[i];
        somaSalarios = somaSalarios + vetorSalario[i];
    }
    media = somaSalarios / 5;
    cout << endl << "Media dos salarios: " << media << endl;
    cout << endl << "Pessoas com salario acima da media: " << endl;
    for(i = 0; i < 5; i++){
        if(vetorSalario[i] > media){
            cout << vetorNome[i] << endl;
        }
    }
    return 0;
}