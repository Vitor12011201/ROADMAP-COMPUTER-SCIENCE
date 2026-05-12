/* Objetivo: Desafiar com alocação de array de estruturas usando calloc e tratamento de falha parcial
1. Crie uma estrutura Aluno com os campos:
 - char nome[50] (array fixo, não alocado separadamente)
 - int faltas
 - float nota
O programa deve:
2. Perguntar ao usuário quantos alunos serão cadastrados (N).
3. Usar calloc(N, sizeof(Aluno)) para alocar um array dinâmico dessas estruturas. O calloc já zera faltas e nota (para zero) e os campos de nome ficam com o primeiro byte '\0' (string vazia).
4. Verificar se a alocação falhou (ponteiro NULL). Se falhar, exibir erro e encerrar.
5. Para cada aluno (i de 0 a N-1):
 - Pedir ao usuário: nome, faltas, nota .
 - Armazenar no array.
6. Ao final, calcular e exibir:
 - Média das notas de toda a turma.
 - Quantos alunos têm faltas > 5.
 - Nome do aluno com a maior nota (se houver empate, mostrar o primeiro encontrado).
7. Liberar o array com free.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno
{
    char nome[50];
    int faltas;
    float nota;
};

int main()
{
    char aluno_maior_nota[50];
    int alunos_falta = 0;
    float maior_nota = 0;
    int n_alunos_cadastrados = 0;
    float media_notas = 0;

    printf("Quantos alunos seram cadastrados: \n");
    scanf("%d", &n_alunos_cadastrados);

    if (n_alunos_cadastrados <= 0 || scanf("%d", &n_alunos_cadastrados) != 1)
    {
        fprintf(stderr, "ERRO: Numero digitado igual ou menor que 0 ou foi digitado letras no lugar de numeros\n");
        return 1;
    }

    struct Aluno *alunos = calloc(n_alunos_cadastrados, sizeof(struct Aluno));

    if (alunos == NULL)
    {
        fprintf(stderr, "Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < n_alunos_cadastrados; i++)
    {
        printf("Qual o nome do aluno [%d]: \n", i + 1);
        scanf("%49s", alunos[i].nome);
        printf("\n");
        printf("Quantas faltas tem o aluno [%d]: \n", i + 1);
        scanf("%d", &alunos[i].faltas);
        printf("\n");
        printf("Qual a nota do aluno [%d]: \n", i + 1);
        scanf("%f", &alunos[i].nota);

        if (alunos[i].faltas > 5)
        {
            alunos_falta++;
        }

        media_notas = (alunos[i].nota + media_notas);

        if (maior_nota < alunos[i].nota)
        {
            maior_nota = alunos[i].nota;
            strcpy(aluno_maior_nota,alunos[i].nome);

        }
    }

    media_notas = media_notas / n_alunos_cadastrados;

    printf("A media das notas de toda a turma e: [%.2f]\n", media_notas);
    printf("\n");
    printf("Sao [%d] alunos com mais de 5 faltas\n", alunos_falta);
    printf("\n");
    printf("O aluno com maior nota e o [%s] com a nota [%.2f]\n", aluno_maior_nota, maior_nota);

    free(alunos);

    alunos = NULL;

    return 0;

}
