#include <iostream>
#include <stdio.h>
using namespace std;

struct Mercado{
    int codigo;
    float preco;
    string nomeDoProduto;
};

int main(){
    Mercado prateleira1; // variável 'prateleira1' do "tipo" 'Mercado'
    cout << "Codigo: ";
    cin >> prateleira1.codigo;
    cin.ignore();
    cout << endl << "Nome do produto: ";
    cin >> prateleira1.nomeDoProduto;
    cout << endl << "Preco: ";
    cin >> prateleira1.preco;
    return 0;
}