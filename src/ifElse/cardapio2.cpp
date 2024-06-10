#include <iostream>
using namespace std;

int main(){
  int codigo, quantidade;
  float total;
  cout << "        CARDAPIO: " << endl;
  cout << "----------------------------" << endl;
  cout << "CODIGO | PRODUTO         | PRECO" << endl;
  cout << "100    | Cachorro Quente | R$3,20" << endl;
  cout << "101    | Bauru Simples   | R$3,30" << endl;
  cout << "102    | Bauru com Ovo   | R$3,50" << endl;
  cout << "103    | Hamburguer      | R$3,20" << endl;
  cout << "----------------------------" << endl;
  cout << "Ola, cliente! Vamos fazer seu pedido. Para isso, informe o codigo do produto: ";
  cin >> codigo;
  cout << "Otima escolha! Agora informe a quantidade: ";
  cin >> quantidade;
  if(codigo == 100){
    total = quantidade * 3.20;
    cout << "Pedido: " << quantidade << " Cachorro(s) Quente(s). Total a pagar: R$" << total << endl;
  }else if(codigo == 101){
    total = quantidade * 3.30;
    cout << "Pedido: " << quantidade << " Bauru(s) Simples(s). Total a pagar: R$" << total << endl;
  }else if(codigo == 102){
    total = quantidade * 3.50;
    cout << "Pedido: " << quantidade << " Bauru(s) com Ovo(s). Total a pagar: R$" << total << endl;
  }else if(codigo == 103){
    total = quantidade * 3.20;
    cout << "Pedido: " << quantidade << " Hambuguer(s). Total a pagar: R$" << total << endl;
  }else{
    total = 0;
    cout << "Pedido invalido." << endl;
  }
  return 0;
}