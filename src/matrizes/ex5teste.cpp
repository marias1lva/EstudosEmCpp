#include <iostream>
using namespace std;

int main() {
    const int LINHAS = 3;
    const int COLUNAS = 4;
    int matriz[LINHAS][COLUNAS];

    // Preenchendo a matriz com números fornecidos pelo usuário
    cout << "Preencha a matriz 3x4 com numeros:" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << "Digite o numero para a posicao (" << i << ", " << j << "): ";
            cin >> matriz[i][j];
        }
    }

    // Exibindo a matriz
    cout << "Matriz preenchida:" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Solicitando um número para buscar na matriz
    int numero;
    cout << "Digite um numero para buscar na matriz: ";
    cin >> numero;

    // Arrays para armazenar as posições encontradas
    int linhas[LINHAS * COLUNAS];
    int colunas[LINHAS * COLUNAS];
    int contador = 0;

    // Buscando o número na matriz e armazenando as posições encontradas
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == numero) {
                linhas[contador] = i;
                colunas[contador] = j;
                contador++;
            }
        }
    }

    // Exibindo as posições encontradas
    if (contador > 0) {
        cout << "Numero " << numero << " encontrado nas seguintes posicoes:" << endl;
        for (int k = 0; k < contador; k++) {
            cout << "(" << linhas[k] << ", " << colunas[k] << ")" << endl;
        }
    } else {
        cout << "Numero " << numero << " nao encontrado na matriz." << endl;
    }

    return 0;
}