#include <iostream>
using namespace std;

int main (){
    float custoFabrica, comissao, imposto, custoConsumidor;
    cout << "Informe o custo de fabrica: ";
    cin >> custoFabrica;
    
    if (custoFabrica <= 12000){
        comissao = (5 * custoFabrica) / 100;
        imposto = 0;
    }else if (custoFabrica > 12000 && custoFabrica <= 25000){
        comissao = (10 * custoFabrica) / 100;
        imposto = (15 * custoFabrica) / 100;
    }else if (custoFabrica > 25000){
        comissao = (15 * custoFabrica) / 100;
        imposto = (20 * custoFabrica) / 100;
    }
    custoConsumidor = custoFabrica + comissao + imposto;
    cout << "O custo ao consumidor sera: R$" << custoConsumidor << endl;
    return 0;
}