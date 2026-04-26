/*Objetivo: Criar um apelido para um array pequeno e usá-lo de forma limpa.
1. Use o typedef para criar um tipo chamado Vetor3D que seja um array de 3 float.
2. No main, declare uma variável Vetor3D ponto = {1.0, 2.5, 3.8};.
3. Imprima os valores de X, Y e Z acessando ponto[0], ponto[1] e ponto[2].*/

#include <stdio.h>

typedef float Vetor3D[3];

int main()
{

    Vetor3D ponto = {1.0 , 2.5 , 3.8};

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("Ponto X = %.2f\n", ponto[i]);
        } else if (i == 1)
        {
            printf("Ponto Y = %.2f\n", ponto[i]);
        } else if (i == 2)
        {
            printf("Ponto Z = %.2f\n", ponto[i]);
        }
    }

    return 0;

}