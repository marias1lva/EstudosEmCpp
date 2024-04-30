#include <iostream>
using namespace std;

int main(){
    float N1, N2;
    cout << "Digite um numero: ";
    cin >> N1;
    cout << "Digite outro numero: ";
    cin >> N2;
    if(N1 > N2){
        cout << "O maior numero eh " << N1;
    }else if(N2 > N1){
        cout << "O maior numero eh " << N2;
    }else if(N1 = N2){
        cout << N1 << " e " << N2 << " sao iguais.";
    }
    return 0;
}