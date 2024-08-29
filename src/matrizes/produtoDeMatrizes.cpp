#include <iostream>
using namespace std;

int main(){
    int matriz1[2][2], matriz2[2][2], matrizResultado[2][2], i, j, k;
    cout << "Digite 4 valores para a primeira matriz: " << endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cin >> matriz1[i][j];
        }
    }
    cout << endl << "Digite 4 valores para a segunda matriz: " << endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cin >> matriz2[i][j];
        }
    }
    cout << endl << "Matriz 1: " << endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matriz1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "Matriz 2: " << endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matriz2[i][j] << "\t";
        }
        cout << endl;
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            matrizResultado[i][j] = 0;
            for(k = 0; k < 2; k++){
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    cout << endl << "Matriz resultante do produto das duas matrizes: " << endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matrizResultado[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}