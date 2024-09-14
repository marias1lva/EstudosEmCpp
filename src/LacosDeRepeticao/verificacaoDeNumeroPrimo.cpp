#include <iostream>
using namespace std;

int main() {
    int n, i, divisor = 0;
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;
    if(n < 2){
        cout << n << " nao eh um numero primo." << endl;
    }else{
        for(i = 2; i * i <= n; i++){
            if(n % i == 0){
                divisor = 1; 
                break;
            }
        }
        if(divisor == 0){
            cout << n << " eh um numero primo." << endl;
        }else{
            cout << n << " nao eh um numero primo." << endl;
        }
    }
    return 0;
}
