#include <iostream>
using namespace std;

int main(){
    int mes, placa, finalPlaca;
    cout << "Informe o MES ATUAL: ";
    cin >> mes;
    cout << "Informe os quatro digitos da placa do veiculo: ";
    cin >> placa;
    if(placa % 10 == 1){
        cout << "IPVA DEVE SER PAGO EM: JANEIRO.";
    }else if(placa % 10 == 2){
        cout << "IPVA DEVE SER PAGO EM: FEVEREIRO.";
    }else if(placa % 10 == 3){
        cout << "IPVA DEVE SER PAGO EM: MARCO.";
    }else if(placa % 10 == 4){
        cout << "IPVA DEVE SER PAGO EM: ABRIL.";
    }else if(placa % 10 == 5){
        cout << "IPVA DEVE SER PAGO EM: MAIO.";
    }else if(placa % 10 == 6){
        cout << "IPVA DEVE SER PAGO EM: JUNHO.";
    }else if(placa % 10 == 7){
        cout << "IPVA DEVE SER PAGO EM: JULHO.";
    }else if(placa % 10 == 8){
        cout << "IPVA DEVE SER PAGO EM: AGOSTO.";
    }else if(placa % 10 == 9){
        cout << "IPVA DEVE SER PAGO EM: SETEMBRO.";
    }else if(placa % 10 == 0){
        cout << "IPVA DEVE SER PAGO EM: OUTUBRO.";
    }
    return 0;
}