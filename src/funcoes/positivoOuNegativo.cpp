#include <iostream>
using namespace std;

int verificacao(int N){
    if(N > 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int N;
    cout << "Digite um numero: ";
    cin >> N;
    if(verificacao(N)){
        cout << "Positivo";
    }else{
        cout << "Negativo";
    }
    return 0;
}