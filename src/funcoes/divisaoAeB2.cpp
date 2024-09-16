#include <iostream>
using namespace std;

float divide(float b, float a){
    return a/b;
}
int main(){
    int a = 10, b = 5;
    cout << "Resultado = " << divide(a, b);
    cout << endl << "Resultado = " << divide(b, a);
    return 0;
}