#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float fah, cel;
    for(fah = 50; fah <= 70; fah++){
        cel = (5.0 / 9.0) * (fah - 32);
        cout << fixed << setprecision(2);
        cout << fah << " graus Fahrenheit = " << cel << " graus Celsius." << endl;
    }
    return 0;
}