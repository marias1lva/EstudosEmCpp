#include <iostream>
using namespace std;

int main(){
    float valor = 0.15;
    int i;
    for(i = 1; i <= 200; i++){
        cout << "copias: " << i << " = R$" << valor * i << endl;
    }
    return 0;
}