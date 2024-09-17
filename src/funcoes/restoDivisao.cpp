#include <iostream>
using namespace std;

int calculoResto(int num1, int num2){
    while(num1 >= num2){
        num1 = num1 - num2;
    }
    return num1;
}

int main(){
    int num1, num2, resto;
    cout << "Digite um numero: ";
    cin >> num1;
    cout << "Digite outro numero: ";
    cin >> num2;
    resto = calculoResto(num1, num2);
    cout << "Resto de " << num1 << " por " << num2 << " = " << resto;
    return 0;
}