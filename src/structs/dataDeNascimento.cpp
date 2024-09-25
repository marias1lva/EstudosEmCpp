#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct dataNascimento{
    int dia, mes, ano;
};

struct Pessoa{
    string nome;
    dataNascimento nascimento;
};

void criaData(dataNascimento &D){
    D.mes = 1 + (rand() % 12);
    D.ano = 1940 + (rand() % 74);
    D.dia = 1 + (rand() % 30);
}

void exibeData(dataNascimento data){
    cout << data.dia << "/" << data.mes << "/" << data.ano;
}

int main(){
    srand(time(0));
    Pessoa pessoas[10];
    int n;
    cout << "Quantas pessoas deseja cadastrar? (valor maximo de 10 pessoas) ";
    cin >> n;
    if(n > 10){
        cout << "O numero maximo permitido eh 10. O valor sera ajustado para 10.";
        n = 10;
    } 
    for(int i = 0; i < n; i++){
        cout << "Digite o nome da " << i + 1 << " pessoa: ";
        cin >> pessoas[i].nome;
        criaData(pessoas[i].nascimento);
    }
    cout << endl << "Informacoes das pessoas cadastradas: " << endl;
    for(int i = 0; i < n; i++){
        cout << "Nome: " << pessoas[i].nome << ". Data de nascimento: ";
        exibeData(pessoas[i].nascimento);
        cout << endl;
    }
    return 0;
}