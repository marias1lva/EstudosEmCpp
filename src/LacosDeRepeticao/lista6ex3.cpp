#include <iostream>
using namespace std;

int main(){
    int i;
    for(i = 1000; i <= 1999; i++){
        if(i % 11 == 5){
            cout << i << endl;
        }
    }
    return 0;
}