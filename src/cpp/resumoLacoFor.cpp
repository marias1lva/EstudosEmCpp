#include <iostream>
using namespace std;

/*for (variável de inicialização; condição; incremento/decremento);
    variável de inicialização: comando de atribuição que inicia uma variável que faz o controle do laço. (ex: cont = 0, cont = 1);
    condição: expressão usada que determinará o final do laço. (ex: cont <= 10);
    incremento: define a variável de controle e muda a cada passada no laço. (ex: cont++, cont+=2, cont--);
*/
//exemplo
int main(){
    int contador;
    for(contador = 1; contador <= 10; contador++){
    cout << contador << endl;
    }
    return 0;
}