#include <iostream>
using namespace std;

int main(){
    int camisetaP, camisetaM, camisetaG, valorTotal;;
    cout << "Informe quantas camisetas P serao compradas: ";
    cin >> camisetaP;
    cout << "Informe quantas camisetas M serao compradas: ";
    cin >> camisetaM;
    cout << "Informe quantas camisetas G serao compradas: ";
    cin >> camisetaG;
    valorTotal = (camisetaP * 10) +  (camisetaM * 12) + (camisetaG * 15);
    cout << "O valor total da compra eh R$" << valorTotal << endl;
    return 0;
}