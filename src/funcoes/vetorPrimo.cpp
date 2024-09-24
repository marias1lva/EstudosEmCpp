#include <iostream>
using namespace std;

bool ehPrimo(int num){
    if(num <= 1){
        return false;
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

void trocaPorZero(int A[25]){
    for(int i = 0; i < 25; i++){
        if(ehPrimo(A[i])){
            A[i] = 0;
        }
    }
}

void imprimeVetor(int A[25]){
    for(int i = 0; i < 25; i++){
        cout << A[i] << " ";  
    }
    cout << endl;
}

int main(){
    int A[25], i;
    cout << "Digite 25 valores para preencher o vetor A: " << endl;
    for(i = 0; i < 25; i++){
        cin >> A[i];
    }
    cout << endl << "Vetor antes: " << endl;
    for(i = 0; i < 25; i++){
        cout << A[i] << " ";
    }
    trocaPorZero(A);
    cout << endl << "Vetor alterado: " << endl;
    imprimeVetor(A);
    return 0;
}