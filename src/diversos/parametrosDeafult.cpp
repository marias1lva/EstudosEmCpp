#include <iostream>
using namespace std;

int teste1(int base = 1, int altura = 2){
    int area;
    area = base * altura;
    return area;
}

int main(){
    int ba = 10, al = 20;
    cout << endl << teste1();
    cout << endl << teste1(10);
    cout << endl << teste1(ba, al);
    return 0;
}