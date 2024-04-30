#include <iostream>
using namespace std;

int main (){
    float lado1, lado2, lado3;
    cout << "Informe os lados do triangulo: " << endl;
    cin >> lado1 >> lado2 >> lado3;
    if(lado1 == lado2 && lado2 == lado3){
        cout << "Tres lados iguais = TRIANGULO EQUILATERO.";
    }else if(lado1 == lado2 && lado2 != lado3 || lado1 == lado3 && lado3 != lado2){
        cout << "Dois lados iguais = TRIANGULO ISOCELES.";
    }else if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1){
        cout << "Nenhum lado igual = TRIANGULO ESCALENO.";
    }
    return 0;
}