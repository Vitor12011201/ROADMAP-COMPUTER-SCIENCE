/*Objetivo: Praticar a escrita de diferentes tipos de dados no mesmo arquivo.
1. Crie um programa que tenha três variáveis: char nome[] = "Link", int vida = 100 e float forca = 15.5.
2. Abra um arquivo status.txt no modo "w".
3. Use o fprintf para salvar esses dados em uma linha organizada.
4. Use o fputc para colocar um caractere '!' ao final de tudo.
5. Feche o arquivo e confira o resultado.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char nome[] = "Link";
    int vida = 100;
    float forca = 15.5;

    fp = fopen("status.txt" , "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Esse arquivo nao existe\n");
        return 1;
    }

    fprintf(fp, "nome: %s\nvida: %d\nforca: %.2f", nome , vida , forca);
    fputc('!', fp);

    fclose(fp);

    return 0;

}