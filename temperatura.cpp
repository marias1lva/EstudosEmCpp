#include <iostream>
using namespace std;

int main () {
    float fah, cel;
    cout << "Informe a temperatura em fahrenheit: ";
    cin >> fah;
    cel = fah - 32;
    cel = cel / 1.8;
    cout << "A temperatura informada eh: " << cel << "celsius. " << endl;
}