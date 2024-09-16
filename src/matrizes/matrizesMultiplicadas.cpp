#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Digite o tamanho das matrizes quadradas: ";
    cin >> n;
    int matriz1[n][n], matriz2[n][n], matrizResultante[n][n], i, j;
    cout << endl << "Digite " << n * n << " elementos para preencher a matriz 1: " << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> matriz1[i][j];
        }
    }
    cout << endl << "Digite " << n * n << " elementos para preencher a matriz 2: " << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> matriz2[i][j];
        }
    }
    cout << endl << "MATRIZ 1: " << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << matriz1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "MATRIZ 2: " << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << matriz2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "MATRIZ 1 * MATRIZ 2: " << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            matrizResultante[i][j] = 0;
            for(int k = 0; k < n; k++){
                matrizResultante[i][j] += matriz1[i][k] * matriz2[k][j];
            }
            cout << matrizResultante[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}