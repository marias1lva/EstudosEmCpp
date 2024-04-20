#include <iostream>
using namespace std;

int main (){
    float N1, N2, N3;
    cout << "Insira tres numeros: " << endl;
    cin >> N1 >> N2 >> N3;

    /* N1>N2>N3
       N1>N3>N2
       N2>N1>N3
       N2>N3>N1
       N3>N1>N2
       N3>N2>N1
    */
   
    if (N1 > N2 && N2 > N3){
        cout << N3 << " " << N2 << " " << N1 << endl;
    }else if (N1 > N3 && N3 > N2){
        cout << N2 << " " << N3 << " " << N1 << endl;
    }else if (N2 > N1 && N1 > N3){
        cout << N3 << " " << N1 << " " << N2 << endl;
    }else if (N2 > N3 && N3 > N1){
        cout << N1 << " " << N3 << " " << N2 << endl; 
    }else if (N3 > N1 && N1 > N2){
        cout << N2 << " " << N1 << " " << N3 << endl;
    }else if (N3 > N2 && N2 > N1){
        cout << N1 << " " << N2 << " " << N3 << endl;
    }

    return 0;
}