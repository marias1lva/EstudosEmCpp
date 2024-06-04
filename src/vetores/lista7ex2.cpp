#include <iostream>
using namespace std;

int main(){
    int i, vetor1[5], vetor2[5];
    cout << "Insira 5 valores para preencher o vetor: " << endl;
    for(i = 0; i < 5; i++){
        cin >> vetor1[i];
        vetor2[i] = vetor1[i];
    }
    cout << endl << "VETOR 1: " << endl;
    for(i = 0; i < 5; i++){
        cout << vetor1[i] << endl;
    }
    cout << endl << "VETOR 2: " << endl;
    for(i = 0; i < 5; i++){
        cout << vetor2[i] << endl;
    }
    return 0;
}