#include <iostream>
using namespace std;

int main () {
    int num, antecessor;
    cout << "Digite um numero: ";
    cin >> num;
    antecessor = num - 1;
    cout << "O antecessor de " << num << " eh " << antecessor << endl;
    return 0;
}