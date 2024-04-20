#include <iostream> 
using namespace std;

int main (){
    float totalVendas, venda1, venda2, venda3, comissao1, comissao2, comissao3;
    string corretor1, corretor2, corretor3;
    cout << "Corretor 1, por gentileza, informe seu nome e o valor de sua venda: " << endl;
    cin >> corretor1 >> venda1;
    cout << endl << "Corretor 2, por gentileza, informe seu nome e o valor de sua venda: " << endl;
    cin >> corretor2 >> venda2;
    cout << endl << "Corretor 3, por gentileza, informe seu nome e o valor de sua venda: " << endl;
    cin >> corretor3 >> venda3;
    totalVendas = venda1 + venda2 + venda3;

    if (venda1 > 50000){
        comissao1 = (12 * venda1) / 100;
    }else if (venda1 >= 30000 || venda1 <= 50000){
        comissao1 = (9.5 * venda1) / 100;
    }else{
        comissao1 = (7 * venda1) / 100;
    }

    if (venda2 > 50000){
        comissao2 = (12 * venda2) / 100;
    }else if (venda2 >= 30000 || venda2 <= 50000){
        comissao2 = (9.5 * venda2) / 100;
    }else{
        comissao2 = (7 * venda2) / 100;
    }

    if (venda3 > 50000){
        comissao3 = (12 * venda3) / 100;
    }else if (venda3 >= 30000 || venda3 <= 50000){
        comissao3 = (9.5 * venda3) / 100;
    }else{
        comissao3 = (7 * venda3) / 100;
    }

    cout << endl << "Corretor 1: " << corretor1 << endl << "Venda: R$" << venda1 << endl << "Comissao: R$" << comissao1 << endl;
    cout << endl << "Corretor 2: " << corretor2 << endl << "Venda: R$" << venda2 << endl << "Comissao: R$" << comissao2 << endl;
    cout << endl << "Corretor 3: " << corretor3 << endl << "Venda: R$" << venda3 << endl << "Comissao: R$" << comissao3 << endl;
    cout << endl << "Total de vendas da empresa: R$" << totalVendas << endl;
    cout << endl << "Agradecemos sua colaboracao mensal! " << endl;

    return 0;
}