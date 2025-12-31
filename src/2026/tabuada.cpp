#include <iostream>
using namespace std;

int main() {
    int num, multi;
    cout << "Digite um numero: ";
    cin >> num;
    cout << "Tabuada de " << num << ": " << endl;
    for (int i = 1; i <= 10; i++) {
        multi = num * i;
        cout << num << " x " << i << " = " << multi << endl;
    }

    return 0;
}