#include <iostream>
using namespace std;

int main(){
    float precoAntigo, precoNovo;
    cout << "Informe o preco antigo: ";
    cin >> precoAntigo;

    if (precoAntigo <= 50.00){
        precoNovo = ((precoAntigo * 5) / 100) + precoAntigo;
    }else if (precoAntigo > 50 && precoAntigo <= 100.00){
        precoNovo = ((precoAntigo * 10) / 100) + precoAntigo;
    }else if (precoAntigo > 100){
        precoNovo = ((precoAntigo * 15) / 100) + precoAntigo;
    }
    cout << "O novo preco deste produto eh R$" << precoNovo << endl;
    return 0;
}