#include <iostream>
using namespace std;

int main (){
    float x, funcao;
    cout << "Insira um valor para x: ";
    cin >> x;

    if (x <= 1){
        funcao = 1;
    }else if (x > 1 && x <= 2){
        funcao = 2;
    }else if (x > 2 && x <= 3){
        funcao = (x * x);
    }else if (x > 3){
        funcao = (x * x * x);
    }
    cout << "f(x) = " << funcao;
    return 0;
}