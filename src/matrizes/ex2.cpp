#include <iostream>
using namespace std;

int main(){
    int matriz[3][3], i, j, somatorio = 0; //diagonal principal = linha 0 coluna 0, linha 1 coluna 1, linha 2 coluna 2.
    cout << "Digite 9 valores para preencherem a matriz 3x3:" << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> matriz[i][j];
            somatorio = matriz[0][0] + matriz[1][1] + matriz[2][2];
        }
    }
    cout << "Matriz: " << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "O somatorio dos valores da diagonal principal da matriz eh: " << somatorio << endl;
    return 0;
}