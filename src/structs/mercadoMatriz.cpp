#include <iostream>
using namespace std;

struct Mercado{
    int codigo;
    float preco;
    string nomeDoProduto;
};

int main(){
    Mercado produtos[2][2]; // matriz 'produtos' do "tipo" 'Mercado'
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Codigo: ";
            cin >> produtos[i][j].codigo;
            cout << "Nome do produto: ";
            cin >> produtos[i][j].nomeDoProduto;
            cout << "Preco: ";
            cin >> produtos[i][j].preco;
        }
    }
    /*cout << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << produtos[i][j].codigo << "\t";
            cout << produtos[i][j].nomeDoProduto << "\t";
            cout << produtos[i][j].preco << "\t";
        }
        cout << endl;
    }*/
    return 0;
}