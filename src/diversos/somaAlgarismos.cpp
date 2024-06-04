#include <iostream>
using namespace std;

int main(){
    int num, soma = 0;
    cout << "Digite um numero com 4 ALGARISMOS: ";
    cin >> num;
    soma += num % 10;
    soma += (num / 10) % 10;
    soma += (num / 100) % 10;
    soma += (num / 1000);
    cout << soma << endl;
    return 0;
}