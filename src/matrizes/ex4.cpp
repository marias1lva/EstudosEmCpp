#include <iostream>
using namespace std;

int main(){
    int m1[3][3], m2[3][3], matrizSoma[3][3], i, j;
    cout << "Digite 9 numeros para preencher a primeira matriz 3x3:" << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> m1[i][j];
        }
    }
    cout << endl << "Digite 9 numeros para preencher a segunda matriz 3x3:" << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> m2[i][j];
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrizSoma[i][j] = m1[i][j] + m2[i][j];
        }
    }
    cout << endl << "Matriz 1: " << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << m1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "Matriz 2: " << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << m2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "Matriz SOMA: " << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << matrizSoma[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}