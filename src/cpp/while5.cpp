#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int num, dobro = 0;
    while (i <= 10){
        cout << "Digite um numero: ";
        cin >> num;
        dobro = num * 2;
        cout << "O dobro de " << num << " eh " << dobro << endl;
        i++;
    }
}