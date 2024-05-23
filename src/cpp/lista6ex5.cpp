#include <iostream>
using namespace std;

int main(){
    int i, iMulheres = 0, iHomens = 0; //contador, contador de mulheres, contador de homens;
    float altura, mediaTotal, somaAlturas = 0, somaHomens = 0, somaMulheres = 0, mediaMulheres, mediaHomens;
    char sexo;
    for(i = 1; i <= 10; i++){
        cout << "Informe seu sexo(F/M): ";
        cin >> sexo;
        cout << "Informe sua altura(m): ";
        cin >> altura;
        somaAlturas += altura;
        if(sexo == 'F' || sexo == 'f'){
            somaMulheres += altura;
            iMulheres++;
        }else if(sexo == 'M' || sexo == 'm'){
            somaHomens += altura;
            iHomens++;
        }
    }
    mediaTotal = somaAlturas / 10;
    mediaMulheres = somaMulheres / iMulheres;
    mediaHomens = somaHomens / iHomens;
    cout << "Media da altura de todas as pessoas: " << mediaTotal << "m. " << endl;
    cout << "Media da altura das mulheres: " << mediaMulheres << "m." << endl;
    cout << "Media da altura dos homens: " << mediaHomens << "m." << endl;
    return 0;
}