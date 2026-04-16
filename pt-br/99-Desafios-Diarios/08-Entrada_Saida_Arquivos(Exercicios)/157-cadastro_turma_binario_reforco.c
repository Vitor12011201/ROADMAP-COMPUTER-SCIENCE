/*Objetivo: Praticar a gravação de múltiplos registros e a leitura seletiva.
1. Crie uma struct Aluno com: char nome[50] e float nota.
2. No main, crie um array com 3 alunos:
3. Aluno turma[3] = { {"Ana", 8.5}, {"Beto", 7.0}, {"Caio", 9.2} };
4. Abra o arquivo turma.bin em modo "wb" e grave o array inteiro com um único fwrite.
Dica: O terceiro argumento do fwrite será 3.
5. Feche o arquivo.
6. Reabra em modo "rb".
7. Use um loop while (fread(...)) para ler um aluno por vez e só imprima os dados do aluno cujo nome for "Beto".*/

#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[50];
    float nota;
};

int main()
{
    struct Aluno turma[3] =
    {
        {.nome = "Ana" , .nota = 8.5},
        {.nome = "Beto", .nota = 7.0},
        {.nome = "Caio", .nota = 9.2}
    };
    struct Aluno temp = {0};

    FILE *fp;

    fp = fopen("turma.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(turma, sizeof(struct Aluno), 3 , fp);

    fclose(fp);

    fp = fopen("turma.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fread(&temp, sizeof(struct Aluno), 1 , fp) > 0)
    {
        if (strcmp(temp.nome,"Beto") == 0)
        {
            printf("Nome: %s\nNota: %.2f\n", temp.nome , temp.nota);
        }
    }

    fclose(fp);

    return 0;

}