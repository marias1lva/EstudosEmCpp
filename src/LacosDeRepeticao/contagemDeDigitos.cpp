#include <iostream>
using namespace std;

int main(){
    int num, numOriginal, digitos = 0;
    cout << "Digite um numero: ";
    cin >> num;
    numOriginal = num;
    while(num > 0){
        num = num / 10;
        digitos++;
    }
    cout << numOriginal << " tem " << digitos << " digitos.";
    return 0;
}