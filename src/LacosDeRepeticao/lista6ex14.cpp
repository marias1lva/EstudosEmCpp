#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, i;
    double E = 1, fatorial = 1;
    cout << "Insira um valor para n: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        fatorial = fatorial * i;
        E = E + 1 / fatorial;
    }
    cout << fixed << setprecision(2);
    cout << "E = " << E << endl;
    return 0;
}