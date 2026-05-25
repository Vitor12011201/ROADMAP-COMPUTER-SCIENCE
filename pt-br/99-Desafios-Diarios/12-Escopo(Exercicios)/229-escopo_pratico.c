/* Objetivo: Demonstrar na prática os conceitos de Escopo local, Escopo global, Variáveis static, Tempo de vida das variáveis
Crie um programa que:
1. Possui uma variável global.
2. Cria uma função com variável local.
3. Usa uma variável static para manter valor entre chamadas.
4. Mostra como cada variável se comporta.
*/

#include <stdio.h>

int contadorGlobal = 0;

void incrementar(void)
{
    int contadorLocal = 0;

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