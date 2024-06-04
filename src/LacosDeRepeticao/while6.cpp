#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int soma = 0;
    while(i <= 10){
        soma = soma + i; //SOMA = SOMA + I !!!!!!!!!!
        i++;
    }
    cout << "A soma de todos os inteiros de 1 a 10 eh " << soma << endl;
    return 0;
}