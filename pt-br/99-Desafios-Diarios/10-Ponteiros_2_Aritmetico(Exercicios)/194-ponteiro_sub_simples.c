/* Objetivo: Praticar o acesso retroativo com *(p - n).
1. Crie um array int anos[3] = {2024, 2025, 2026};.
2. Crie um ponteiro int *p = &anos[2]; (apontando para o último elemento).
3. Imprima o valor atual (*p).
4. Sem mover o ponteiro p, use printf para imprimir o primeiro ano (2024) usando a sintaxe *(p - 2).*/

#include <stdio.h>

int main()
{
    int anos[3] = {2024, 2025, 2026};

    int *p = &anos[2];

    printf("Valor em p: %d\n", *p);

    printf("Valor do primeiro elemento do Array : %d\n", *(p - 2));

    return 0;
}
