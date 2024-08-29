#include <iostream>
using namespace std;

int main(){
    int vetor[7], i;
    cout << "Digite 7 numeros para preencher o vetor: " << endl;
    for(i = 0; i < 7; i++){
       cin >> vetor[i]; 
    }
    cout << "Vetor na ordem inversa: " << endl;
    for(i = 6; i >= 0; i--){  // Inicializa i com o índice do último elemento e decrementa até o primeiro
        cout << vetor[i] << " ";
    }
    return 0;
}