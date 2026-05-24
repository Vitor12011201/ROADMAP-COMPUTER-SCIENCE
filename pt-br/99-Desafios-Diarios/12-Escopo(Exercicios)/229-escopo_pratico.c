/*
Objetivo:
Demonstrar na prática os conceitos de:
- Escopo local
- Escopo global
- Variáveis static
- Tempo de vida das variáveis

O programa:
1. Possui uma variável global.
2. Cria uma função com variável local.
3. Usa uma variável static para manter valor entre chamadas.
4. Mostra como cada variável se comporta.
*/

#include <stdio.h>

/* Variável global */
int contadorGlobal = 0;

void incrementar(void)
{
    /* Variável local */
    int contadorLocal = 0;

    /* Variável static */
    static int contadorStatic = 0;

    contadorGlobal++;
    contadorLocal++;
    contadorStatic++;

    printf("Global: %d\n", contadorGlobal);
    printf("Local: %d\n", contadorLocal);
    printf("Static: %d\n", contadorStatic);

    printf("---------------------\n");
}

int main(void)
{
    incrementar();
    incrementar();
    incrementar();

    return 0;
}