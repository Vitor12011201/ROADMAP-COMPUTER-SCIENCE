/* Objetivo: Declarar, inicializar e acessar uma matriz 2D básica.
1. Crie uma matriz de inteiros int grade[3][2] (3 linhas e 2 colunas).
2. Inicialize-a manualmente com valores que representem notas de 3 alunos em 2 provas (ex: Aluno 0: {8, 9}, Aluno 1: {7, 5}, Aluno 2: {10, 6}).
3. Imprima apenas a nota da segunda prova do terceiro aluno.*/

#include <stdio.h>

int main()
{
    float notas[3][2] = {
        {6.5, 7.3},
        {5.3, 8.9},
        {7.4, 9.3}
    };
    printf("As notas do terceiro aluno sao [%.2f] e [%.2f]\n", notas[2][0], notas[2][1]);
}
