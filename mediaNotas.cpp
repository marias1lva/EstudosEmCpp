#include <iostream>
using namespace std;

int main () {
    float n1, n2, n3, media;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    media = n1 + n2 + n3;
    media = media/3;
    cout << "Sua media foi: " << media;
    return 0;
}