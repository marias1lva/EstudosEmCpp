#include <iostream>
using namespace std;

int main(){
    int matriz[3][5], i, j;
    cout << "Digite 15 numeros para preencherem a matriz 3x5:" << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] > 100){
                matriz[i][j] = 0;
            }
        }
    }
    cout << endl << "Resultado da matriz:" << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}