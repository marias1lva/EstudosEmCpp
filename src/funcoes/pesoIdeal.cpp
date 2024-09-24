#include <iostream>
using namespace std;

float pesoIdeal(float altura, char sexo){
    if(sexo == 'M' || sexo == 'm'){
        return 72.7 * altura - 58;
    }else if(sexo == 'F' || sexo == 'f'){
        return 62.1 * altura - 44.7;
    }else{
        cout << "Sexo invalido.";
        return -1;
    }
}

int main(){
    float altura, resultado;
    char sexo;
    cout << "Informe seu sexo: ";
    cin >> sexo;
    cout << "Informe sua altura em metros: ";
    cin >> altura;
    resultado = pesoIdeal(altura, sexo);
    if(resultado != -1){ // return que indica erro
        cout << "Seu peso ideal eh: " << resultado << "kg.";
    }
    return 0;
}