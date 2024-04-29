#include <iostream> 
using namespace std;

int main(){
    float fabricacao, distribuidora, imposto, precoVenda;
    cout << "CUSTO DE FABRICACAO: ";
    cin >> fabricacao;
    distribuidora = (28 * fabricacao) / 100;
    imposto = (45 * fabricacao) / 100;
    precoVenda = fabricacao + distribuidora + imposto;
    cout << "====================================" << endl;
    cout << "PRECO DE VENDA: R$" << precoVenda << endl;
    return 0;
}