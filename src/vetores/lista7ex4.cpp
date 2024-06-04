#include <iostream>
using namespace std;

int main(){
    int i, vetor[10], somaPares = 0;
    cout << "Digite 10 valores para preencher o vetor: " << endl;
    for(i = 0; i < 10; i++){
        cin >> vetor[i];
        if(vetor[i] % 2 == 0){
            somaPares = somaPares + vetor[i];
        }
    }
    cout << "A soma dos valores pares desse vetor eh: " << somaPares << endl;
    return 0;
}