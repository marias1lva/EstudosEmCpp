#include <iostream>
using namespace std;

int main(){
    float valor = 0.15;
    int i = 1;
    do{
        cout << "copias: " << i << " = R$" << valor * i << endl;
        i++;
    }while (i <= 200);
    return 0;
}