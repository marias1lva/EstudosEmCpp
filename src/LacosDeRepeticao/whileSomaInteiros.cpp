#include <iostream>
using namespace std;

int main(){
    int i = 1, num, soma = 0;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    while (i <= num){
        soma = soma + i;
        i++;
    }
    cout << "A soma dos numeros de 1 a " << num << " eh: " << soma << endl;
    return 0;
}