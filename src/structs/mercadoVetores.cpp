#include <iostream>
#include <stdio.h>
using namespace std;

struct Mercado{
    int codigo;
    float preco;
    string nomeDoProduto;
};

int main(){
    Mercado produtos[5]; // vetor 'produtos' do "tipo" 'Mercado'
    for(int i= 0; i < 5; i++){
        cout << "Codigo: ";
        cin >> produtos[i].codigo;
        cout << "Produto: ";
        cin >> produtos[i].nomeDoProduto;
        cout << "Preco: ";
        cin >> produtos[i].preco;
    }
    return 0;
}