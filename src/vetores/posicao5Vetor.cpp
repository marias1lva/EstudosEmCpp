#include <iostream>
using namespace std;

int main(){
    int vetor[5], i, nVetor, estaNoVetor = 0;
    cout << "Digite 5 valores inteiros para ocuparem lugares no vetor:" << endl;
    for(i = 0; i < 5; i++){
        cin >> vetor[i];
    }
    cout << "Digite um valor que quer encontrar no vetor: ";
    cin >> nVetor;
    for(i = 0; i < 5; i++){
        if(vetor[i] == nVetor){
            estaNoVetor++;
        }
    }
    if(estaNoVetor > 0){
        cout << "O numero esta no vetor." << endl;
    }else{
        cout << "O numero nao esta no vetor." << endl;
    }
    return 0;
}