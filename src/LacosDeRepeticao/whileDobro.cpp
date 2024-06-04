#include <iostream>
using namespace std;

int main(){
    int i = 0, num;
    
    while (i <= 10){
        cout << "Digite um numero: ";
        cin >> num;
        cout << "O dobro de " << num << " eh " << (num * 2) << endl;
        i++;
    }
    return 0;
}