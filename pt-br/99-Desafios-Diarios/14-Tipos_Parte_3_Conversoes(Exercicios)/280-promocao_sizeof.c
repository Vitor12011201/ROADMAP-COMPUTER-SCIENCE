/* Objetivo: Capturar o exato momento em que o compilador transforma um char em int no meio de uma operação.
Instruções:
1. Declare duas variáveis: char a = 5; e char b = 10;.
2. Imprima o tamanho de uma delas isolada usando sizeof(a). (Deve dar 1 byte).
3. Agora, imprima o tamanho da soma delas: sizeof(a + b).
Reflexão: Por que o tamanho da soma deu 4 bytes (ou o tamanho do int no seu sistema) se as duas variáveis originais gastavam apenas 1 byte cada? Escreva a resposta no comentário.*/
/* Resposta:
Mesmo que a e b sejam variáveis do tipo char e ocupem apenas 1 byte cada,
quando elas participam de uma operação aritmética como a + b, o C aplica
uma regra chamada promoção inteira.

Isso significa que valores menores que int, como char e short, são
promovidos para int antes da operação ser realizada.
Então, em a + b, o compilador não soma dois char diretamente.

Ele primeiro trata a e b como int, faz a soma como int, e por isso
sizeof(a + b) mostra o tamanho de um int, geralmente 4 bytes.
*/


#include <stdio.h>

int main()
{
    char a = 5;
    char b = 10;

    printf("sizeof(a): %zu byte\n", sizeof(a));
    printf("sizeof(a + b): %zu bytes\n", sizeof(a + b));

    return 0;
}
