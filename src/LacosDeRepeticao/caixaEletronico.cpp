#include <iostream>
using namespace std;

int main(){
    int saldo = 1000, saque;
    char continuar;
    cout << "Saldo atual: R$" << saldo << endl;
    while(saldo > 0){
        cout << "Informe o valor do saque: R$";
        cin >> saque;
        if(saldo < saque){
            cout << "Saldo insuficiente. Informe um valor valido. ";
        }else{
            saldo = saldo - saque;
            cout << "Saque de R$" << saque << " realizado com sucesso!" << endl;
            cout << "Saldo atual: R$" << saldo << endl;;
            cout << "Deseja fazer outro saque? ";
            cin >> continuar;
            if(continuar != 'S' && continuar != 's'){
                break;
            }
        }
    }
    return 0;
}