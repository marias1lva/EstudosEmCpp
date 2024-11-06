#include <iostream>
using namespace std;

float media(float n1, float n2){
    return ((n1 + n2) / 2.0);
}

float media(float n1, float n2, float n3){
    return ((n1 + n2 + n3) / 3.0);
}

int main(){
    float nota1, nota2, nota3;
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    cout << "Nota 3: ";
    cin >> nota3;
    cout << endl << "Media com 2 valores: " << media(nota1, nota2) << endl;
    cout << endl << "Media com 3 valores: " << media(nota1, nota2, nota3) << endl;
    return 0;
}