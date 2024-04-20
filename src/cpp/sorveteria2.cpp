#include <iostream>
using namespace std;

int main (){
    int tipoPicole, quantidade;
    float preco;
    cout << "Ola, cliente! Informe o tipo do picole (1, 2 ou 3): " << endl;
    cin >> tipoPicole;
    cout << "Otimo. Agora informe quantos: " << endl;
    cin >> quantidade;

    if (tipoPicole == 1){
        preco = 0.50 * quantidade;
    }else if (tipoPicole == 2){
        preco = 0.60 * quantidade;
    }else if (tipoPicole == 3){
        preco = 0.75 * quantidade;
    }
    cout << "O valor total da compra eh R$" << preco << endl << "Obrigado por comprar em nossa sorveteria! Volte sempre!";
    return 0;
}