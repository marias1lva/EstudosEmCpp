#include <iostream>
using namespace std;

int main(){
    int matriz[3] /*linhas*/ [3] /*colunas*/ , i, j; //matriz com 3 linhas e 3 colunas, matriz 3x3
    cout << "Digite 9 numeros para preencherem a matriz 3x3: " << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
    cout << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}