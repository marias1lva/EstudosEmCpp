#include <iostream>
using namespace std;

int main(){
    int i = 1, iPos = 0, iNeg = 0, num;
    while (i <= 30){
        cout << "Digite um numero: ";
        cin >> num;
        if (num > 0){
            iPos = iPos + 1;
        }else{
            iNeg = iNeg + 1;
        }
        i++;
    }
    cout << "Foram digitados " << iPos << " numeros POSITIVOS e " << iNeg << " numeros NEGATIVOS. " << endl;
    return 0;
}