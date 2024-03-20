#include <iostream>
using namespace std;

int main () {
    int num1, num2, soma, sub, div, multi;
    cout << "Digite um numero: ";
    cin >> num1;
    cout << "Digite outro numero: ";
    cin >> num2;
    soma = num1 + num2;
    sub = num1 - num2;
    div = num1/num2;
    multi = num1 * num2;
    cout << "A soma de " << num1 << " e " << num2 << " é: " << soma << endl;
    cout << "A subtracao de " << num1 << " e " << num2 << " é: " << sub << endl;
    cout << "A divisao de " << num1 << " e " << num2 << " é: " << div << endl;
    cout << "A multiplicacao de " << num1 << " e " << num2 << " é: " << multi << endl;
    return 0;
}