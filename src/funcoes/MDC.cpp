#include <iostream>
using namespace std;

int maximoDivisor(int a, int b){
    while(b != 0){
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main(){
    int a, b;
    cout << "Digite um valor para a: ";
    cin >> a;
    cout << "Digite um valor para b: ";
    cin >> b;
    int MDC = maximoDivisor(a, b);
    cout << "O MDC entre " << a << " e " << b << " eh: " << MDC;
    return 0;
}