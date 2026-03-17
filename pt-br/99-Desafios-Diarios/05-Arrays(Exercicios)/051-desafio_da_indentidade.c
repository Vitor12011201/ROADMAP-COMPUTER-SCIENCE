/* Tente fazer uma Matriz Identidade 4x4 de um jeito diferente:
Declare int identidade[4][4].
Na inicialização, use os colchetes específicos [linha][coluna] para colocar o número 1 apenas nas posições onde a linha é igual à coluna (ex: [0][0]=1, [1][1]=1...).
Imprima a matriz e verifique se o C realmente preencheu o resto com 0. */

#include <stdio.h>

int main()
{
    int indentidade[4][4] = {0};
    indentidade [0][0] = 1;
    indentidade [1][1] = 1;
    indentidade [2][2] = 1;
    indentidade [3][3] = 1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d ", indentidade[i][j]);
        }
        printf("\n");
    }
}