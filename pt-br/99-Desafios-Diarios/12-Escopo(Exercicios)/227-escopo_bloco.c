/* Objetivo: Fixar a diferença entre variáveis locais e de bloco aninhado
1. Escreva um programa que declare:
2. Uma variável int x = 10 dentro da função main.
3. Dentro de um bloco { } (pode ser um if (1) ou apenas chaves soltas), declare outra variável int x = 20.
4. Imprima o valor de x dentro do bloco e depois fora do bloco (após o fechamento das chaves).
5. Explique (em comentário) por que os valores são diferentes.
Resposta: O x dentro do bloco if possui escopo local ao bloco,
por isso ele vale 20 apenas dentro das chaves.
Já o x declarado na função main possui escopo local da função,
e continua valendo 10 fora do bloco.
A variável interna "esconde" temporariamente a variável externa.*/

#include <stdio.h>

int main() {

    int x = 10;

    if (1) {

        int x = 20;

        printf("Valor do X dentro do bloco (Escopo): %d\n", x);
        printf("\n");

    }

    printf("Valor do X fora do bloco (Escopo): %d\n", x);

    return 0;

}