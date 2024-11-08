#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float fah, cel;
    cout << "Tabela de equivalencia de Fahrenheit para Celsius: " << endl;
    cout << "Fahrenheit  |  Celsius" << endl;
    cout << "-----------------------" << endl;
    for(fah = 50; fah <= 70; fah++){
        cel = (5.0 / 9.0) * (fah - 32);  // Usar 5.0 / 9.0 para divisão em ponto flutuante
        cout << setw(10) << fixed << setprecision(2) << fah << "  |  " << setw(7) << cel << endl;
        //setw(10) para largura do campo de 10 caracteres para fah
        //fixed e setprecision(2) para duas casas decimais
        //setw(7) para largura do campo de 7 caracteres para cel
    }
    return 0;
}