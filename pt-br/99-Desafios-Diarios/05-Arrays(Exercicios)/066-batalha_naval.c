/* Objetivo: Usar loops aninhados para preencher e exibir uma "grade".
1. Declare uma matriz char mar[5][5].
2. Use loops for aninhados para preencher toda a matriz com o caractere '~' (representando a água).
3. Após preencher, posicione manualmente um "navio" no meio da matriz colocando o caractere 'X' na posição [2][2].
4. Imprima a matriz completa como se fosse um mapa (5 linhas com 5 caracteres cada).*/

#include <stdio.h>

int main()
{
    char mar[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mar[i][j] = '~';
        }
    }
    mar[2][2] = 'x';

    printf("--- MAPA DE BATALHA ---\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c ", mar[i][j]);
        }
        printf("\n");
    }
}
