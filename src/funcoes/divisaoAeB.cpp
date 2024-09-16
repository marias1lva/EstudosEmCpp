#include <iostream>
using namespace std;

float divide(float a, float b){
    return a/b;
}
int main(){
    int a = 10, b = 5;
    cout << "Resultado a / b = " << divide(a, b);
    cout << endl << "Resultado b / a = " << divide(b, a);
    return 0;
}