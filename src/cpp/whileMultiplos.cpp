#include <iostream>
using namespace std;

int main(){
    int i = 1, iMultiplos = 0, num;
    while(i <= 10){
        cout << "Digite um numero: ";
        cin >> num;
        if (num % 2 ==0 && num % 5 == 0){
            iMultiplos = iMultiplos + 1;
        }
        i++;
    }
    cout << "A quantidade de numeros multiplos de 2 e 5, simultaneamente, digitados eh: " << iMultiplos << endl;
    return 0;
}