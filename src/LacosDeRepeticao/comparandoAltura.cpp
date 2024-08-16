#include <iostream>
using namespace std;

int main(){
    float alturaChico, alturaZe, crescimentoChico, crescimentoZe;
    int anos;
    alturaChico = 1.50;
    alturaZe = 1.10;
    crescimentoChico = 0.02;
    crescimentoZe = 0.03;
    for(anos = 0; alturaChico >= alturaZe; anos++){
        alturaChico = alturaChico + crescimentoChico;
        alturaZe = alturaZe + crescimentoZe;
    }
    cout << "Serao necessarios " << anos << " anos para que Ze seja maior que Chico.";
    return 0;
}