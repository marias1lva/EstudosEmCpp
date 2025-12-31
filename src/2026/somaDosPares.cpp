#include <iostream>
using namespace std;

int main() {
    int num;
    int soma = 0;

    cout << "Digite 10 numeros: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num % 2 == 0) {
            soma += num;
        }
    }
    cout << "Soma dos numeros pares digitados: " << soma << endl;

    return 0;
}