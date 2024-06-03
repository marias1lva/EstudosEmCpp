#include <iostream>
using namespace std;

int main(){
    int i, alunosAcima = 0;
    float nota[20], media, somaNotas = 0;
    for(i = 0; i < 20; i++){
        cout << "Digite a " << i + 1 << " nota: ";
        cin >> nota[i];
        somaNotas = somaNotas + nota[i];
    }
    media = somaNotas / 20;
    cout << "A media de notas da turma eh: " << media << endl;
    for(i = 0; i < 20; i++){
        if(nota[i] > media){
        alunosAcima++;
        }
    }    
    cout << alunosAcima << " alunos ficaram acima da media.";
    return 0;
}