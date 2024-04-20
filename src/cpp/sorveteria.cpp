#include <iostream>
using namespace std;

int main(){
    float picole1 = 0.50, picole2 = 0.60, picole3 = 0.75, total, quantidade1, quantidade2, quantidade3;
    cout << "Ola, cliente! Quantos picoles do tipo 1 voce comprou? " << endl;
    cin >> quantidade1;
    cout << "Certo. E do tipo 2? " << endl;
    cin >> quantidade2;
    cout << "Certo. E do tipo 3? " << endl;
    cin >> quantidade3;
    total = quantidade1 * picole1 + quantidade2 * picole2 + quantidade3 * picole3;
    cout << "Valor total da compra: R$" << total << endl;
    cout << "Obrigado por comprar em nossa sorveteria! Volte sempre!";
    return 0;
}