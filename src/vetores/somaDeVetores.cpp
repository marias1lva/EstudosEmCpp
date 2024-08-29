#include <iostream>
using namespace std;

int main(){
    int vetor[5], i, somaVetor = 0;
    cout << "Insira 5 valores para preencherem o vetor: " << endl;
    for(i = 0; i < 5; i++){
        cin  >> vetor[i];
        somaVetor += vetor[i];
    }
    cout << "A soma de todos os elementos do vetor e: " << somaVetor;
    return 0;
}