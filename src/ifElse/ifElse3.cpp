#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if (num % 2 == 0){
        cout << num << " eh PAR.";
    }else{
        cout << num << " eh IMPAR.";
    }
    return 0;
}