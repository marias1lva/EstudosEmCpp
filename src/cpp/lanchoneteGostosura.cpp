#include <iostream>
using namespace std;

int main(){
    float queijo = 100, presunto = 50, hamburguer = 100, qtdeSanduiche;
    cout << "Quantos sanduiches serao feitos? ";
    cin >> qtdeSanduiche;
    queijo = (queijo * qtdeSanduiche) / 1000; 
    presunto = (presunto * qtdeSanduiche) / 1000;
    hamburguer = (hamburguer * qtdeSanduiche) / 1000;
    cout << "Para fazer " << qtdeSanduiche << " sanduiches, serao necessarios: " << endl;
    cout << "QUEIJO: " << queijo << "kg." << endl;
    cout << "PRESUNTO: " << presunto << "kg." << endl;
    cout << "HAMBURGUER: " << hamburguer << "kg." << endl;
    return 0;
}