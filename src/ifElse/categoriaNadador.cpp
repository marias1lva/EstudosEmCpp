#include <iostream>
using namespace std;

int main (){
    int idade;
    string categoria;
    cout << "Ola, nadador! Vamos ver sua categoria para as eliminatorias." << endl;
    cout << "Informe, por gentileza, sua idade: ";
    cin >> idade;

    if(idade >= 7 && idade <= 12){
        categoria = "infantil";
    }else if(idade >= 13 && idade <= 17){
        categoria = "juvenil";
    }else if(idade >= 18 && idade <= 40){
        categoria = "adulto";
    }else if(idade > 40){
        categoria = "senior";
    }
    cout << "Voce tem " << idade << " anos, logo se enquadra na categoria: " << categoria << endl;
    return 0;
}