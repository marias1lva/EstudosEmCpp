#include <iostream>
using namespace std;

int main(){
    int matriz[4][4], i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i == j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
    cout << "Matriz identidade de ordem 4: " << endl;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}