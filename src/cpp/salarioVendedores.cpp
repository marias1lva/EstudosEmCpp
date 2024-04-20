#include <iostream>
using namespace std;

int main (){
    float salarioMin, carros, comissaoCarros, vendas, porcVendas, salarioTotal;
    string opc;
    cout << "Ola, funcionario da PicaPau Ltda. Deseja calcular seu salario do mes? (Sim/Nao) " << endl;
    cin >> opc;

    if (opc == "sim" || opc == "Sim" || opc == "SIM"){
        cout << "Digite o salario minimo: " << endl;
        cin >> salarioMin;
        cout << "Digite quantos carros voce vendeu: " << endl;
        cin >> carros;
        cout << "Digite o valor total de vendas em reais: " << endl;
        cin >> vendas;
        comissaoCarros = 50 * carros;
        porcVendas = (5 * vendas) / 100;
        salarioTotal = 2 * salarioMin + comissaoCarros + porcVendas;
        cout << "Seu salario total desse mes eh R$" << salarioTotal << endl;
    }else{
        cout << "Otimo! Ate a proxima! " << endl;
    }

    return 0; 
}