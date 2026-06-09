/* Objetivo: Fazer aritmética com caracteres para criar um sistema básico de criptografia.
Instruções:
1. Declare uma variável char letra = 'A';.
2. Modifique a variável somando 3 diretamente nela (letra = letra + 3; ou letra += 3;).
3. Imprima a variável usando %c (para ver o caractere) e %d (para ver o número na tabela ASCII).
Reflexão: Parabéns, você acabou de criar a Cifra de César, uma das técnicas de criptografia mais antigas da história!*/

#include <stdio.h>

int main()
{

    char letra = 'A';

    letra = letra + 3;

    printf("%c\n", letra);

    printf("%d\n", letra);

    return 0;

}