#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while (i >=1 && i <=49){
        if (i % 2 != 0){
            cout << i << endl;
        }
        i++;
    }
    return 0;
}