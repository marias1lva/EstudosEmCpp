#include <iostream>
#include <stdlib.h>
using namespace std;

// palavra secreta = armazena a palavra
// letra = armazena as letras digitadas (alternativas)
// letra desvendada = armazena a palavra conforme é desvendada
int main(){
    char palavraSecreta[30], letra[1], letraDesvendada[30];
    int tamanho, i, chances, acertos;
    bool acerto = false; // verifica se a letra digitada é certa ou errada

    chances = 6;
    tamanho = 0;
    i = 0;
    acertos = 0;

    cout << "Escondido do seu adversario, digite a palavra secreta: ";
    cin >> palavraSecreta;
    system("cls"); // limpa a tela

    while (palavraSecreta[i] != '\0') { // analisando o tamanho da palavra
        i++;
        tamanho++;
    }

    for(i = 0; i < 30; i++){
        letraDesvendada[i] = '-';
    }

    while(chances > 0 && acertos < tamanho){
        cout << "Voce possui " << chances << " chances." << endl;
        cout << "Palavra secreta: ";
        for(i = 0; i < tamanho; i++){
            cout << letraDesvendada[i];
        }
        cout << endl << endl << "Digite uma letra: ";
        cin >> letra[0];
        for(i = 0; i < tamanho; i++){
            if(palavraSecreta[i] == letra[0]){
                acerto = true;
                letraDesvendada[i] = palavraSecreta[i];
                acertos++;
            }
        }
        if(!acerto){
            chances--;
        }
        acerto = false;
        system("cls");
    }
    
    if(acertos == tamanho){
        cout << endl << endl << "Parabens!! Voce venceu!" << endl;
    }else{
        cout << endl << endl << "Que pena, voce perdeu :( . " << endl;
    }

    system("pause");
    return 0;
}