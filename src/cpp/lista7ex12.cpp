#include <iostream>
using namespace std;

int main(){
    int i, vetor[5], troca, codigo;
    cout << "Digite 5 valores para preencherem o vetor: " << endl;
    for(i = 0; i < 5; i++){
        cin >> vetor[i];
    }
    while(true){
        cout << "Digite 0, 1 ou 2: ";
        cin >> codigo;
        if(codigo == 0){
            cout << "Programa finalizado.";
            break;
        }else if(codigo == 1){
            cout << endl << "Vetor na ordem direta: " << endl;
            for(i = 0; i < 5; i++){
            cout << vetor[i] << endl;
            }
        }else if(codigo == 2){
            cout << endl << "Vetor na ordem inversa: " << endl;
            for(i = 4; i >= 0; i--){
            cout << vetor[i] << endl;
            }
        }else{
            cout << "CODIGO INVALIDO. Digite 0, 1 ou 2 para um resultado valido." << endl;
        }
    }
    return 0;
}