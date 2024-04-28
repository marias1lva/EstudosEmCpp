#include <iostream>
using namespace std;

int main(){
    float salarioAntes, conta1, conta2, salarioDepois, juros1, juros2;
    cout << "Ola, Joao! Vamos calcular quanto restara do seu salario. Para isso, primeiramente, informe seu salario: ";
    cin >> salarioAntes;
    cout << "Otimo! Agora informe o valor da primeira conta a pagar: ";
    cin >> conta1;
    cout << "Muito bem. Por ultimo, informe o valor da segunda conta a pagar: ";
    cin >> conta2;
    cout << "Como as contas estao atrasadas, um juros de 2% sera aplicado." << endl;
    juros1 = (conta1 * 2) / 100;
    conta1 = conta1 + juros1;
    juros2 = (conta2 * 2) / 100;
    conta2 = conta2 + juros2;
    salarioDepois = salarioAntes - conta1 - conta2;
    cout << "Salario apos pagar contas: R$" << salarioDepois;
    return 0;
}