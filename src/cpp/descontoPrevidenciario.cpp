#include <iostream>
using namespace std;

int main (){
    float desconto, salario;
    cout << "Ola, funcionario! Vamos calcular seu desconto previdenciario." << endl;
    cout << "Para isso, preciso que voce informe, por gentileza, seu salario: ";
    cin >> salario;
    desconto = (11 * salario) / 100;
    if (desconto <= 318.20){
        cout << "Desconto = R$" << desconto << endl;
    }else if (desconto > 318.20){
        cout << "Desconto = R$318.20" << endl;
    }
    return 0;
}