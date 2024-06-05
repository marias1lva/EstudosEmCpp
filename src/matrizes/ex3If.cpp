#include <iostream>
using namespace std;

int main(){
    int matriz[4][4], i, j, somatorio = 0; 
    cout << "Digite 16 valores para preencherem a matriz 4x4: " << endl;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cin >> matriz[i][j];
            if (i != j && i + j != 3){ /*explicacao abaixo*/
                somatorio = somatorio + matriz[i][j];
            }
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
/* EXPLICACAO DO USO DO IF:
    Diagonal Principal: Na diagonal principal de uma matriz, os índices das linhas e colunas são iguais, ou seja, i == j. Por exemplo, em uma matriz 4x4, os elementos da diagonal principal são:
    matriz[0][0]
    matriz[1][1]
    matriz[2][2]
    matriz[3][3]
    
    Diagonal Secundária: Na diagonal secundária de uma matriz 4x4, a soma dos índices das linhas e colunas é igual ao tamanho da matriz menos 1, ou seja, i + j == 3. Por exemplo, os elementos da diagonal secundária são:
    matriz[0][3]
    matriz[1][2]
    matriz[2][1]
    matriz[3][0]

    → i != j: Este trecho verifica se o elemento não está na diagonal principal.
    → i + j != 3: Este trecho verifica se o elemento não está na diagonal secundária.
    → Só somamos matriz[i][j] a somatorio se ambas as condições forem verdadeiras, ou seja, o elemento não está nem na diagonal principal nem na diagonal secundária.
*/