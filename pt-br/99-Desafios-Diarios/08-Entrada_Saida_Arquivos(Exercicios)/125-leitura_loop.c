/*Objetivo: Usar um loop para ler um arquivo inteiro, caractere por caractere.
1. Crie manualmente um arquivo chamado segredo.txt e escreva "Cevada" dentro dele.
2 .No seu código, abra o arquivo no modo "r"
3. Use um loop while (Para ler letra por letra):
int c;
while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
4. Desafio: Adicione um contador dentro do loop para mostrar, no final, quantos caracteres o arquivo possui no total.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int contador;

    fp = fopen("segredo.txt", "w");

    if (fp == NULL)
    {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    fputs("Sevada", fp);

    fclose(fp);

    fp = fopen("segredo.txt", "r");

    if (fp == NULL)
    {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    int c;

    while ((c = getc(fp)) != EOF)
    {
        printf("%c\n", c);
        contador++;
    }

    printf("Existem [%d caracteres] no arquivo\n", contador);

    fclose(fp);

    return 0;
}
