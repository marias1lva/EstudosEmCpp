#include <iostream>
using namespace std;

int main () {
    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    peso1 = 2;
    peso2 = 3;
    peso3 = 5;
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;
    media = nota1 * peso1 + nota2 * peso2 + nota3 * peso3;
    media = media / 10;
    cout << "A media final das notas eh: " << media << endl;
    return 0;
}