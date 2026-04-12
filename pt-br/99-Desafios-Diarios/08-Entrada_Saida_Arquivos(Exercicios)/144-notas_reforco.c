/* Objetivo: Ler dois números que estão dentro de um arquivo de texto, trazê-los para o C e fazer uma operação matemática. Isso é difícil porque o arquivo guarda texto, mas o C precisa de números.
1. Abra o arquivo (O nome do arquivo será notas.txt) em modo "w" e escreva duas notas (ex: 7.5 e 8.5), uma em cada linha.
2. Feche o arquivo.
3. Reabra em modo "r".
4. Use o fscanf para ler esses dois valores direto para duas variáveis do tipo float.
5. Calcule a média dessas duas notas e imprima na tela.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    float nota_1;
    float nota_2;

    fp = fopen("notas.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(fp, "7.5\n8.5\n");

    fclose(fp);

    fp = fopen("notas.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir esse aquivo\n");
        return 1;
    }

    fscanf(fp, "%f", &nota_1);
    fscanf(fp, "%f", &nota_2);

    printf("A nota 1 e: [%.2f]\nA nota 2 e: [%.2f]\n", nota_1, nota_2);
    printf("A media das notas e: [%.2f]\n", (nota_1 + nota_2) / 2);

    fclose(fp);

    return 0;
}
