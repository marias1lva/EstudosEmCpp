#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int num, qtdePositivos = 0;
    while(i <= 10){
        cout << "Digite um numero: ";
        cin >> num;
        if(num > 0){
            qtdePositivos = qtdePositivos + 1;
        }
        i++;
    }
    cout << "Foram digitados " << qtdePositivos << " numeros POSITIVOS. " << endl;
    return 0;
}