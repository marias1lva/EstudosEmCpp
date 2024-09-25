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

int calculaIdade(dataNascimento dataNasc, int anoAtual){
    return anoAtual - dataNasc.ano;
}

bool validaIdade(int idade, dataNascimento data, int anoAtual){
    return calculaIdade(data, anoAtual) > idade;
}

int main(){
    srand(time(0));
    Pessoa pessoas[10];
    int n, anoAtual;
    cout << "Informe o ano atual: ";
    cin >> anoAtual;
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
        cout << ". Idade: " << calculaIdade(pessoas[i].nascimento, anoAtual) << " anos." << endl;
    }
    int idadeRef;
    cout << endl << "Digite uma idade para listar pessoas mais velhas: ";
    cin >> idadeRef;
    cout << endl << "Pessoas mais velhas que " << idadeRef << " anos: " << endl;
    for(int i = 0; i < n; i++){
        if(validaIdade(idadeRef, pessoas[i].nascimento, anoAtual)){
            cout << pessoas[i].nome << " (";
            exibeData(pessoas[i].nascimento);
            cout << ")." << endl;
        }
    }
    return 0;
}