#include <iostream>
using namespace std;

int main(){
    int N1, N2;
    cout << "Insira um valor para N1 e um valor para N2: " << endl;
    cin >> N1 >> N2;
    
    if (N1 > N2){
        cout << "O maior numero eh " << N1;
    }else if (N2 > N1){
        cout << "O maior numero eh " << N2;
    }else if (N1 = N2){
        cout << "Os numeros sao iguais. " << endl;
    }

    return 0;
}