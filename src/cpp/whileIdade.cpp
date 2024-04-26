#include <iostream>
using namespace std;

int main(){
    int i = 1, idade, iMenor = 0;
    while (i <= 10){
        cout << "Informe sua idade: ";
        cin >> idade;
        if (idade < 18){
            iMenor = iMenor + 1;
        }
        i++;
    }
    cout << "A quantidade de pessoas menores de 18 anos eh: " << iMenor << endl;
    return 0;
}