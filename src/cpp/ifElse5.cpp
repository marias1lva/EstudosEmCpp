#include <iostream>
using namespace std;

int main(){
    int hora, minuto;
    cout << "Digite a hora: ";
    cin >> hora;
    cout << "Digite o minuto: ";
    cin >> minuto;
    if(hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59){
        cout << "HORARIO VALIDO!" << " " << hora << ":" << minuto;
    }else{
        cout << "HORARIO INVALIDO!";
    }
    return 0;
}