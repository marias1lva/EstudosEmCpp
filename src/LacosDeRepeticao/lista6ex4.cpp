#include <iostream>
using namespace std;

int main(){
    int i, n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Pares: " << endl;
    for(i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }
    cout << "Impares: " << endl;
    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout <<  i << endl;
        }
    }
    return 0;
}