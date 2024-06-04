#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
    int grade;
    string opc;

    start: 

    system ("cls");

    cout << "Your grade: ";
    cin >> grade;

    if (grade >= 90) cout << "You get an A" << endl;
    else if (80 <= grade && grade < 90) cout << "You get a B" << endl;
    else if (70 <= grade && grade < 80) cout << "You get a C" << endl;
    else if (60 <= grade && grade < 70) cout << "You get a D" << endl;
    else cout << "You get an F" << endl;  

    cout << "Other grades? (yes/no)" << endl;
    cin >> opc;

    if (opc == "yes") {
        goto start;
    } 
    return 0;
}