/*Objetivo: Praticar o loop idiomático para contar elementos.
1. Crie um arquivo frase.txt com uma frase qualquer (ex: "Aprendendo C no Clion").
2. Use o loop while ((c = fgetc(fp)) != EOF) para percorrer o arquivo.
3. Dentro do loop, use um if para contar quantos espaços em branco (' ') existem no arquivo.
4. No final, imprima o total de espaços encontrados.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int c;
    int contador = 0;

    fp = fopen("frase.txt", "w");

    if (fp == NULL)
    {
        printf("Essa arquivo nao existe\n");
        return 1;
    }

    fputs("Aprendendo C no Clion\n", fp);

    fclose(fp);

    fp = fopen("frase.txt", "r");

    if (fp == NULL)
    {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    while ((c = getc(fp)) != EOF)
    {
        if (c == ' ')
        {
            contador++;
        }
    }

    fclose(fp);

    printf("Existem %d de espacos na frase que esta o arquivo\n", contador);

    return 0;
}
