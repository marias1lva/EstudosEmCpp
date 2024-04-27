#include <iostream> 
using namespace std;

int main(){
    int i = 1;
    int num, negativo = 0, positivo = 0;
    while(i <= 30){
        cout << "Digite um numero: ";
        cin >> num;
        if(num > 0){
            positivo = positivo + 1;
        }else{
            negativo = negativo + 1;
        }
        i++;
    }
    cout << "Foram digitados " << positivo << " numeros POSITIVOS e " << negativo << " numeros NEGATIVOS." << endl;
    return 0;
}