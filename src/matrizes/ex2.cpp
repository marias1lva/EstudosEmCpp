#include <iostream>
using namespace std;

int main(){
    int matriz[3][3], i, j, somatorio = 0;
    cout << "Digite 9 valores para preencherem a matriz 3x3:" << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> matriz[i][j];
            somatorio = matriz[1][1] + matriz[2][2] + matriz[3][3];
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