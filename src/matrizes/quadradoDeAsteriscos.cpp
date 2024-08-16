#include <iostream>
using namespace std;

int main(){
    int lado, i, j;
    cout << "Digite o valor do lado do quadrado (valores entre 1 e 20): ";
    cin >> lado;
    if(lado >= 1 && lado <= 20){
        for(i = 1; i <= lado; i++){
            for(j = 1; j <= lado; j++){
                cout << "*";
            }
            cout << endl;
        }
    }else{
        cout << "O valor deve estar entre 1 e 20.";
    }
    return 0;
}