#include <iostream>
using namespace std;

int main (){
    float salarioFixo, vendas, comissao, salarioTotal;
    
    cout << "Ola, vendedor! Vamos calcular seu salario total deste mes!" << endl;
    cout << "Informe, por gentileza, seu salario fixo e o total de suas vendas: " << endl;
    cin >> salarioFixo >> vendas;
    
    if (vendas <= 1500){
        comissao = (3 * vendas) / 100;
        salarioTotal = salarioFixo + comissao;
    }else if(vendas > 1500){
        comissao = (5 * vendas) / 100;
        salarioTotal = salarioFixo + comissao;
    }
    cout << "Seu salario total deste mes eh R$" << salarioTotal << endl;
    return 0;
}