#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 2, termo1 = 0, termo2 = 1, proximoTermo;
    cout << "Digite um numero MAIOR ou IGUAL a 2: ";
    cin >> n;
    cout << "Os " << n << " primeiros termos da sequencia de fibonnaci sao: " << termo1 << " " << termo2 << ", ";
    while(i < n){
        proximoTermo = termo1 + termo2;
        cout << proximoTermo << " ";
        termo1 = termo2;
        termo2 = proximoTermo;
        i++;
    }
    return 0;
}