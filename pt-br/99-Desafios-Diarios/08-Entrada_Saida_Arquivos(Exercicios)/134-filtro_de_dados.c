/* Objetivo: Filtrar informações específicas enquanto lê o arquivo.
1. Use o mesmo arquivo baleias.txt do Exercício 132.
2. Seu programa deve ler o arquivo inteiro, mas só imprimir as baleias que pesam mais de 100 toneladas.
3. No final, o programa deve exibir quantas baleias no total foram lidas e a média de comprimento delas.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char nome[1024];
    float comprimento;
    int massa;
    int n_baleias_validas = 0;
    float media_comprimento = 0;

    fp = fopen("baleias.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Esse arquivo nao existe\n");
        return 1;
    }

    fprintf(fp, "Baleia_azul 29.9 173");
    fprintf(fp, "Eubalaena 20.7 135");
    fprintf(fp, "Baleia_cinzenta 14.9 41");
    fprintf(fp, "Baleia_jubarte 16.0 30");

    fclose(fp);

    fp = fopen("baleias.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Esse arquivo nao existe\n");
    }

    while (fscanf(fp, "%s %f %d", nome, &comprimento, &massa) != EOF)
    {
        if (massa > 100)
        {
            printf("Nome: %s, Comprimento: %.2f, Massa: %d\n", nome, comprimento, massa);
            n_baleias_validas++;
            media_comprimento += comprimento;

        }
    }

    printf("O numero de baleias com toneladas acima de 100 e de: [%d] Baleias\n", n_baleias_validas);
    printf("A media do comprimento das [%d] baleias com mais de 100 Toneladas e de: [%.2f] metros\n", n_baleias_validas, (media_comprimento / n_baleias_validas));

    fclose(fp);

    return 0;

}
