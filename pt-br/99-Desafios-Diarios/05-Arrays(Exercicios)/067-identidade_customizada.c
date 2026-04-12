/* Objetivo: Usar os índices explícitos (Designated Initializers) em 2D e lógica de loop.
Crie uma matriz int matriz[4][4].
Inicialize-a em uma única linha usando a sintaxe [linha][coluna] = valor para que ela se torne uma Matriz Identidade (onde a diagonal principal é 1 e o resto é 0).
Dica: Você precisa setar [0][0], [1][1], [2][2] e [3][3].
Use loops aninhados para imprimir a matriz, mas com um detalhe: onde o valor for 0, imprima um ponto . e onde for 1, imprima o número 1. Isso vai deixar a diagonal bem visível!*/

#include <stdio.h>

int main()
{
    char mapa[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mapa[i][j] = '.';
        }
    }

    mapa[0][0] = '1';
    mapa[1][1] = '1';
    mapa[2][2] = '1';
    mapa[3][3] = '1';

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }
}
