#include <iostream>
using namespace std;

int main(){
    string nome, nomeMaisPesada, nomeMaisAlta;
    int i = 1;
    float peso, pesoMais = 0, altura, alturaMais = 0;
    while(i <= 10){
        cout << "Digite o nome da " << i << " pessoa: ";
        cin >> nome;
        cout << "Informe o peso (kg) da " << i << " pessoa: ";
        cin >> peso;
        cout << "Informe a altura (m) da " << i << " pessoa: ";
        cin >> altura;
        if (altura > alturaMais){
            alturaMais = altura;
            nomeMaisAlta = nome;
        }
        if (peso > pesoMais){
            pesoMais = peso;
            nomeMaisPesada = nome;
        }
        i++;
    }
    cout << "A pessoa mais alta eh " << nomeMaisAlta << ", com altura de " << alturaMais << " metros." << endl;
    cout << "A pessoa mais pesada eh " << nomeMaisPesada << ", com peso de " << pesoMais << "kg." << endl; 
    return 0;
}