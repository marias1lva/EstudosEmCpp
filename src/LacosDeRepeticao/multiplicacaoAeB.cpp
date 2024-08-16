#include <iostream>
using namespace std;

int main(){
    int A, B, multiplicacao = 0, i;
    cout << "Digite um valor para A: ";
    cin >> A;
    cout << "Digite um valor para B: ";
    cin >> B;
    for(i = 1; i <= B; i++){
        multiplicacao = multiplicacao + A;
    }
    cout << A << " X " << B << " = " << multiplicacao;
    return 0;
}