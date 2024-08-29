#include <iostream>
using namespace std;

int main(){
    int matriz[3][3], somaLinhas[3] = {0}, somaColunas[3] = {0}, i, j;
    cout << "Digite 9 valores para preencher a matriz: " << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            somaLinhas[i] += matriz[i][j]; // soma os valores da linha i
            somaColunas[j] += matriz[i][j]; // soma os valores da coluna j
        }
    }
    cout << endl << "Matriz 3x3: " << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "Soma de cada LINHA: " << endl;
    for(i = 0; i < 3; i++){
        cout << "Linha " << i << " = " << somaLinhas[i] << endl; 
    }
    cout << endl << "Soma de cada COLUNA: " << endl;
    for(j = 0; j < 3; j++){
        cout << "Coluna " << j << " = " << somaColunas[j] << endl;
    }
    return 0;
}