#include <iostream>
using namespace std;

int main(){
    int valorSaque, notas100, notas50, notas20, notas10, notas1;
    cout << "Informe o valor do saque: ";
    cin >> valorSaque;
    notas100 = valorSaque / 100;
    valorSaque = valorSaque % 100;
    notas50 = valorSaque / 50;
    valorSaque = valorSaque % 50;
    notas20 = valorSaque / 20;
    valorSaque = valorSaque % 20;
    notas10 = valorSaque / 10;
    valorSaque = valorSaque % 10;
    notas1 = valorSaque / 1;
    valorSaque = valorSaque % 1;
    cout << "===================================" << endl;
    cout << "NOTAS DE R$100: " << notas100 << endl;
    cout << "NOTAS DE R$50: " << notas50 << endl;
    cout << "NOTAS DE R$20: " << notas20 << endl;
    cout << "NOTAS DE R$10: " << notas10 << endl;
    cout << "NOTAS DE R$1: " << notas1 << endl;
    return 0;
}