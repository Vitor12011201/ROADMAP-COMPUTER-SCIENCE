/* Objetivo: Aplicar alocação de array com tamanho definido pelo usuário, preenchimento com cálculo e validação de entrada
Implemente um programa que:
1. Pergunte ao usuário: "Quantos inteiros você quer armazenar?"
2. Se o número digitado for menor ou igual a zero, exiba "Tamanho inválido" e encerre.
3. Aloque dinamicamente um array de int com esse tamanho usando malloc (fórmula: sizeof(int) * tamanho).
4. Preencha o array de modo que o elemento na posição i receba o valor i * i (quadrado do índice).
- Exemplo: se tamanho = 5 → [0, 1, 4, 9, 16].
5. Imprima o array no formato: "valores: 0, 1, 4, 9, 16".
6. Libere a memória.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int resposta_usuario = 0;

    printf("Quantos inteiros voce quer armazenar: \n");
    scanf("%d", &resposta_usuario);

    if (resposta_usuario <= 0)
    {
        printf("Tamanho invalido");
        return 1;
    }

    int *p = malloc(sizeof(int) * resposta_usuario);

    if (p == NULL)
    {
        fprintf(stderr ,"Erro de memoria\n");
        return 1;
    }

    for (int i = 0; i < resposta_usuario; i++)
    {
        p[i] = i * i;
    }

    printf("Os numeros do Array sao: \n");

    for (int i = 0; i < resposta_usuario; i++)
    {
        printf("%d\n", p[i]);
    }

    free(p);

    p = NULL;

}