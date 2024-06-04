#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int i;
    vector<string> cities = {"New York", "London", "Sao Paulo", "Paris", "Tokyo", "Dubai"};
    string targetCity;
    bool found = false;
    cout << "Which city do you want to find? ";
    getline(cin, targetCity);
    cout << endl << "Cities List: " << endl;
    for(i = 0; i < cities.size(); i++){
        cout << cities[i] << endl;
        if(cities[i] == targetCity){
            found = true;
        }
    }
    if(found){
        cout << endl << targetCity << " FOUND!" << endl;
    }else{
        cout << endl << targetCity << " NOT FOUND!" << endl;
    }
    return 0;
}