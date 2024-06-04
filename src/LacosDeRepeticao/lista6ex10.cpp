#include <iostream>
using namespace std;

int main(){
    int num, i, resultadoFatorial = 1;
    cout << "Digite um numero para ser calculado seu fatorial: ";
    cin >> num;
    for(i = 1; i <= num; i++){
        resultadoFatorial = resultadoFatorial * i;
    }
    cout << "O resultado do fatorial de " << num << " eh: " << resultadoFatorial << "." << endl;
    return 0;
}