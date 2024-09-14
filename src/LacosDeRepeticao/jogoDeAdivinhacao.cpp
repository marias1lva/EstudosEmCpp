#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    int palpite, numeroSecreto = rand() % 100 + 1;
    do{
        cout << "Digite seu palpite: ";
        cin >> palpite;
        if(palpite > numeroSecreto){
            cout << "Palpite muito alto. Tente novamente. " << endl;
        }else if(palpite < numeroSecreto){
            cout << "Palpite muito baixo. Tente novamente. " << endl;
        }else{
            cout << "Parabens! Voce acertou o numero secreto!" << endl;
        }
    }while(palpite != numeroSecreto);
    //cout << "Parabens! Voce acertou o numero secreto!" << endl;
    return 0;
}