#include <iostream>
using namespace std;

void sample(char *s = "sem parametros", int i = 0){
    cout << endl << "Primeiro parametro = " << s;
    cout << endl << "Segundo parametro = " << i << endl;
}

int main(){
    sample();
    sample("Um parametro");
    sample("Dois parametros", 10);
    return 0;
}