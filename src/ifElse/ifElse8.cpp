#include <iostream>
using namespace std;

int main(){
    float N1, N2, N3;
    cout << "Digite tres valores, um para N1, um para N2 e um para N3: " << endl;
    cin >> N1 >> N2 >> N3;
    if (N1 > N2 && N2 > N3){
        cout << "O menor numero eh " << N3;
    }else if(N1 > N3 && N3 > N2){
        cout << "O menor numero eh " << N2;
    }else if(N2 > N1 && N1 > N3){
        cout << "O menor numero eh " << N3;
    }else if(N2 > N3 && N3 > N1){
        cout << "O menor numero eh " << N1;
    }else if(N3 > N1 && N1 > N2){
        cout << "O menor numero eh " << N2;
    }else if(N3 > N2 && N2 > N1){
        cout << "O menor numero eh " << N1;
    }
    return 0;
}