/* Crie um programa que represente um tabuleiro de Jogo da Velha (3x3).
Inicialize a matriz de char chamada tabuleiro[3][3] com as letras 'X' e 'O' de forma que o 'X' vença na diagonal principal.
Use dois loops for para imprimir o tabuleiro de forma organizada.*/

#include <stdio.h>

int main()
{
    char tabuleiro[3][3] =
    {
        {'O', 'O', 'O'},
        {'O', 'O', 'O'},
        {'O', 'O', 'O'}
    };

    tabuleiro[0][0] = 'X';
    tabuleiro[1][1] = 'X';
    tabuleiro[2][2] = 'X';

    printf("JOGO DA VELHA\n");
    printf("=============\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
