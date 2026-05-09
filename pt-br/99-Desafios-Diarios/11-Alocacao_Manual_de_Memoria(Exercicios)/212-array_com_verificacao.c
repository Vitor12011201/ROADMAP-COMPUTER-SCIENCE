/* Objetivo: Aplicar verificação de erro em alocação de array dinâmico e tratar entrada inválida do usuário.
Implemente um programa que:
1. Pergunte ao usuário quantos números double ele deseja armazenar.
2. Se o número for menor ou igual a zero, exiba "Tamanho inválido" e termine.
3. Aloque um array dinâmico de double com esse tamanho, usando o padrão de verificação na mesma linha do if conforme mostrado no material:
if ((vetor = malloc(tamanho * sizeof(double))) == NULL)
4. Se a alocação falhar, exiba "Erro: memória insuficiente para o array" e encerre.
5. Preencha o array com o dobro do índice (índice 0 → 0.0, índice 1 → 2.0, índice 2 → 4.0, etc.).
6. Imprima todos os valores armazenados.
7. Libere a memória. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho_digitado = 0;
    double *vetor;

    printf("Quantos numeros do tipo DOUBLE voce deseja armazenas: \n");
    scanf("%d", &tamanho_digitado);

    if (tamanho_digitado <= 0)
    {
        fprintf(stderr, "Tamanho Invalido\n");
        fprintf(stderr,"O programa foi encerrado\n");
        return 1;
    }

    vetor = malloc(tamanho_digitado * sizeof(double));

    if (vetor == NULL)
    {
        fprintf(stderr, "Erro: memoria insuficiente para o array\n");
        return 1;
    }


    for (int i = 0; i < tamanho_digitado; i++)
    {
        vetor[i] = i * 2;
        printf("%.2f\n", vetor[i]);
    }

    free(vetor);

    vetor = NULL;

    return 0;
}