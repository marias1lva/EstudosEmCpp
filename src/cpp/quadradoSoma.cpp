#include <iostream>
using namespace std;

int main(){
    int A, B, soma;
    cout << "Insira um valor para A: ";
    cin >> A;
    cout << "Insira um valor para B: ";
    cin >> B;
    soma = (A * A) + (B * B);
    cout << "A soma dos quadrados de " << A << " e " << B << " eh " << soma << endl;
    return 0;
}