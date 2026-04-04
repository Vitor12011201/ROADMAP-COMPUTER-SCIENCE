/*Objetivo: Passar uma matriz fixa para uma função.
1. Crie uma função void mostrar_matriz(int m[][3], int linhas).
2. No main, crie uma matriz int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};.
3. A função deve usar loops aninhados para imprimir a matriz formatada (com espaços e quebras de linha).
4. Chame a função passando a matriz e o número de linhas (2). */

#include <stdio.h>

void mostrar_matriz(int matriz[][3], int linha)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    mostrar_matriz(matriz, 2);
}
