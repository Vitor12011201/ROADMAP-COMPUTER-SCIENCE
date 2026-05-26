/* Objetivo: Aplicar a definição de variável dentro do bloco de um loop, entendendo que ela é criada e destruída a cada iteração
Crie um programa que:
1. Use um loop for que vai de 0 a 4.
2. Dentro do bloco do loop, defina uma variável int temporaria = i * 3.
3. Imprima o valor de temporaria.
4. Fora do loop (após as chaves), tente imprimir temporaria (isso deve gerar erro de compilação – deixe comentado e explique o motivo).
5. No mesmo programa, antes do loop, declare uma variável int acumulador = 0.
6. Dentro do loop, some temporaria ao acumulador.
7. Após o loop, imprima acumulador. */

#include <stdio.h>

int main()
{
    int acumulador = 0;

    printf("Numeros dentro do loop for:\n");

    for (int i = 0; i < 5; i++)
    {
        int temporaria = i * 3;

        acumulador = acumulador + temporaria;

        printf("%d\n", temporaria);
    }

    // printf("%d", temporaria);
    // Erro de compilação:
    // a variável "temporaria" existe apenas
    // dentro do bloco do loop for.

    printf("\n");

    printf("Valor da variável acumulador: %d\n", acumulador);

    return 0;
}