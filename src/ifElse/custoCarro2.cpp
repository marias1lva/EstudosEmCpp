#include <iostream>
using namespace std;

int main(){
  float custoFabrica, distribuidor, imposto, custoConsumidor;
  cout << "Informe o custo de fabrica do carro: R$";
  cin >> custoFabrica;
  if(custoFabrica <= 12000){
    distribuidor = (custoFabrica * 5) / 100;
    imposto = 0;
  }else if(custoFabrica > 12000 && custoFabrica <= 25000){
    distribuidor = (custoFabrica * 10) / 100;
    imposto = (custoFabrica * 15) / 100;
  }else{
    distribuidor = (custoFabrica * 15) / 100;
    imposto = (custoFabrica * 20) / 100;
  }
  custoConsumidor = custoFabrica + distribuidor + imposto;
  cout << "Custo de Fabrica: R$" << custoFabrica << endl;
  cout << "Comissao do Distribuidor: R$" << distribuidor << endl;
  cout << "Impostos: R$" << imposto << endl;
  cout << "Custo ao Consumidor: R$" << custoConsumidor << endl;
  return 0;
}