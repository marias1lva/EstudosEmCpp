#include <iostream> 
using namespace std;

int main (){
    float N;
    cout << "Insira um numero: " << endl;
    cin >> N;

    if (N <= 10){
        cout << "F1";
    }else if (N > 10 && N <= 100){
        cout << "F2";
    }else{
        cout << "F3" << endl;
    }
    
    return 0;
}