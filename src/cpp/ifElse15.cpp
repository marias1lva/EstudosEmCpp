#include <iostream>
using namespace std;

int main(){
    int codigo, quantidade;
    float totalPedido;
    cout << "CACHORRO QUENTE: " << endl;
    cout << "codigo = 100" << endl;
    cout << "preco = R$3,20" << endl;
    cout << "------------------------" << endl;
    cout << "BAURU SIMPLES: " << endl;
    cout << "codigo = 101" << endl;
    cout << "preco = R$3,30" << endl;
    cout << "------------------------" << endl;
    cout << "BAURU COM OVO: " << endl;
    cout << "codigo = 102" << endl;
    cout << "preco = R$3,50" << endl;
    cout << "------------------------" << endl;
    cout << "HAMBURGUER: " << endl;
    cout << "codigo = 103" << endl;
    cout << "preco = R$3,20" << endl;
    cout << "------------------------" << endl;
    cout << "Digite o codigo do produto: ";
    cin >> codigo;
    cout << "Digite a quantidade: ";
    cin >> quantidade;
    cout << "===================================" << endl;
    if(codigo == 100){
        totalPedido = quantidade * 3.20;
        if(quantidade >= 2){
        cout << "Pedido: " << quantidade << " cachorros quentes." << endl;
        cout << "Total do pedido: R$" << totalPedido;
        }else{
            cout << "Pedido: " << quantidade << " cachorro quente." << endl;
            cout << "Total do pedido: R$" << totalPedido;
        }
    }else if(codigo == 101){
        totalPedido = quantidade * 3.30;
        if(quantidade >= 2){
        cout << "Pedido: " << quantidade << " baurus simples." << endl;
        cout << "Total do pedido: R$" << totalPedido;
        }else{
            cout << "Pedido: " << quantidade << " bauru simple." << endl;
            cout << "Total do pedido: R$" << totalPedido;
        }
    }else if(codigo == 102){
        totalPedido = quantidade * 3.50;
        if(quantidade >= 2){
        cout << "Pedido: " << quantidade << " baurus com ovo." << endl;
        cout << "Total do pedido: R$" << totalPedido;
        }else{
            cout << "Pedido: " << quantidade << " bauru com ovo." << endl;
            cout << "Total do pedido: R$" << totalPedido;
        }
    }else if(codigo == 103){
        totalPedido = quantidade * 3.20;
        if(quantidade >= 2){
        cout << "Pedido: " << quantidade << " hamburguers." << endl;
        cout << "Total do pedido: R$" << totalPedido;
        }else{
            cout << "Pedido: " << quantidade << " hamburguer." << endl;
            cout << "Total do pedido: R$" << totalPedido;
        }
    }else{
        cout << "DIGITE UM CODIGO VALIDO!";
    }
    return 0;
}