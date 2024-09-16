#include <iostream>
using namespace std;

void parametroValor(int numero){
    numero = numero * 2;
}

void parametroReferencia(int &numero){
    numero = numero * 2;
}

int main(){
    int n = 10;
    parametroValor(n);
    cout << n;
    parametroReferencia(n);
    cout << endl << n;
    return 0;
}