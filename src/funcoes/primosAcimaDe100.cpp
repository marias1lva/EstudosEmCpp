#include <iostream>
using namespace std;

// Função que verifica se um número é primo
bool ehPrimo(int num) { // retorna true se for primo e false se não for primo
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) { // A função começa verificando se o número num é divisível por 2, e depois por outros números maiores (3, 4, etc.) até a raiz quadrada de num. Se um número é divisível por algum valor acima de sua raiz quadrada, ele já terá sido encontrado como divisível por algum número menor. 
        if (num % i == 0) { // Se num % i == 0, significa que num é divisível por i sem deixar resto, logo, num não é primo (porque encontrou um divisor diferente de 1 e ele mesmo).
            return false;
        }
    }
    return true;
}

// Função que gera e mostra os dez primeiros primos acima de 100
void mostrarPrimos() {
    int contador = 0;
    int num = 101;  // Começamos a busca a partir de 101, já que queremos primos acima de 100

    while (contador < 10) {
        if (ehPrimo(num)) {
            cout << num << " ";
            contador++; // O contador é incrementado em 1 com contador++;, indicando que encontramos mais um primo.
        }
        num++; // O número num é então incrementado com num++;, para que possamos verificar o próximo número na iteração seguinte.
    }
    cout << endl;
}

int main() {
    mostrarPrimos();
    return 0;
}
