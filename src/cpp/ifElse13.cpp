#include <iostream>
using namespace std;

int main(){
    float peso, altura, IMC;
    cout << "Vamos calcular seu IMC." << endl;
    cout << "Digite seu PESO em kg: ";
    cin >> peso;
    cout << "Digite sua ALTURA em m: ";
    cin >> altura;
    IMC = peso / (altura * altura);
    if(IMC <= 20){
        cout << "SITUACAO = ABAIXO DO PESO.";
    }else if(IMC > 20 && IMC <= 25){
        cout << "SITUACAO = PESO NORMAL.";
    }else if(IMC > 25 && IMC <= 30){
        cout << "SITUACAO = ACIMA DO PESO.";
    }else if(IMC > 30 && IMC <= 40){
        cout << "SITUACAO = OBESO.";
    }else{
        cout << "SITUACAO = OBESO MORBIDO.";
    }
    return 0;
}