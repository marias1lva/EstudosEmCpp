#include <iostream> 
using namespace std;

int main(){
    int i = 1, x, num, qtdePares = 0, qtdeImpares = 0;
    cout << "Informe quantos numeros serao analisados: ";
    cin >> x;
    while(i <= x){
        cout << "Digite um numero: ";
        cin >> num;
        if(num % 2 == 0){
            qtdePares = qtdePares + 1;
        }else{
            qtdeImpares = qtdeImpares + 1;
        }
        i++;
    }
    cout << "Foram digitados " << qtdePares << " numeros PARES e " << qtdeImpares << " numeros IMPARES.";
    return 0;
}