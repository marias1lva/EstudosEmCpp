#include <iostream>
using namespace std;

int main(){
    int vetor[20], i, troca;
    cout << "Digite 20 numeros para preencher o vetor: " << endl;
    for(i = 0; i < 20; i++){
        cin >> vetor[i];
    }
    cout << endl << "VETOR ORIGINAL: " << endl;
    for(i = 0; i < 20; i++){
        cout << vetor[i] << endl;
    }
    for(i = 0; i < 20 / 2; i++){
        troca = vetor[i];
        vetor[i] = vetor[20 - 1 - i];
        vetor[20 - 1 - i] = troca;
    }
    cout << endl << "VETOR MODIFICADO: " << endl;
    for(i = 0; i < 20; i++){
        cout << vetor[i] << endl;
    }
    return 0;
}