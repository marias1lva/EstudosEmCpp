#include <iostream>
using namespace std;

int y = 1;
int x = 4;

void primeiro(){
    static int x = 23;
    cout << endl << x;
    x++;
    cout << endl << x;
}

void segundo(){
    cout << endl << x;
    cout << endl << y;
}

void terceiro(int x, int &y){
    x *= 2;
    y *= 3;
}

int main(){
    int y = 2;
    int x = 3;
    cout << endl << y;
    {
        int x = 10; 
        cout << endl << x;
        cout << endl << y;
    }
    primeiro();
    segundo();
    terceiro(x, y);
    primeiro();
    cout << endl << x;
    cout << endl << y;
    return 0;
}