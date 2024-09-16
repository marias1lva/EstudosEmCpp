#include <iostream>
using namespace std;

int soma(int a, int b){
    return a + b;
}

int main(){
    int a = 5, b = 6;
    cout << a << " + " << b << " = " << soma(a, b);
    return 0;
}