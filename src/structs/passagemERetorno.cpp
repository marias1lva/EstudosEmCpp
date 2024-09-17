#include <iostream>
using namespace std;

struct teste{
    int a, b;
}; // Define uma estrutura chamada teste que contém dois membros: a e b, ambos do tipo int.

teste passagem_referencia(teste &y){ // Parâmetro teste &y: Recebe uma referência para um objeto do tipo teste. Isso significa que qualquer modificação feita em y dentro da função afeta diretamente o objeto original passado para a função.
    y.a = y.a + y.b; // Modificação: A linha y.a = y.a + y.b; altera o valor de a dentro do objeto referenciado. O valor de a será atualizado para ser a soma de a e b.
    return (y); // Retorno: A função retorna o objeto y, que agora tem a atualizado.
}

void imprime (teste y){ // Parâmetro teste y: Recebe uma cópia do objeto do tipo teste. Modificações feitas em y dentro dessa função não afetam o objeto original.
    cout << y.a << "\t" << y.b; // Impressão: A função imprime os valores de a e b do objeto recebido.
}

int main(){
    teste x; // Criação do Objeto x: Um objeto x do tipo teste é criado e inicializado com a = 2 e b = 4.
    x.a = 2; 
    x.b = 4;
    imprime(passagem_referencia(x)); // Chamada de passagem_referencia(x): O objeto x é passado para a função passagem_referencia, que altera a dentro de x. Com x.a inicialmente sendo 2 e x.b sendo 4, a expressão y.a = y.a + y.b resulta em x.a = 2 + 4, ou seja, x.a se torna 6. A função retorna o objeto x modificado.
    // Chamada de imprime: O objeto retornado por passagem_referencia(x) (que agora tem a = 6 e b = 4) é passado para a função imprime. Como a função imprime recebe uma cópia do objeto, ela imprime os valores 6 e 4.
    return 0;
}