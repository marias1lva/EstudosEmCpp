#include <iostream>
using namespace std;

int main(){
    int i;
    unsigned long long int totalGraos = 0, graosCasa = 1;
    for(i = 1; i <= 64; i++){
        totalGraos = totalGraos + graosCasa;
        cout << "Casa: " << i << " = Graos: " << graosCasa << endl;
        graosCasa = graosCasa * 2;
    }
    cout << "Total de graos: " << totalGraos << endl;
    return 0;
}