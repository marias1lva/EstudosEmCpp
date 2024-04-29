#include <iostream> 
using namespace std;

int main(){
    int HT, VH, PD, SB, TD, SL;
    cout << "HORAS TRABALHADAS: ";
    cin >> HT;
    cout << "VALOR POR HORA TRABALHADA: ";
    cin >> VH;
    cout << "PERCENTUAL DE DESCONTO: ";
    cin >> PD;
    SB = HT * VH;
    TD = (SB * PD) / 100;
    SL = SB - TD;
    cout << "================================" << endl;
    cout << "HORAS TRABALHADAS : " << HT << endl;
    cout << "SALARIO BRUTO: R$" << SB << endl;
    cout << "DESCONTO: R$" << TD << endl;
    cout << "SALARIO LIQUIDO: R$" << SL << endl;
}