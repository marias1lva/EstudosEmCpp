#include <iostream>
using namespace std;

int main(){
    float horaNormal, horaExtra, salarioBruto, salarioLiquido, porcentagem;
    cout << "Ola, funcionario da Hipotheticus! Vamos calcular seu salario BRUTO e seu salario LIQUIDO(-10% para impostos)." << endl;
    cout << "Para isso, primeiramente informe, por gentileza, a quantidade de HORAS NORMAIS trabalhadas: ";
    cin >> horaNormal;
    cout << "Otimo! Agora informe a quantidade de HORAS EXTRAS trabalhadas: " ;
    cin >> horaExtra;
    salarioBruto = (10 * horaNormal) + (15 * horaExtra);
    porcentagem = (10 * salarioBruto) / 100;
    salarioLiquido = salarioBruto - porcentagem;
    cout << "SALARIO BRUTO: R$" << salarioBruto << endl;
    cout << "SALARIO LIQUIDO: R$" << salarioLiquido;
    return 0;
}