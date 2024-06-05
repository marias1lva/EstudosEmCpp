/*
diagonal principal = i=0 j=0, i=1 j=1, i=2 j=2, i=3 j=3
diagonal secundaria = i=0 j=3, i=1 j=2, i=2 j=1, i=3 j=0
*/
#include <iostream>
using namespace std;

int main(){
    int matriz[4][4], i, j, somatorio = 0; 
    cout << "Digite 16 valores para preencherem a matriz 4x4: " << endl;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cin >> matriz[i][j];
            somatorio = matriz[0][1] + matriz[0][2] + matriz[1][0] + matriz[1][3] + matriz[2][0] + matriz[2][3] + matriz[3][1] + matriz[3][2];
        }
    }
    cout << endl << "Matriz: " << endl;
    for(i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "O somario dos valores que NAO estao nas diagonais principal e secundaria eh: " << somatorio << endl;
    return 0;
}