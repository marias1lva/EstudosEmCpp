#include <iostream>
using namespace std;

int main(){
    int anos, dias;
    string nome;
    cout << "Informe seu nome: ";
    cin >> nome;
    cout << "Informe quantos anos voce tem: ";
    cin >> anos;
    dias = anos * 365;
    cout << nome << ", voce tem " << dias << " vividos." << endl;
    return 0;
}