#include <iostream>
using namespace std;

int main(){
    int i;
    float vetor[10], somaVetores = 0, media;
    cout << "Digite 10 valores para preencher o vetor: " << endl;
    for(i = 0; i < 10; i++){
        cin >> vetor[i];
        somaVetores = somaVetores + vetor[i];
    }
    media = somaVetores / 10;
    cout << endl << "Media dos valores: " << media << endl;
    return 0;
}