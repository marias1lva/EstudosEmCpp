#include <iostream>
using namespace std;

int main(){
    int matricula;
    float nota1, nota2, nota3, mediaFinal;
    int totalAlunos = 0, totalAprovados = 0, totalReprovados = 0;
    while(true){
        cout << "Digite matricula = 9999 para sair do programa." << endl;
        cout << "Informe o numero da matricula: ";
        cin >> matricula;
        if (matricula == 9999){
            break;
        }
        cout << "Informe a primeira, a segunda e a terceira nota: " << endl;
        cin >> nota1 >> nota2 >> nota3;
        mediaFinal = (nota1 * 2 + nota2 * 3 + nota3 * 4) / 9;
        if(mediaFinal >= 5){
            cout << "Matricula: " << matricula << ". Media final: " << mediaFinal << "." << " APROVADO!"<< endl;
            totalAprovados = totalAprovados + 1;
        }else{
            cout << "Matricula: " << matricula << ". Media final: " << mediaFinal << "." << " REPROVADO!" << endl;
            totalReprovados = totalReprovados + 1;
        }
        totalAlunos++;
    }
    cout << "Total de alunos: " << totalAlunos << endl;
    cout << "Total de alunos APROVADOS: " << totalAprovados << endl;
    cout << "Total de alunos REPROVADOS: " << totalReprovados << endl;
    return 0;
}