/* Objetivo: Usar a fórmula n * sizeof(tipo) para criar um array sob demanda.
1. Pergunte ao usuário: "Quantos números inteiros você deseja armazenar?".
2. Use malloc para criar um array exatamente desse tamanho.
3. Preencha o array com números (ex: 10, 20, 30...).
4. Imprima os números e depois libere a memória.
Reflexão: Se o usuário digitar 1.000.000, seu programa funcionará. Se fosse um array comum int lista[n], o programa poderia travar (estouro de pilha).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resposta_usuario = 0;

    printf("Quantos numeros inteiros deseja armazenar: \n");
    scanf("%d", &resposta_usuario);

    int *p = malloc(resposta_usuario * sizeof(int));

    if (p == NULL)
    {
        printf("Erro de memoria\n");
        return 1;
    }

    for (int i = 0; i < resposta_usuario; i++)
    {
        printf("Digite o numero[%d]\n", i + 1);
        scanf("%d", &p[i]);
    }

    printf("Numeros digitados\n");

    for (int i = 0; i < resposta_usuario; i++)
    {
        printf("[%d] %d\n", i + 1, p[i]);
    }

    free(p);

    p = NULL;

    return 0;

}