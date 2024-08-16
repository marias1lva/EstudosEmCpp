#include <iostream>
using namespace std;

int main(){
    int num1, num2, somaPares = 0, multiplicacaoImpares = 1, i, menor, maior;
    cout << "Digite o numero 1: ";
    cin >> num1;
    cout << "Digite o numero 2: ";
    cin >> num2;
    menor = min(num1, num2); // min(num1, num2) e max(num1, num2) determina os limites do intervalo
    maior = max(num1, num2);
    for(i = menor; i <= maior; i++){
        if(i % 2 == 0){
            somaPares = somaPares + i;
        }else{
            multiplicacaoImpares = multiplicacaoImpares * i;
        }
    }
    cout << "Soma dos pares de " << menor << " a " << maior << ": " << somaPares << endl;
    cout << "Multiplicacao dos impares de " << menor << " a " << maior << ": " << multiplicacaoImpares << endl;
    return 0;
}