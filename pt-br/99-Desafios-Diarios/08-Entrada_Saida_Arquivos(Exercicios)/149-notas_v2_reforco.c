/*Objetivo: Praticar a leitura de múltiplos dados por linha e aplicar uma lógica condicional (filtro) durante a leitura do arquivo.
1. No seu código, crie um arquivo chamado notas_v2.txt no modo de escrita.
2. Escreva quatro linhas, cada uma com o nome de um aluno e sua nota final:
Vitor 9.5
Joao 4.0
Maria 8.2
Jose 5.5
3. Feche o arquivo.
4. Reabra o arquivo notas_v2.txt no modo de leitura.
5. Use um loop while para ler cada aluno e sua nota.
6. Dentro do loop, verifique: se a nota for maior ou igual a 6.0, imprima: "Aluno %s APROVADO". Caso contrário, imprima: "Aluno %s REPROVADO".
7. Ao final, fora do loop, exiba quantas linhas o arquivo tinha no total (dica: use um contador int i = 0; que aumenta a cada volta do loop).*/

#include <stdio.h>

int main()
{

    FILE *fp;
    char aluno[50];
    float nota;

    fp = fopen("notas.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir esse arquivo\n");
        return 1;
    }

    fprintf(fp, "Vitor 9.5\n");
    fprintf(fp, "Joao 4.0\n");
    fprintf(fp, "Maria 8.2\n");
    fprintf(fp, "Jose 5.5\n");

    fclose(fp);

    fp = fopen("notas.txt" , "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fscanf(fp, "%s %f" , aluno , &nota) != EOF)
    {
        if (nota > 6.0)
        {
            printf("Aluno %s foi APROVADO com a nota: %.2f\n", aluno, nota);
        } else
        {
            printf("Aluno %s foi REPROVADO com a nota: %.2f\n" , aluno, nota);
        }
    }

    fclose(fp);

    return 0;

}