#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 49){
        if (i % 2 != 0){
            cout << i << endl;
        } 
        i++;
    }
}
/* ou 
    int main(){
        int i = 1;
        while(i <= 49){
            cout << i << endl;
            i = i + 2;
        }
        return 0;
    }*/