#include <iostream>
using namespace std;

int main(){
    int matriz[2][2], i, j;
    cout << "Digite 4 valores para preencher a matriz: " << endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cin >> matriz[i][j];
        }
    }
    cout << endl << "Matriz: " << endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "Matriz TRANSPOSTA: " << endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matriz[j][i] << "\t";
        }
        cout << endl;
    }
    return 0;
}