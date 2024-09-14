#include <iostream>
using namespace std;

int main(){
    int num, somaPares = 0;
    cout << "Digite um numero: ";
    cin >> num;
    for(int i = 0; i < num; i++){
        if(i % 2 == 0){
            somaPares = somaPares + i;
        }
    }
    cout << "A soma dos numeros pares ate " << num << " eh: " << somaPares;
    return 0;
}