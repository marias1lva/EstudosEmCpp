#include <iostream>
using namespace std;

int main(){
    int i = 1, vezes, menos10 = 0, entre10e15 = 0, mais15 = 0;
    float perc_menos10, perc_entre10e15, perc_mais15; 
    while(i <= 20){
        cout << "Informe quantas vezes voce usou o restaurante da universidade no ultimo mes: ";
        cin >> vezes;
        if(vezes < 10){
            menos10 = menos10 + 1;
        }else if(vezes >= 10 && vezes <= 15){
            entre10e15 = entre10e15 + 1;
        }else if(vezes > 15){
            mais15 = mais15 + 1;
        }
        i++;
    }
    perc_menos10 = (menos10 * 100) / 20;
    perc_entre10e15 = (entre10e15 * 100) / 20;
    perc_mais15 = (mais15 * 100) / 20;
    cout << perc_menos10 << "% dos alunos utilizaram o restaurante menos de 10 vezes." << endl;
    cout << perc_entre10e15 << "% dos alunos utilizaram o restaurante entre 10 e 15 vezes." << endl;
    cout << perc_mais15 << "% dos alunos utilizaram o restaurante mais de 15 vezes." << endl;
    return 0;
}