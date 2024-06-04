#include <iostream>
using namespace std;

int main(){
    int i = 1, n, a1, r, soma = 0, termo;
    cout << "Digite o numero de termos da progressao aritmetica: ";
    cin >> n;
    cout << "Digite o primeiro termo da progressao aritmetica: ";
    cin >> a1;
    cout << "Digite a razao da progressao aritmetica: ";
    cin >> r;
    while(i <= n){
        termo = a1 + (i - 1) * r;
        cout << termo << endl;
        soma = soma + a1 + (i - 1) * r;
        i++;
    }
    cout << "A soma dos elementos da progressao aritmetica eh " << soma << endl;
    return 0;
}