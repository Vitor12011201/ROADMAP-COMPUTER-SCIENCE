/* Objetivo: Replicar o exemplo do Beej para sentir o funcionamento do fscanf.
1. Crie um arquivo baleias.txt com os dados que o Beej forneceu.
2. Escreva o código para ler esse arquivo usando while (fscanf(...) != EOF).
3. Imprima os dados formatados, mas tente mudar a ordem: primeiro a massa, depois o nome, depois o comprimento.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char nome[1024];
    float comprimento;
    int massa;

    fp = fopen("baleias.txt", "w");

    if (fp == NULL)
    {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    fprintf(fp, "Baleia_azul 29.9 173");
    fprintf(fp, "Eubalaena 20.7 135");
    fprintf(fp,"Baleia_cinzenta 14.9 41");
    fprintf(fp, "Baleia_jubarte 16.0 30");

    fclose(fp);

    fp = fopen("baleias.txt", "r");

    if (fp == NULL)
    {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    while (fscanf(fp, "%s %f %d", nome, &comprimento, &massa) != EOF)
    {
        printf("Massa: %d toneladas, Nome: %s , Comprimento: %.2f metros\n", massa, nome, comprimento);
    }

    fclose(fp);

    return 0;
}
