// MATRIZ TRANSPOSTA: linhas viram colunas e colunas viram linhas.

#include <iostream>
using namespace std;

int main(){
    int matriz[3][3], mTransposta[3][3], i, j;
    cout << "Digite 9 numeros para preencherem a matriz 3x3:" << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> matriz[i][j];
            mTransposta[j][i] = matriz[i][j];
        }
    }
    cout << endl << "Matriz:" << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "Matriz TRANSPOSTA:" << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << mTransposta[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}