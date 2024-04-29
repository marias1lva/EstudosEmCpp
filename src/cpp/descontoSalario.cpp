#include <iostream> 
using namespace std;

int main(){
    float salarioBruto, desconto1, desconto2, salarioLiquido;
    cout << "Vamos calcular seu salario apos os descontos. Para isso, informe, por gentileza, seu salario bruto: ";
    cin >> salarioBruto;
    desconto1 = (10 * salarioBruto) / 100;
    salarioBruto = salarioBruto - desconto1;
    desconto2 = (5 * salarioBruto) / 100;
    salarioLiquido = salarioBruto - desconto2;
    cout << "Salario liquido = R$" << salarioLiquido;
    return 0;
}