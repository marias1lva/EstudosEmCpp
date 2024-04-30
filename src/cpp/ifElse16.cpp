#include <iostream>
using namespace std;

int main(){
    float salario, desconto;
    cout << "Informe o salario: ";
    cin >> salario;
    desconto = (11 * salario) / 100;
    if(desconto <= 318.20){
        cout << "Desconto = R$" << desconto;
    }else{
        cout << "Desconto = R$" << 318.20;
    }
    return 0;
}
