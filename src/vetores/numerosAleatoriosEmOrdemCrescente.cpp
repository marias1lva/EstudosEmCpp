#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int vetor[100], i, j, temp;
    cout << "Vetor desordenado: ";
    for(i = 0; i < 100; i++){
        vetor[i] = rand() % 1000; // gera um número aleatório e atribui ao vetor na posição i
        cout << vetor[i] << endl;
    }
    // algoritmo de ordenação Bubble Sort para ordenar o vetor em ordem crescente
    for(i = 0; i < 99; i++){ // loop externo para controlar o número de passagens
        for(j = 0; j < 99; j++){ // loop interno para comparar os elementos adjacentes 
            if(vetor[j] > vetor[j + 1]){ // verifica se o elemento atual é maior que o próximo
                temp = vetor[j]; // armazena o valor atual em uma variável temporária
                vetor[j] = vetor[j + 1]; // substitui o valor atual pelo valor do próximo elemento
                vetor[j + 1] = temp; // substitui o valor do próximo elemento pelo valor armazenado na variável temporária
            }
        }
    }
    cout << endl << "Vetor ordenado em ordem crescente: " << endl;
    for(i = 0; i < 100; i++){
        cout << vetor[i] << endl;
    }
    return 0;
}