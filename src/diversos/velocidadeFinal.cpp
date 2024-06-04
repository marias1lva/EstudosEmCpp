#include <iostream>
using namespace std;

int main(){
    float veloInicial, aceleracao, tempo, veloFinal;
    cout << "Para calcular a velocidade final informe a velocidade inicial(km/h): ";
    cin >> veloInicial;
    cout << "Agora informe a acelerecao(m/s): ";
    cin >> aceleracao;
    cout << "Por fim, informe o tempo(s): ";
    cin >> tempo;
    veloFinal = veloInicial + (aceleracao * tempo);
    cout << "Velocidade final = " << veloFinal << "km/h" << endl;
    return 0;
}