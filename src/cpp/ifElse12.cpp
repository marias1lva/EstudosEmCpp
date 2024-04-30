#include <iostream>
using namespace std;

int main(){
    int idade;
    cout << "Ola, nadador! Informe sua idade e vamos ver sua categoria: ";
    cin >> idade;
    if(idade >= 7 && idade <= 12){
        cout << "CATEGORIA: INFANTIL.";
    }else if(idade >= 13 && idade <= 17){
        cout << "CATEGORIA: JUVENIL.";
    }else if(idade >= 18 && idade <= 40){
        cout << "CATEGORIA: ADULTO.";
    }else if(idade > 40){
        cout << "CATEGORIA: SENIOR.";
    }else{
        cout << "SEM CATEGORIA.";
    }
    return 0;
}