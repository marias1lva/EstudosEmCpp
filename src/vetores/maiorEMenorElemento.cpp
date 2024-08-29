#include <iostream>
using namespace std;

int main(){
    int vetor[10], i;
    int maior, menor;
    cout << "Digite 10 valores para preencher o vetor: " << endl;
    for(i = 0; i < 10; i++){
        cin >> vetor[i];
    }
    maior = vetor[0]; //inicializa as variáveis com o valor do primeiro termo (termo 0)
    menor = vetor[0];
    for(i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    cout << endl << "Maior elemento: " << maior << endl;
    cout << "Menor elemento: " << menor << endl;
    return 0;
}