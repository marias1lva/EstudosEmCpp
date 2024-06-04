#include <iostream>
using namespace std;

int main (){
    int numero;
    float saldo, valorOperacao, novoSaldo, valorDeposito, valorRetirada;
    string tipoOperacao;
    cout << "Informe o numero da conta: " << endl;
    cin >> numero;
    cout << "Insira seu saldo atual: " << endl;
    cin >> saldo;
    cout << "Informe o tipo de operacao que deseja realizar (deposito/retirada): " << endl;
    cin >> tipoOperacao;

    if (tipoOperacao == "deposito"){
        cout << "Informe o valor do deposito: ";
        cin >> valorDeposito;
    }else{
        cout << "Informe o valor da retirada: ";
        cin >> valorRetirada;
    }

    if (tipoOperacao == "deposito"){
        novoSaldo = saldo + valorDeposito;
        cout << "Seu novo saldo eh R$" << novoSaldo;
    }else if (tipoOperacao == "retirada"){
        novoSaldo = saldo - valorRetirada;
        cout << "Seu novo saldo eh R$" << novoSaldo << endl;
    }
    if (novoSaldo < saldo){
        cout << "Conta estourada" << endl;
    }
    return 0;
}