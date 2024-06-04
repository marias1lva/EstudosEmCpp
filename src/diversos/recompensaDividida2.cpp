#include <iostream>
using namespace std;

int main(){
    float recompensaTotal = 780000, primeiro, segundo, terceiro;
    primeiro = (46 * recompensaTotal) / 100;
    segundo = (32 * recompensaTotal) / 100;
    terceiro = recompensaTotal - primeiro - segundo;
    cout << "RECOMPENSA = R$" << recompensaTotal << endl;
    cout << "PRIMEIRO GANHADOR = R$" << primeiro << endl;
    cout << "SEGUNDO GANHADOR = R$" << segundo << endl;
    cout << "TERCEIRO GANHADOR = R$" << terceiro << endl;
    return 0;
}