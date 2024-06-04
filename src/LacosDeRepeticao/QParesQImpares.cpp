#include <iostream> 
using namespace std;

int main(){
    int i = 1, x, num, QPares = 0, QImpares = 0;
    cout << "Quantos numeros voce quer analisar? " << endl;
    cin >> x;
    while(i <= x){
        cout << "Digite um numero: ";
        cin >> num;
        if(num % 2 == 0){
            QPares = QPares + 1;
        }else{
            QImpares = QImpares + 1;
        }
        i++;
    }
    cout << "Foram digitados " << QPares << " numeros pares e " << QImpares << " numeros impares." << endl;
    return 0;
}