#include <iostream>
using namespace std;

void soma();
void soma(int n1, int n2);

int main(){
    soma(20, 30);
    soma();
    return 0;
}

void soma(int n1, int n2){
    int re;
    re = n1 + n2;
    cout << endl << "Soma de " << n1 << " com " << n2 << " = " << re << endl;
}

void soma(){
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;
    cout << endl << "Soma de " << n1 << " com " << n2 << " = " << re << endl;
}

//Duas ou mais funções podem ter o mesmo nome desde que tenham argumentos de entrada() diferentes.