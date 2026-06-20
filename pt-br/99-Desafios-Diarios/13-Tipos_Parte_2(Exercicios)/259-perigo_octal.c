/* Objetivo: Ver na prática como o zero à esquerda altera drasticamente o valor de uma variável.
Instruções:
1. Declare int comum = 50;
2. Declare int perigoso = 050;
3. Imprima ambos usando o especificador %d (decimal)
Pergunta: Escreva no comentário por que o perigoso não imprimiu 50, mas sim 40. */
/*
Resposta: O valor "050" não é interpretado como cinquenta em C.
Quando um número inteiro é escrito com zero à esquerda, o compilador entende que ele está em base octal (base 8).
Assim:

050 (octal) = 5 × 8¹ + 0 × 8⁰
            = 40 + 0
            = 40 (decimal)

Por isso a variável "perigoso" imprime 40 em vez de 50.
Já "50" é interpretado normalmente em decimal (base 10), mantendo o valor 50.
*/

#include <stdio.h>

int main()
{

    int comum = 50;

    int perigoso = 050;

    printf("comum: %d\n", comum);

    printf("perigoso: %d\n", perigoso);

    return 0;

}