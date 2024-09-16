#include <iostream>
using namespace std;

float calcula(float a, float b){
    return a + b;
    return a / b;
    return a * b;
}

int main(){
    float x = 5, y = 2;
    cout << "Resultado = " << calcula(x, y);
    return 0;
}

// Retorna o primeiro return que apareceu