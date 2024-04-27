#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int idade, menorIdade = 0;
    while (i <= 15){
        cout << "Digite sua idade: ";
        cin >> idade;
        if (idade < 18){
            menorIdade = menorIdade + 1;
        }
        i++;
    }
    cout << "A quantidade de pessoas menores de 18 anos eh: " << menorIdade << endl;
    return 0;
}