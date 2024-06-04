#include <iostream>
using namespace std;

int main(){
    int jogadores, i;
    float altura, media, somaAlturas = 0;
    cout << "Informe o numero de jogadores no time: ";
    cin >> jogadores;
    for(i = 1; i <= jogadores; i++){
        cout << "Jogador " << i << " informe sua altura(m): ";
        cin >> altura;
        somaAlturas = somaAlturas + altura;
    }
    media = somaAlturas / jogadores;
    cout << "A media de altura dos jogadores do time eh: " << media << endl;
    return 0;
}