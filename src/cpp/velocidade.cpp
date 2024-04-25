#include <iostream>
using namespace std;

int main(){
    float velocidade, km, metros;
    cout << "Informe a velocidade em km/h: ";
    cin >> velocidade;
    metros = velocidade / 3.6;
    cout << "A velocidade em m/s eh " << metros << "m/s";
    return 0;
}