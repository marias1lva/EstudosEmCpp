#include <iostream>
using namespace std;

void castigo(int N){
    for(int i = 0; i < N; i++){
        cout << "Nao vou colar na prova!" << endl;
    }
}

int main(){
    int N;
    cout << "Digite um valor para N: ";
    cin >> N;
    castigo(N);
    return 0;
}