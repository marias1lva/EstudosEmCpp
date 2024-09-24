#include <iostream>
using namespace std;

struct horario{
    int hora, min, seg;
};

horario somaHorarios(horario h1, horario h2){
    horario resultado;
    resultado.seg = h1.seg + h2.seg;
    if(resultado.seg >= 60){
        resultado.seg -= 60;
        resultado.min = 1;
    }else{
        resultado.min = 0;
    }
    resultado.min = h1.min + h2.min;
    if(resultado.min >= 60){
        resultado.min -= 60;
        resultado.hora = 1;
    }else{
        resultado.hora = 0;
    }
    resultado.hora = h1.hora + h2.hora;
    return resultado;
}

int main(){
    horario h1, h2, soma;
    cout << "Digite o primeiro horario (hora, minuto, segundo): " << endl;
    cin >> h1.hora >> h1.min >> h1.seg;
    cout << "Digite o segundo horario (hora, minuto, seguindo): " << endl;
    cin >> h2.hora >> h2.min >> h2.seg;
    soma = somaHorarios(h1, h2);
    cout << "Soma dos horarios: " << endl;
    cout << soma.hora << ":" << (soma.min < 10 ? "0" : "") << soma.min << ":" << (soma.seg < 10 ? "0" : "") << soma.seg << endl;
}