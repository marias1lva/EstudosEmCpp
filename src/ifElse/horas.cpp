#include <iostream>
using namespace std;

int main (){
    int horas, minutos;
    cout << "Digite as horas: ";
    cin >> horas;
    cout << "Digite os minutos: ";
    cin >> minutos;
    
    if (horas > 0 && horas < 23 && minutos >= 0 && minutos <= 59){
        cout << "Esse horario eh valido, " << horas << "h" << minutos << "m" << endl;
    }else{
        cout << "Esse horario eh invalido." << endl;
    }
    return 0;
}