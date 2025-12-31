#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (num % 2 == 0 || num == 2) {
        cout << "O numero " << num << " nao eh primo." << endl;
    } else {
        cout << "O numero " << num << " eh primo." << endl;
    }

    return 0;
}