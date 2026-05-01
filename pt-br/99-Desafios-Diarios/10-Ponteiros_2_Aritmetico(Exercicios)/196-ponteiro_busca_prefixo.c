/* Objetivo: Usar a subtração de ponteiros para identificar o tamanho de uma palavra dentro de uma frase.
1. Crie uma frase: char frase[] = "Estudando Ponteiros";.
2. Crie um ponteiro p_inicio = frase;.
3. Crie um ponteiro p_atual = frase;.
4. Use um while para mover p_atual até encontrar o primeiro espaço ' '.
5. Ao encontrar o espaço, calcule o tamanho da primeira palavra subtraindo p_atual - p_inicio.
6. Imprima o tamanho da palavra e, usando um loop que vai de 0 até essa distância, imprima a palavra caractere por caractere usando p_inicio[i].*/

#include <stdio.h>

int main()
{

    char frase[] = "Estudando Ponteiros";

    char *p_inicio = frase;

    char *p_atual = frase;

    while (*p_atual != ' ')
    {
        p_atual++;
    }

    int tamanho = p_atual - p_inicio;

    printf("Tamanho da primeira palavra: %d\n", tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("[%c] ", p_inicio[i]);
    }

    return 0;

}