/* Objetivo: Implementar uma versão simplificada da lógica do texto, expandindo a memória caractere por caractere (com tamanho inicial igual a 1).
1. Crie um ponteiro char *texto = malloc(1); (apenas para o \0 inicial).
2. Crie um loop onde você lê um caractere do teclado usando scanf(" %c", &letra) ou getchar().
3. O loop deve parar quando o usuário digitar o caractere ponto '.'
4. A cada letra digitada, aumente o tamanho do seu texto em +1 usando realloc(), adicione a letra e mova o \0.
5. Ao final do loop, imprima a string completa digitada e libere a memória.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *texto = malloc(1); // espaço apenas para o '\0'

    if (texto == NULL)
    {
        fprintf(stderr, "Erro de alocacao de memoria\n");
        return 1;
    }

    texto[0] = '\0';

    int tamanho = 0;
    char letra;

    printf("Digite um texto ('.' para finalizar):\n");

    while (1)
    {
        letra = getchar();

        if (letra == '.')
        {
            break;
        }

        if (letra == '\n')
        {
            continue;
        }

        char *novo_texto = realloc(texto, tamanho + 2);

        if (novo_texto == NULL)
        {
            fprintf(stderr, "Erro ao realocar memoria\n");
            free(texto);
            return 1;
        }

        texto = novo_texto;

        texto[tamanho] = letra;

        texto[tamanho + 1] = '\0';

        tamanho++;
    }

    printf("\nTexto digitado:\n%s\n", texto);

    free(texto);
    texto = NULL;

    return 0;
}