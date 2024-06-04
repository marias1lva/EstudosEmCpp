#include <iostream>
using namespace std;

int main(){
    float x;
    cout << "Digite um valor para x: ";
    cin >> x;
    if(x <= 1){
        cout << "f(x) = 1";
    }else if(x > 1 && x <= 2){
        cout << "f(x) = 2";
    }else if(x > 2 && x <= 3){
        cout << "f(x) = " << (x * x);
    }else if(x > 3){
        cout << "f(x) = " << (x * x * x);
    }
    return 0;
}