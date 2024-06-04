#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int num, multiplos = 0;
    while(i <= 10){
        cout << "Digite um numero: ";
        cin >> num;
        if(num % 2 == 0 && num % 5 == 0){
            multiplos = multiplos + 1;
        }
        i++;
    }
    cout << "A quantidade de numeros multiplos de 2 e 5, simultaneamente, eh: " << multiplos << endl;
    return 0;
}