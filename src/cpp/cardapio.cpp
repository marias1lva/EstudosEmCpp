#include <iostream>
using namespace std;

int main(){
    float quantidade, precoTotal;
    string codigo;
    cout << "Ola, cliente! Digite o codigo do produto escolhido e a quantidade, respectivamente: " << endl;
    cin >> codigo >> quantidade;
    if (codigo == "100"){
        precoTotal = quantidade * 3.20;
    }else if (codigo == "101"){
        precoTotal = quantidade * 3.30;
    }else if (codigo == "102"){
        precoTotal = quantidade * 3.50;
    }else if (codigo == "103"){
        precoTotal = quantidade * 3.20;
    }else{
        precoTotal = 0;
        cout << "Codigo invalido." << endl;
    }
    cout << "O total do seu pedido deu R$" << precoTotal << endl;
    return 0;
}