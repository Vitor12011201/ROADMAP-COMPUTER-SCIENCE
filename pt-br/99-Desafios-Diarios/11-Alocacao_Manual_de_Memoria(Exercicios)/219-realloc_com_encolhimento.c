/* Objetivo: Aplicar realloc para reduzir o tamanho de um array, preservando os primeiros elementos
Implemente um programa que:
1. Aloque dinamicamente um array de 10 double usando calloc (já zera).
2. Preencha o array com os valores: 100.0, 200.0, 300.0, ..., 1000.0.
3. Pergunte ao usuário: "Para quantos elementos você quer reduzir o array?" (valor entre 1 e 10).
 - Se o valor for inválido (fora da faixa), exiba erro e encerre sem liberar? (Libere antes de encerrar.)
4. Use realloc para encolher o array para o novo tamanho informado.
5. Imprima os elementos restantes.
6. Libere a memória. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *p = calloc(10, sizeof(double));
    int dado_usuario = 0;

    if (p == NULL)
    {
        fprintf(stderr, "Erro ao alocar memoria\n");
        return 1;
    }

    printf("Numeros dos elementos do array antes da modificacao: \n");

    for (int i = 0; i < 10; i++)
    {
        p[i] = (i + 1) * 100;
        printf("p[%d]: %.2lf\n", i ,p[i]);
    }

    printf("Para quantos elementos deseja reduzir: (Digite um numero entre 1 - 10)\n");
    scanf("%d", &dado_usuario);

    if (dado_usuario > 10 || dado_usuario < 1)
    {
        fprintf(stderr, "Numero digitado invalido\n");
        free(p);
        return 1;
    }

    double *novo_p = realloc(p, sizeof(double) * dado_usuario);

    if (novo_p == NULL)
    {
        fprintf(stderr,"Erro ao realocar a memoria\n");
        free(p);
        return 1;
    }

    p = novo_p;

    printf("Numeros dos elementos do array antes da modificacao: \n");
    for (int i = 0; i < dado_usuario; i++)
    {
        printf("p[%d]:%.2lf\n", i , p[i]);
    }

    free(p);

    p = NULL;

    return 0;

}
