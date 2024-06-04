#include <iostream> 
using namespace std;

int main(){
    int i = 1, soma = 0;
    while (i <= 10){
        soma = soma + i;
        i++;
    }
    cout << "a soma de todos os inteiros de 1 a 10 eh " << soma;
}