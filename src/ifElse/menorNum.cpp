#include <iostream>
using namespace std;

int main (){
    float N1, N2, N3;
    cout << "Insira tres numeros: " << endl;
    cin >> N1 >> N2 >> N3;
    /* 
       N1>N2>N3
       N1>N3>N2
       N2>N1>N3
       N2>N3>N1
       N3>N1>N2
       N3>N2>N1
    */
    if (N1 > N2 && N2 > N3){
        cout << "O menor numero eh: " << N3 << endl;
    }else if (N1 > N3 && N3 > N2){
        cout << "O menor numero eh: " << N2 << endl;
    }else if (N2 > N1 && N1 > N3){
        cout << "O menor numero eh: " << N3 << endl;
    }else if (N2 > N3 && N3 > N1){
        cout << "O menor numero eh: " << N1 << endl;
    }else if (N3 > N1 && N1 > N2){
        cout << "O menor numero eh: " << N2 << endl;
    }else if(N3 > N2 && N2 > N1){
        cout << "O menor numero eh: " << N1 << endl;
    }
    return 0;
}