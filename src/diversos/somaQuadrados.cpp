#include <iostream>
using namespace std;

int main(){
    int A, B, soma;
    cout << "Digite um valor para A: ";
    cin >> A;
    cout << "Digite um valor para B: ";
    cin >> B;
    soma = (A * A) + (B * B);
    cout << "A soma dos quadrados de " << A << " e " << B << " eh " << soma;
    return 0;
}