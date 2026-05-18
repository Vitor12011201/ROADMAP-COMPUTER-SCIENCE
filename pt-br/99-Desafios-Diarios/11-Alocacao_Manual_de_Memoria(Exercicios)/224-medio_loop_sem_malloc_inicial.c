/* Objetivo: Aplicar realloc(NULL) em um loop de crescimento dinâmico sem caso especial para a primeira alocação
Implemente um programa que lê números inteiros fornecidos pelo usuário até que ele digite -1. O programa deve armazenar todos os números em um array dinâmico que cresce exatamente de 3 em 3 elementos por vez (não dobra). Use realloc a partir de NULL para evitar um malloc inicial separado.
1. Inicialize int *arr = NULL.
2. Mantenha capacidade e tamanho (quantos números foram lidos de fato).
3. A cada novo número (exceto -1):
4. Se tamanho == capacidade, aumente capacidade += 3.
5. Chame realloc(arr, capacidade * sizeof(int)). Use ponteiro temporário para verificar falha.
6. Se falhar, exiba "Erro de alocação", libere o que já foi alocado (se houver) e encerre.
7. Ao final (usuário digita -1), imprima todos os números e a capacidade final.
8. Libere a memória. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int tamanho = 0;
    int capacidade = 3;

    int *arr = NULL;

    int *novo_arr = realloc(arr, capacidade * sizeof(int));

    if (novo_arr == NULL)
    {
        fprintf(stderr, "Falha ao alocar memoria\n");
        return 1;
    }

    arr = novo_arr;

    do
    {
        printf("Digite um numero inteiro (-1 para sair): ");
        scanf("%d", &arr[i]);

        if (arr[i] == -1)
        {
            break;
        }

        i++;
        tamanho++;

        if (tamanho == capacidade)
        {
            printf("O Array estourou, aumentando capacidade...\n");

            capacidade += 3;

            int *temp = realloc(arr, capacidade * sizeof(int));

            if (temp == NULL)
            {
                fprintf(stderr, "Falha ao realocar memoria\n");
                free(arr);
                return 1;
            }

            arr = temp;
        }

    } while (1);

    printf("\nNumeros digitados:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("Capacidade inteira do array: %d\n", capacidade);

    free(arr);
    arr = NULL;

    return 0;
}