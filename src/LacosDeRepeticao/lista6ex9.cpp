#include <iostream>
using namespace std;

int main(){
    int i;
    float valorCompras, bonus;
    string nome;
    for(i = 1; i <= 15; i++){
        cout << "Digite seu nome: ";
        cin >> nome;
        cout << "Digite o valor de compras no ano passado: R$";
        cin >> valorCompras;
        if (valorCompras < 1000.0) {
            bonus = (valorCompras * 10) / 100;
        } else {
            bonus = (valorCompras * 15) / 100;
        }
        cout << "O cliente " << nome << " recebe um bonus de R$" << bonus << endl;
    }
    return 0;
}