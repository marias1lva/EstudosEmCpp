#include <iostream>
using namespace std;

int main(){
    float precoAntigo, precoNovo;
    cout << "Informe o preco antigo do produto: ";
    cin >> precoAntigo;
    if(precoAntigo <= 50){
        precoNovo = ((5 * precoAntigo) / 100) + precoAntigo;
    }else if(precoAntigo > 50 && precoAntigo <= 100){
        precoNovo = ((10 * precoAntigo) / 100) + precoAntigo;
    }else{
        precoNovo = ((15 * precoAntigo) / 100) + precoAntigo;
    }
    cout << "====================================" << endl;
    cout << "O preco novo do produto eh R$" << precoNovo << endl;
    return 0;
}