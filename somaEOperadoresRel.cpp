#include <iostream> 
using namespace std;

int main (){
    float A, B, C;
    cout << "Insira tres numeros: " << endl;
    cin >> A >> B >> C;

    if (A + B > C){
        cout << "A soma de " << A << " e " << B << " eh maior que " << C << endl;
    }else if (A + B < C){
        cout << "A soma de " << A << " e " << B << " eh menor que " << C << endl;
    }else if (A + B == C){
        cout << "A soma de " << A << " e " << B << " eh igual a " << C << endl;
    }

    return 0;
}