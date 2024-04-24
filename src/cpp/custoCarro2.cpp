#include <iostream>
using namespace std;

int main(){
    float custoConsumidor, custoFabrica, distribuidor, imposto;
    distribuidor = 28;
    imposto = 45;
    cout << "Vamos calcular o custo de um carro para o consumidor." << endl;
    cout << "Para isso, informe o custo de fabrica: ";
    cin >> custoFabrica;
    custoConsumidor = ((custoFabrica * distribuidor) / 100) + ((custoFabrica * imposto) / 100);
    cout << "O custo para o consumidor sera R$" << custoConsumidor << endl;
    return 0;
}