#include <iostream>
using namespace std;

int main (){
    string sol;
    cout << "Hoje tem sol? ";
    cin >> sol ;
    if (sol == "sim"){
        cout << "Vou a praia" << endl;
    }else{
        cout << "Vou ao shopping" << endl;
    }
    return 0;
}