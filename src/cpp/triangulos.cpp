#include <iostream>
using namespace std;

int main (){
    float lado1, lado2, lado3;
    cout << "Informe os lados do triangulo: " << endl;
    cin >> lado1 >> lado2 >> lado3;

    if (lado1 == lado2 && lado2 == lado3){
        cout << "Esse triangulo eh equilatero." << endl;
    }else if (lado1 == lado2 && lado2 != lado3){
        cout << "Esse triangulo eh isosceles." << endl;
    }else if (lado1 != lado2 && lado2 != lado3){
        cout << "Esse triangulo eh escaleno." << endl;
    }
    return 0;
}