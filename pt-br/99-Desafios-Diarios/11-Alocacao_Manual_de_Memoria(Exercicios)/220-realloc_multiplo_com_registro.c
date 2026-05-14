/* Objetivo: Desafiar com crescimento dinâmico controlado por loop, realloc sucessivos e tratamento correto de falha sem perder os dados originais
Crie um programa que lê números inteiros do usuário indefinidamente até que ele digite 0. O programa deve armazenar todos os números (exceto o 0 final) em um array dinâmico que cresce conforme necessário.
Regras:
1. Comece com um array de tamanho inicial 2 (alocado com malloc).
2. Mantenha controle de:
 - capacidade (tamanho atual alocado, em número de elementos).
 - tamanho (quantos números foram realmente armazenados).
3. A cada novo número lido (diferente de 0):
 - Se tamanho == capacidade, dobre a capacidade usando realloc (nova capacidade = capacidade * 2).
 - Use ponteiro temporário para o realloc. Se falhar (NULL), exiba "Erro ao redimensionar – mantendo dados atuais e encerrando leitura" e interrompa o loop sem perder os números já lidos.
 - Após garantir o sucesso, atualize o ponteiro principal e a capacidade.
 - Adicione o número no final do array e incremente tamanho.
4. Ao final (quando o usuário digitar 0 ou ocorrer erro de alocação), imprima todos os números armazenados (um por linha) e a capacidade final.
5. Libere toda a memória. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int capacidade = 2;
    int tamanho = 0;
    int numero_usuario;
    int *p = malloc(sizeof(int) * capacidade);
    memset(p, 0, capacidade * sizeof(int));

    if (p == NULL)
    {
        fprintf(stderr, "Erro de alocacao de memoria\n");
        free(p);
        return 1;
    }

    do
    {
        if (capacidade == tamanho)
        {
            printf("O Array lotou\n");
            printf("Liberando mais espaço\n");
            printf("\n");
            printf("Espaco librado!\n");
            printf("\n");

            capacidade = capacidade * 2;

            int *novo_p = realloc(p, sizeof(int) * capacidade);

            if (novo_p == NULL)
            {
                fprintf(stderr, "Erro ao realocar memoria\n");
                break;
            }

            p = novo_p;

        }

        printf("Digite um numero inteiro: (para sair digite 0)\n");
        scanf("%d", &numero_usuario);

        if (numero_usuario != 0)
        {
            p[tamanho] = numero_usuario;
            tamanho++;
        }
    }
    while (numero_usuario != 0);

    printf("Esses foram os numeros digitados: \n");
    printf("\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", p[i]);
    }

    printf("\n");
    printf("A capacidade final do array e de [%d] elementos inteiros\n", capacidade);

    free(p);

    p = NULL;

    return 0;

}