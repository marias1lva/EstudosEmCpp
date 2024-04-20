#include <iostream>
using namespace std;

int main (){
    float valorVenda, comissao;
    string nome;
    cout << "Insira seu nome: ";
    cin >> nome;
    cout << "Insira o valor da venda: ";
    cin >> valorVenda;

    if (valorVenda > 50000) {
        comissao = (12 * valorVenda) / 100;
    } else if (valorVenda >= 30000 || valorVenda <= 50000) {
        comissao = (9.5 * valorVenda) / 100;
    } else {
        comissao = (7 * valorVenda) / 100;
    }
    cout << "Corretor: " << nome << endl << "Valor da venda: " << valorVenda << endl << "Comissao: " << comissao << endl;
    return 0;
}