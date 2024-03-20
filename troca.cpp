#include <iostream>
using namespace std;

int main () {
    int A, B, troca;
    cout << "Digite um numero: ";
    cin >> A;
    cout << "Digite outro numero: ";
    cin >> B;
    troca = A;
    A = B; 
    B = troca;
    cout << A << endl;
    cout << B;
    return 0;
}