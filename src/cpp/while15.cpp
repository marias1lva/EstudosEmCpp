#include <iostream>
using namespace std;

int main(){
    float num, qtdeDivisao = 0;
    cout << "Digite um numero: ";
    cin >> num;
    while(num >= 1){
        num = num / 2;
        qtdeDivisao = qtdeDivisao + 1;
    }
    cout << "Resultado da ultima divisao = " << num << endl;
    cout << "Quantidade de divisoes = " << qtdeDivisao << endl;
    return 0;
}