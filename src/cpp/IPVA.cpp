#include <iostream>
using namespace std;

int main (){
    int mesAtual, placa, finalPlaca;
    string ipva;
    cout << "Vamos ver em que mes seu IPVA deve ser pago!" << endl;

    while (true){
        cout << "Por favor, informe o numero correspondente ao mes atual (1 a 12): ";
        cin >> mesAtual;
        if (mesAtual >= 1 && mesAtual <= 12){
        break;
        }else{
        cout << "Mes invalido." << endl;
        }   
    }
    
    cout << "Agora informe os quatro digitos da placa do veiculo. ";
    cin >> placa;
    finalPlaca = placa % 10;
    
    if (finalPlaca == 1){
        ipva = "JANEIRO";
    }else if (finalPlaca == 2){
        ipva = "FEVEREIRO";
    }else if (finalPlaca == 3){
        ipva = "MARCO";
    }else if (finalPlaca == 4){
        ipva = "ABRIL";
    }else if (finalPlaca == 5){
        ipva = "MAIO";
    }else if (finalPlaca == 6){
        ipva = "JUNHO";
    }else if (finalPlaca == 7){
        ipva = "JULHO";
    }else if (finalPlaca == 8){
        ipva = "AGOSTO";
    }else if (finalPlaca == 9){
        ipva = "SETEMBRO";
    }else if (finalPlaca == 10){
        ipva = "OUTUBRO";
    }else if (finalPlaca == 11){
        ipva = "NOVEMBRO";
    }else if (finalPlaca == 12){
        ipva = "DEZEMBRO";
    }

    cout << "O IPVA deve ser pago em: " << ipva << endl;
    return 0;
}