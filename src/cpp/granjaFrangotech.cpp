#include <iostream>
using namespace std;

int main(){
    float anelChip, anelAlimento, quantidadeFrangos, totalGasto;
    anelChip = 0.40;
    anelAlimento = 2 * 0.35;
    cout << "Vamos calcular o gasto total para marcar todos os frangos." << endl;
    cout << "Para isso, informe a quantidade de frangos: ";
    cin >> quantidadeFrangos;
    totalGasto = (anelChip + anelAlimento) * quantidadeFrangos;
    cout << "O gasto total eh R$" << totalGasto;
    return 0;
}