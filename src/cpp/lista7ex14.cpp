#include <iostream>
using namespace std;

int main(){
    int vetor[10], pares = 0, impares = 0, i;
    cout << "Digite 10 numeros para preencherem o vetor: " << endl;
    for(i = 0; i < 10; i ++){
        cin >> vetor[i];
        if(vetor[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }
    cout << endl << "Quantidade de numeros pares no vetor: " << pares << endl;
    cout << "Quantidade de numeros impares no vetor: " << impares << endl;
    return 0;
}