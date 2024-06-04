#include <iostream>
using namespace std;

int main(){
    int i = 1, iPositivo = 0, num;
    while (i <= 10){
        cout << "Digite um numero: ";
        cin >> num;
        if (num > 0){
            iPositivo = iPositivo + 1;
        }
        i++;
    }
    cout << "A quantidade de numeros positivos que foi digitada eh: " << iPositivo << endl;
    return 0;
}