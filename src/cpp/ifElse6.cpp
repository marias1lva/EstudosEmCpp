#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if(num > 0){
        cout << num << " eh POSITIVO.";
    }else if(num < 0){
        cout << num << " eh NEGATIVO.";
    }else if(num == 0){
        cout << "Zero eh um numero NEUTRO.";
    }
    return 0;
}