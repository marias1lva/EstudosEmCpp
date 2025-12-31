#include <iostream>
using namespace std;

int main() {
    int num, fatorial = 1;

    cout << "Digite um numero: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        fatorial = fatorial * i;
    }

    cout << "Fatorial de " << num << ": " << fatorial << endl;
    return 0;
}