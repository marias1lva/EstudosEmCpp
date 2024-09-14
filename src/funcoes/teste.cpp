#include <iostream>
using namespace std;

struct teste {
    int a, b, res;
};
teste passagem_referencia (teste &y){
    y.a = y.a + y.b;
    return (y);
}
void imprime (teste y){
    cout << y.a << "\t" << y.b;
}
int main(){
    teste x;
    x.a = 2;
    x.b = 4;
    imprime(passagem_referencia(x));
    return 0;
}