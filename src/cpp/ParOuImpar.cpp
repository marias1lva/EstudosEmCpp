#include <iostream>
using namespace std;

int main (){
    int num;
    cout << "Insira um numero: ";
    cin >> num;
    if (num % 2 == 0){
        cout << "O numero informado eh par." << endl;
    }else{
        cout << "O numero informado eh impar." << endl;
    }
    return 0;
}