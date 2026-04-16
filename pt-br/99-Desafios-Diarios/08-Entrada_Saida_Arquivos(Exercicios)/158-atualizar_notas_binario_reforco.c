/*Objetivo: Alterar um dado dentro de um array e salvar a versão atualizada.
1. Use a mesma struct Aluno do exercicio numero: 157.
2. Crie um array com 2 alunos: Ana (nota 5.0) e Vitor (nota 6.0).
3. Grave esse array no arquivo notas_finais.bin.
4. Antes de fechar o programa, mude a nota do Vitor no seu array para 10.0.
5. Grave o array novamente no mesmo arquivo.
6. Reabra para leitura e imprima os dois alunos para confirmar que a nota do Vitor agora é 10.0.*/

#include <stdio.h>

struct Aluno
{
    char nome[50];
    float nota;
};

int main()
{

    struct Aluno turma[2] = {
        {.nome = "Ana", .nota = 5.0},
        {.nome = "Vitor", .nota = 6.0}
    };
    struct Aluno temp = {0};

    FILE *fp;

    fp = fopen("notas_finais.bin","wb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(turma, sizeof(struct Aluno), 2 , fp);

    fclose(fp);

    turma[1].nota = 10.00;

    fp = fopen("notas_finais.bin","wb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(turma, sizeof(struct Aluno), 2 , fp);

    fclose(fp);

    fp = fopen("notas_finais.bin" , "rb");

    if (fp == NULL)
    {
        fprintf(stderr , "Erro ao abrir o arquivo\n");
        return 1;
    }

    printf("BOLETIM ATUALIZADO\n");
    while (fread(&temp, sizeof(struct Aluno), 1 , fp) > 0)
    {
        printf("Aluno: %s\nNota : %.2f\n", temp.nome,temp.nota);
    }

    fclose(fp);

    return 0;

}