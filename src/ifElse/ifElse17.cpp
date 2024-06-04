#include <iostream>
using namespace std;

int main(){
    float custoConsumidor, custoFabrica, distribuidor, imposto;
    cout << "CUSTO FABRICA: R$";
    cin >> custoFabrica;
    if(custoFabrica <= 12000){
        distribuidor = (5 * custoFabrica) / 100;
        custoConsumidor = custoFabrica + distribuidor;
    }else if(custoFabrica > 12000 && custoFabrica <= 25000){
        distribuidor = (10 * custoFabrica) / 100;
        imposto = (15 * custoFabrica) / 100;
        custoConsumidor = custoFabrica + distribuidor + imposto;
    }else{
        distribuidor = (15 * custoFabrica) / 100;
        imposto = (20 * custoFabrica) / 100;
        custoConsumidor = custoFabrica + distribuidor + imposto;
    }
    cout << "================================" << endl;
    cout << "CUSTO CONSUMIDOR: R$" << custoConsumidor << endl;
    return 0;
}
