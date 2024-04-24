#include <iostream>
using namespace std;

int main(){
    float recompensa, divisao1, divisao2, divisao3;
    cout << "Vamos calcular o premio para cada um dos ganhadores." << endl;
    cout << "O premio total eh R$780.000,00. O primeiro ganhador recebe 46%, o segundo 32% e o terceiro, o restante. " << endl;
    recompensa = 780000;
    divisao1 = (46 * 780000) / 100;
    divisao2 = (32 * 780000) / 100;
    divisao3 = 780000 - (divisao1 + divisao2);
    cout << "O primeiro ganhador recebera R$" << divisao1 << endl;
    cout << "O segundo ganhador recebera R$" << divisao2 << endl;
    cout << "O terceiro ganhador recebera R$" << divisao3 << endl;
    return 0;
}