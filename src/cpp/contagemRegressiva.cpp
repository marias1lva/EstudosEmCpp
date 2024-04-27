#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "Digite um numero para partir a contagem regressiva: ";
    cin >> i;
    while (i >= 0){
        cout << i << endl;
        i--;
    }
    cout << "Contagem regressiva concluida!" << endl;
    return 0;
}