#include <iostream>
using namespace std;

int main() {
  int num1, num2, soma;
  cout << "Digite um numero:";
  cin >> num1;
  cout << "Digite outro numero:";
  cin >> num2;
  soma = num1 + num2;
  cout << "A soma de " << num1 << " e " << num2 << " e: " << soma;
  return 0;
}