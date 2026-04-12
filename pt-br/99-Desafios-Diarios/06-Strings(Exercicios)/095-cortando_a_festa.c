/* Objetivo: Aprender a "encerrar" uma string prematuramente.
1. Crie uma string char frase[] = "C e uma linguagem muito legal";.
2. No meio do seu código, faça: frase[13] = '\0';.
3. Agora, use printf("%s\n", frase);.*/

#include <stdio.h>

int main()
{
    char frase[] = "O C e uma linguagem muito legal";
    frase[13] = '\0';
    printf("%s", frase);

    return 0;
}
