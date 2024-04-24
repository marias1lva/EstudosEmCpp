#include <iostream>
using namespace std;

int main(){
    float horasTrabalhadas, valorHora, percDesconto, salBruto, totalDesc, salLiquido;
    cout << "Informe as horas trabalhadas: ";
    cin >> horasTrabalhadas;
    cout << "Informe o valor por hora trabalhada: ";
    cin >> valorHora;
    cout << "Informe o percentual de desconto: ";
    cin >> percDesconto;
    salBruto = horasTrabalhadas * valorHora;
    totalDesc = (percDesconto / 100) * salBruto;
    salLiquido = salBruto - totalDesc;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salario bruto: " << salBruto << endl;
    cout << "Total de desconto: " << totalDesc << endl;
    cout << "Salario liquido: " << salLiquido << endl;
    return 0;
}