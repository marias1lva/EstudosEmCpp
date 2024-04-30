#include <iostream>
using namespace std;

int main(){
    float salarioFixo, valorVendas, vendas3, vendas5, salarioTotal;
    cout << "Informe o salario fixo: ";
    cin >> salarioFixo;
    cout << "Informe o valor total de vendas: ";
    cin >> valorVendas;
    if(valorVendas <= 1500){
        vendas3 = (3 * valorVendas) / 100;
        salarioTotal = salarioFixo + vendas3;
    }else{
        vendas5 = (5 * valorVendas) / 100;
        salarioTotal = salarioFixo + vendas5;
    }
    cout << "===============================" << endl;
    cout << "SALARIO TOTAL = R$" << salarioTotal << endl;
    return 0;
}