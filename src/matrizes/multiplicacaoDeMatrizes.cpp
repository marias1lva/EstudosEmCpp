#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, j;
    cout << "Informe o tamanho das matrizes: ";
    cin >> n;

    // Usando std::vector para alocar as matrizes dinamicamente
    vector<vector<int>> matriz1(n, vector<int>(n));
    vector<vector<int>> matriz2(n, vector<int>(n));
    vector<vector<int>> matrizResultante(n, vector<int>(n, 0)); // Inicializada com zeros

    // Preenchimento da PRIMEIRA MATRIZ
    cout << "Digite os valores para preencher a PRIMEIRA MATRIZ: " << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> matriz1[i][j];
        }
    }

    // Preenchimento da SEGUNDA MATRIZ
    cout << "Digite os valores para preencher a SEGUNDA MATRIZ: " << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> matriz2[i][j];
        }
    }

    // Exibição da PRIMEIRA MATRIZ
    cout << "PRIMEIRA MATRIZ: " << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << matriz1[i][j] << "\t";
        }
        cout << endl;
    }

    // Exibição da SEGUNDA MATRIZ
    cout << endl << "SEGUNDA MATRIZ: " << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << matriz2[i][j] << "\t";
        }
        cout << endl;
    }

    // Multiplicação das matrizes
    cout << endl << "PRIMEIRA MATRIZ * SEGUNDA MATRIZ: " << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            matrizResultante[i][j] = 0; // Inicializa o elemento da matriz resultante
            for(int k = 0; k < n; k++) {
                matrizResultante[i][j] += matriz1[i][k] * matriz2[k][j];
            }
            cout << matrizResultante[i][j] << "\t"; // Exibe o resultado fora do loop de multiplicação
        }
        cout << endl;
    }

    return 0;
}