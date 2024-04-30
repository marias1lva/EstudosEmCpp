#include <iostream>
using namespace std;

int main(){
    char letra;
    cout << "Digite uma letra (minuscula, ex: a, m ,l): ";
    cin >> letra;
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        cout << "A letra " << letra << " eh uma VOGAL.";
    }else{
        cout << "A letra " << letra << " eh uma CONSOANTE.";
    }
    return 0;
}