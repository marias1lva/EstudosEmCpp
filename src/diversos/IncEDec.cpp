#include <iostream>
using namespace std;

int main (){
    int x = 10, y = 5, z = 2, w = 3, a = 12;
    x = x + 1;  //forma basica (x=10+1)
    cout << x << endl;
    y+=5; //forma "reduzida" (y=5+5)
    cout << y << endl;
    z++; //soma apenas 1 (z=2+1)
    cout << z << endl;
    w*=2; //as estruturas sao as mesmas para todas as operacoes (w=3*2)
    cout << w << endl;
    a-=3; //(a=12-3)
    cout << a << endl;
    return 0;
}