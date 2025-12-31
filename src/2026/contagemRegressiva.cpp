#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    cout << "Contagem regressiva de " << num << " ate 0: " << endl;
    for (int i = num; i >= 0; i--) {
        cout << i << endl;
    }

    return 0;
}