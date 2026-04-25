/*Objetivo: Simular o padrão POSIX/Linux, onde tipos customizados terminam em _t.
1. Crie um typedef float percentual_t;.
2. Crie uma struct aluno_t com nome e nota_final (do tipo percentual_t).
3. Crie uma função void verificar_aprovacao(aluno_t a) que imprime se o aluno passou (nota > 6.0).
4. No main, use esses tipos. Repare como o _t ajuda a identificar bater o olho e saber que aquilo é um typedef.*/

#include <stdio.h>

typedef float percentual_t;

typedef struct
{
    char *nome;
    percentual_t nota_final;
} aluno_t;

void verificar_aprovacao(aluno_t a)
{
    if (a.nota_final <= 6.0)
    {
        printf("O aluno foi reprovado na materia\n");
    } else
    {
        printf("O aluno foi aprovado na materia\n");
    }
}

int main()
{

    aluno_t a_1[5] = {
        {.nome = "Julio", .nota_final = 4.6},
        {.nome = "Vitor", .nota_final = 8.5},
        {.nome = "Gomes", .nota_final = 7.0},
        {.nome = "Rodrigo", .nota_final = 5.3},
        {.nome = "Pedro", .nota_final = 6.0}
    };

    for (int i = 0; i < 5; i++)
    {
        printf("Aluno: %s\nNota: %.2f\n", a_1[i].nome, a_1[i].nota_final);
        verificar_aprovacao(a_1[i]);
        printf("\n");
    }

    return 0;

}