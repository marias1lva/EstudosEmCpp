#include <iostream>
using namespace std;

void multiplicacaoMatriz(int matriz[6][6]){
   for(int i = 0; i < 6; i++){
    int diagonal = matriz[i][i];
    for(int j = 0; j < 6; j++){
        matriz[i][j] *= diagonal;
    }
   }
}

void imprimeMatriz(int matriz[6][6]){
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
    int matriz[6][6];
    cout << "Digite 36 valores para preencher a matriz: " << endl;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cin >> matriz[i][j];
        }
    }
    cout << "MATRIZ: " << endl;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    multiplicacaoMatriz(matriz);
    cout << endl << "Matriz alterada: " << endl;
    imprimeMatriz(matriz);
    return 0;
}