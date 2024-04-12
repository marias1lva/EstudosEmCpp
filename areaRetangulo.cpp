#include <iostream>
using namespace std;

int main () {
    float base, altura, area;
    string unidade;
    cout << "Digite qual a unidade de medida: ";
    cin >> unidade;
    cout << "Digite o valor da base: ";
    cin >> base;
    cout << "Digite o valor da altura: ";
    cin >> altura;
    area = base * altura;
    cout << "A area desse retangulo eh: " << area << unidade << endl;
    return 0;
}