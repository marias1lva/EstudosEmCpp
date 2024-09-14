#include <iostream>
using namespace std;

int main(){
    int num, fatorial = 1;
    cout << "Digite um numero para ser calculado seu fatorial: ";
    cin >> num;
    for(int i = 1; i <= num; i++){
        fatorial = fatorial * i;
    }
    cout << num << "! = " << fatorial;
    return 0;
}