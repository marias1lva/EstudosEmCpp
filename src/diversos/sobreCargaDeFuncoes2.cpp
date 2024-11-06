#include <iostream>
using namespace std;

int soma(int a, int b){
    return (a + b);
}

int soma(int a, int b, int c){
    return (a + b + c);
}

double soma(double a, double b){
    return (a + b);
}

int main(){
    cout << soma(1, 2) << endl;
    cout << soma(3, 4, 5) << endl;
    cout << soma(6.7, 8.9) << endl;
    return 0;
}