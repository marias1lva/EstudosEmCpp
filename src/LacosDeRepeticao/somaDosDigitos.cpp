#include <iostream>
using namespace std;

int main() {
    int n, soma = 0;
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;
    while (n > 0) {
        soma += n % 10; 
        n /= 10; 
    }
    cout << "A soma dos digitos eh: " << soma << endl;
    return 0;
}
