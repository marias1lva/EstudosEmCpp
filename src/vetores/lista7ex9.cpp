#include <iostream>
#include <string>
using namespace std;

int main(){
    int i;
    string vNome[10], nomeProcurado;
    cout << "Digite o nome de 10 pessoas: " << endl;
    for(i = 0; i < 10; i++){
        cin >> vNome[i];
    }
    cout << "Digite o nome que quer procurar: ";
    cin >> nomeProcurado;
    for(i = 0; i < 10; i++){
        if(vNome[i] == nomeProcurado){
            cout << "ACHEI!" << endl;
            break;
        }
    }
    if(i == 10){
        cout << "NAO ACHEI:(";
    }
    return 0;
}