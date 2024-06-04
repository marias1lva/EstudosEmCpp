#include <iostream>
using namespace std;

int main(){
    int termo = 3, soma = 0;
    while(termo <= 6561){
        cout << termo << endl;
        soma = soma + termo;
        termo = termo * 3;
    }
    cout << "A soma de todos os termos dessa progressao geometrica eh: " << soma << endl;
    return 0;
}