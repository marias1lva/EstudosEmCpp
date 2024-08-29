#include <iostream>
using namespace std;

int main(){
    int vetor[15], i, pares = 0, impares = 0;
    cout << "Digite 15 valores para preencher o vetor: " << endl;
    for(i = 0; i < 15; i++){
        cin >> vetor[i];
        if(vetor[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }
    cout << "Este vetor tem " << pares << " numeros pares e " << impares << " numeros impares.";
    return 0;
}