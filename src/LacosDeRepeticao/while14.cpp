#include <iostream>
using namespace std;

int main(){
    string nome, nomeMaisPesada, nomeMaisAlta;
    float peso, altura, pesoMaisPesado = 0, alturaMaisAlta = 0;
    int i = 1;
    while(i <= 10){
        cout << "Digite seu nome: ";
        cin >> nome;
        cout << "Digite seu peso (kg): ";
        cin >> peso;
        cout << "Digite sua altura (m): ";
        cin >> altura;
        if(peso > pesoMaisPesado){
            pesoMaisPesado = peso;
            nomeMaisPesada = nome;
        }
        if(altura > alturaMaisAlta){
            alturaMaisAlta = altura;
            nomeMaisAlta = nome;
        }
        i++;
    }
    cout << "A pessoa mais pesada eh " << nomeMaisPesada << " com " << pesoMaisPesado << "kg." << endl;
    cout << "A pessoa mais alta eh " << nomeMaisAlta << " com " << alturaMaisAlta << "m." << endl;
    return 0;
}