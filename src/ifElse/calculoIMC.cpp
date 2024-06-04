#include <iostream>
using namespace std;

int main (){
    float peso, altura, imc;
    string situacao;
    cout << "Ola, paciente! Vamos calcular seu IMC." << endl;
    cout << "Para isso, informe, por gentileza, seu peso (kg) e sua altura (m), respectivamente: " << endl;
    cin >> peso >> altura;
    imc = peso / (altura * altura);

    if (imc <= 20){
        situacao = "abaixo do peso";
    }else if (imc > 20 && imc <= 25){
        situacao = "peso normal";
    }else if (imc > 25 && imc <= 30){
        situacao = "acima do peso";
    }else if (imc > 30 && imc <= 40){
        situacao = "obeso";
    }else if (imc > 40){
        situacao = "obeso morbido";
    }
    cout << "Sua situacao, de acordo com o calculo do seu imc, eh: " << situacao << endl;
    return 0;
}