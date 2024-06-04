#include <iostream>
using namespace std;

int main(){
    int camisetaP = 10, camisetaM = 12, camisetaG = 15, qtdeP, qtdeM, qtdeG, total;
    cout << "Informe quantas camisetas P deseja comprar: ";
    cin >> qtdeP;
    cout << "Informe quantas camisetas M deseja comprar: ";
    cin >> qtdeM;
    cout << "Informe quantas camisetas G deseja comprar: ";
    cin >> qtdeG;
    total = (qtdeP * camisetaP) + (qtdeM * camisetaM) + (qtdeG * camisetaG);
    cout << "=================================================" << endl;
    cout << "VALOR TOTAL DA COMPRA: R$" << total << endl;
    cout << "=================================================" << endl;
    cout << "Obrigado por comprar em nossa fabrica!" << endl;
    return 0;
}