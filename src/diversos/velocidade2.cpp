#include <iostream>
using namespace std;

int main(){
    float kmHora, mSegundos;
    cout << "Informe a velocidade em km/h: ";
    cin >> kmHora;
    mSegundos = kmHora / 3.6;
    cout << "A velocidade informada em km/h corresponde a " << mSegundos << "m/s.";
    return 0;
}