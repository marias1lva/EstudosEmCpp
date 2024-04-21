#include <iostream>
using namespace std;

int main (){
    int num;
    cout << "Insira um numero: ";
    cin >> num;
    if (num > 0){
        cout << "Esse numero eh positivo." << endl;
    }else if (num < 0){
        cout << "Esse numero eh negativo." << endl;
    }else if(num == 0){
        cout << "Zero." << endl;
    }
    return 0;
}