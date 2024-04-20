#include <iostream>
using namespace std;

int main (){
    int grade;
    char letterGrade;
    cout << "Your Grade: ";
    cin >> grade;

    letterGrade = (grade >= 90) ? 'A' : (grade >= 80) ? 'B' : (grade >= 70) ? 'C' : (grade >= 60) ? 'D' : 'F';
    cout << "Final Grade: " << letterGrade << endl;
    return 0;
}




 