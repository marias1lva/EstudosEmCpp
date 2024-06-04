#include <iostream>
using namespace std;

int main(){
    float num;
    int quantidadeDivisoes = 0;
    cout << "Digite um numero: ";
    cin >> num;
    while (num >= 1){
        num = num / 2;
        quantidadeDivisoes++;
    }
    cout << "O resultado da divisao eh " << num << endl;
    cout << "Foram realizadas " << quantidadeDivisoes << " divisoes." << endl;
    return 0;
}