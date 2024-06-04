#include <iostream>
using namespace std;

int main () {
    float salAtual, reaj, porC, salNovo;
    cout << "Informe o salario atual: ";
    cin >> salAtual;
    cout << "Informe de quantos % sera o reajuste: ";
    cin >> porC;
    reaj = (salAtual * porC) / 100;
    salNovo = salAtual + reaj;
    cout << "O salario com reajuste sera R$" << salNovo << endl;
    return 0;
}