#include <iostream>
using namespace std;

int main(){
    float precoCusto, porcentagem, acrescimo, valorVenda;
    cout << "Vamos calcular o valor de venda dos produtos. Para isso, informe o preco de custo: ";
    cin >> precoCusto;
    cout << "Otimo, agora informe a porcentagem de acrescimo: ";
    cin >> porcentagem;
    acrescimo = (precoCusto * porcentagem) / 100;
    valorVenda = precoCusto + acrescimo;
    cout << "O valor de venda sera R$" << valorVenda;
    return 0;
}