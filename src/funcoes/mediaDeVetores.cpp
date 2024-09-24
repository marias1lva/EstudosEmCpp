#include <iostream>
using namespace std;

float calculaMedia(int vetor[5]){
    float soma = 0;
    for(int i = 0; i < 5; i++){
        soma += vetor[i];
    }
    return soma / 5.0;
}

bool compararMedias(int vetor1[5], int vetor2[5]){
    float media1, media2;
    media1 = calculaMedia(vetor1);
    media2 = calculaMedia(vetor2);
    return media1 == media2;
}

int main(){
    int vetor1[5], vetor2[5], i;
    cout << "Digite 5 valores para preencherem o vetor 1: " << endl;
    for(i = 0; i < 5; i++){
        cin >> vetor1[i];
    }
    cout << endl << "Digite 5 valores para preencherem o vetor 2: " << endl;
    for(i = 0; i < 5; i++){
        cin >> vetor2[i];
    }
    if(compararMedias(vetor1, vetor2)){
        cout << "As medias dos vetores sao iguais.";
    }else{
        cout << "As medias dos vetores sao diferentes.";
    }
    return 0;
}