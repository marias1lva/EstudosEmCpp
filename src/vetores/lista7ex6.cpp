#include <iostream>
using namespace std;

int main(){
    int i, vetor1[5], vetor2[5], vetor3[10];
    cout << "Digite 5 numeros para preencherem o primeiro vetor: " << endl;
    for(i = 0; i < 5; i++){
        cin >> vetor1[i];
    }
    cout << "Digite mais 5 numeros para preencherem o segundo vetor: " << endl;
    for(i = 0; i < 5; i++){
        cin >> vetor2[i];
    }
    for(i = 0; i < 5; i++){
        vetor3[i] = vetor1[i];
    }
    for(i = 0; i < 5; i++){
        vetor3[5 + i] = vetor2[i];
    }
    cout << "Vetor 3: " << endl;
    for(i = 0; i < 2 * 5; i++){
        cout << vetor3[i] << endl;
    }
    return 0;
}