#include <iostream>
using namespace std;

int main(){
    int lado, i, j;
    cout << "Digite o valor do lado do quadrado (valores entre 1 e 20): ";
    cin >> lado;
    if(lado > 1 && lado < 20){
        for(i = 0; i < lado; i++){
            for(j = 0; j < lado; j++){
                if(i == 0 || i == lado - 1 || j == 0 || j == lado - 1){ 
                    cout << "* ";
                }else{
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }else{
        cout << "O valor deve estar entre 1 e 20.";
    }
    return 0;
}

/* i == 0 verifica se estamos na PRIMEIRA LINHA
   i == lado - 1 verifica se estamos na ÚLTIMA LINHA
   j == 0 verifica se estamos na PRIMEIRA COLUNA
   j == lado - 1 verifica se estamos na ÚLTIMA COLUNA
   se sim, imprime "*", caso contrário imprime " " */