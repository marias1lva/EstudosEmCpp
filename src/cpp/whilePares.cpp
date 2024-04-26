#include <iostream>
using namespace std;

int main(){
    int i = 1, iPar = 0, num;
    while (i <= 10){
        cout << "Digite um numero: ";
        cin >> num;
        if(num % 2 == 0){
            iPar = iPar + 1;
        }
        i++;
    }
    cout << "A quantidade de numeros pares eh: " << iPar << endl;
    return 0;
}