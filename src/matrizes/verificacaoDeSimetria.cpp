/* MATRIZ SIMÉTRICA ij = ji
    Se o elemento 01 = 10, 02 = 20, 12 = 21
*/

#include <iostream>
using namespace std;

int main(){
    int matriz[3][3], i, j, simetria = 1;
    cout << "Digite 9 valores para preencher a matriz: " << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
    cout << "Matriz: " << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i != j && matriz[i][j] != matriz[j][i]){
                simetria = 0;
                break;
            }
        }
        if(simetria == 0){
            break;
        }
    }
    if(simetria == 1){
        cout << "A matriz e simetrica.";
    }else{
        cout << "A matriz nao e simetrica.";
    }
    return 0;
}