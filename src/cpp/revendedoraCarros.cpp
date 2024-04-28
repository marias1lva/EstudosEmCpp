#include <iostream>
using namespace std;

int main(){
    float carros, totalVendas, salarioFixo, valorPorCarro, salarioTotal, porcentagem;
    cout << "Vamos calcular seu salario desse mes!" << endl;
    cout << "Numero de carros vendidos: ";
    cin >> carros;
    cout << "Comissao por carro vendido: ";
    cin >> valorPorCarro;
    cout << "Valor total de vendas: ";
    cin >> totalVendas;
    cout << "Salario fixo: ";
    cin >> salarioFixo;
    porcentagem = (5 * totalVendas) / 100;
    salarioTotal = salarioFixo + (valorPorCarro * carros) + porcentagem;
    cout << "=================================================" << endl;
    cout << "SALARIO TOTAL: R$" << salarioTotal << endl;
    return 0;
}