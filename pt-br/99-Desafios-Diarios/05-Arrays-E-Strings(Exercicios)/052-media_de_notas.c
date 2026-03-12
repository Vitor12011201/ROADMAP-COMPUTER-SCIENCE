/* Você tem uma matriz que representa uma sala de aula. Cada linha é um aluno e cada coluna é a nota de uma prova.
O que você deve fazer:
Declare uma matriz float notas[3][2] (3 alunos, 2 notas para cada).
Inicialize a matriz com as notas que você quiser (ex: 7.5, 8.0, etc).
Você deve criar os loops para imprimir a nota de cada aluno, mas também deve calcular e imprimir a média de cada um deles.*/

#include <stdio.h>

int main()
{
    float notas[3][2] = {0};

    notas[0][0] = 9.4;
    notas[1][0] = 8.4;
    notas[2][0] = 7.6;
    notas[0][1] = 5.8;
    notas[1][1] = 7.9;
    notas[2][1] = 10.0;

    for (int i = 0; i < 3; i++)
    {
        float soma = 0;
        printf("Aluno %d: \n", i + 1);
        for (int j = 0; j < 2; j++)
        {
            printf("nota %.2f \n", notas[i][j]);
            soma += notas[i][j];
        }
        float media = soma / 2;
        printf("A media e de: %.2f\n", media);
        printf("\n");
    }
}
