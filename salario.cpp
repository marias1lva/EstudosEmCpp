#include <iostream>
using namespace std;

int main () {
    float salAtual, reaj, porC, salNovo;
    cout << "Informe o salario atual: ";
    cin >> salAtual;
    cout << "Informe de quantos por cento sera o reajuste: ";
    cin >> reaj;
    porC = salAtual * reaj / 100;
    salNovo = salAtual + porC;
    cout << "O salario com reajuste sera " << "R$ " << salNovo << endl;
    return 0;
}