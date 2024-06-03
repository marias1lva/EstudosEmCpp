#include <iostream>
using namespace std;

int main(){
    int i, vGabarito[13], vResposta[13], numApostadores;
    cout << "Digite os 13 resultados do gabarito: " << endl;
    for(i = 0; i < 13; i++){
        cin >> vGabarito[i];
    }
    cout << endl << "Digite o numero de apostadores: ";
    cin >> numApostadores;
    for(i = 0; i < numApostadores; i++){
        int numCartao;
        cout << "Digite o numero do cartao do apostador " << i + 1 << ":";
        cin >> numCartao;
        cout << "Digite as 13 respostas do apostador " << numCartao << ":" << endl;
        for(int j = 0; j < 13; j++){
            cin >> vResposta[j];
        }
        int acertos = 0;
        for(int j = 0; j < 13; j++){
        if(vResposta[j] == vGabarito[j]){
            acertos++;
        }
        }
        cout << "Apostador " << numCartao << " teve " << acertos << " acertos." << endl;
        if(acertos == 13){
            cout << "GANHADOR!! PARABENS!!";
        }
    }
    return 0;
}