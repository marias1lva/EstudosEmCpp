#include <iostream>
using namespace std;

struct Data{
    int dia, mes, ano;
};

bool bisexto(int ano){
    if((ano % 4 == 0 && ano % 100 == 0) || (ano % 400 == 0)){
        return true;
    }
    return false;
}

bool dataValida(Data d){
    if(d.mes < 1 || d.mes > 12){
        return false;
    }
    if(d.mes == 1 || d.mes == 3 || d.mes == 5 || d.mes == 7 || d.mes == 8 || d.mes == 10 || d.mes == 12){
        if(d.dia < 1 || d.dia > 31){
            return false;
        }
    }else if(d.mes == 4 || d.mes == 6 || d.mes == 9 || d.mes == 11){
        if(d.dia < 1 || d.dia > 30){
            return false;
        }
    }else if(d.mes == 2){
        if(bisexto(d.ano)){
            if(d.dia < 1 || d.dia > 29){
                return false;
            }
        }else{
            if(d.dia < 1 || d.dia > 28){
                return false;
            }
        }
    }
    if(d.ano < 1){
        return false;
    }
    return true;
}

int main(){
    Data data;
    cout << "Digite a data no formato DD MM AAAA: " << endl;
    cin >> data.dia >> data.mes >> data.ano;
    if(dataValida(data)){
        cout << "A data " << data.dia << "/" << data.mes << "/" << data.ano << " eh valida." << endl;
    }else{
        cout << "A data " << data.dia << "/" << data.mes << "/" << data.ano << " eh invalida." << endl;
    }
    return 0;
}