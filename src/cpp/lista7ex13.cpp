#include <iostream>
using namespace std;

int main(){
    int vetor1[10], vetor2[10], vetor3[20], i;
    cout << "Digite 10 valores para preencherem o primeiro vetor: " << endl;
    for(i = 0; i < 10; i++){
        cin >> vetor1[i];
    }
    cout << endl << "Digite 10 valores para preencherem o segundo vetor: " << endl;
    for(i = 0; i < 10; i++){
        cin >> vetor2[i];
    }
    for(i = 0; i < 10; i++){
        vetor3[2 * i] = vetor1[i]; // Posições pares do terceiro vetor recebem valores do primeiro vetor
        vetor3[2 * i + 1] = vetor2[i]; // Posições ímpares do terceiro vetor recebem valores do segundo vetor
    }
    cout << "O vetor resultante eh: " << endl;
    for(i = 0; i < 20; i++){
        cout << vetor3[i] << endl;
    }
    return 0;
}