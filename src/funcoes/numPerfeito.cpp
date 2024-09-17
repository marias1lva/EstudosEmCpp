#include <iostream>
using namespace std;

bool numPerfeito(int num){
    int soma = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            soma = soma + i;
        }
    }
    return (soma == num);
}

int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if(numPerfeito(num)){
        cout << num << " eh um numero perfeito!";
    }else{
        cout << num << " nao eh um numero perfeito!";
    }
    return 0;
}