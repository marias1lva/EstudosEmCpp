#include <iostream>
using namespace std;

int main(){
    int i, vetor[10], somaPositivos = 0, negativos = 0;
    cout << "Insira 10 valores para preencherem o vetor: " << endl;
    for(i = 0; i < 10; i++){
        cin >> vetor[i];
        if(vetor[i] < 0){
            negativos = negativos + 1;
        }
        if(vetor[i] > 0){
            somaPositivos = somaPositivos + vetor[i];
        }
    }
    cout << endl << "Foram digitados " << negativos << " numeros negativos." << endl;
    cout << "A soma dos numeros positivos eh " << somaPositivos << "." << endl;
    return 0;
}