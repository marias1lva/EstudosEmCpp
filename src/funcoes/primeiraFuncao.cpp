#include <iostream>
using namespace std;

//As funções devem ser declaradas (prototipadas) antes do int main.
void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);

int main(){
//As funções devem ser chamadas dentro do int main.
    int res;
    texto();

    soma(15, 5);
    res = soma2(175, 25);

    cout << endl << "Valor de res (soma2): " << res << endl;

    return 0;
}

//As funções devem ser construídas após o int main.

void texto(){ //O tipo void não retorna nada.
    cout << endl << "Aprendendo funcoes!" << endl;
}

void soma(int n1, int n2){
    cout << endl << "Soma dos valores: " << n1 + n2 << endl;
}

int soma2(int n1, int n2){
    //Sempre que o valor de saída for diferente de void, usamos o return.
    return n1 + n2;
}