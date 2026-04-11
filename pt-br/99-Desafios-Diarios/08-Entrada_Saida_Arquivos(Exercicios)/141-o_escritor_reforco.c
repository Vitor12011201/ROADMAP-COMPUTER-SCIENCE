/*Objetivo: Simplesmente criar um arquivo e escrever seu nome nele.
1. Use FILE *fp; para criar o ponteiro do arquivo.
2. Use fp = fopen("nome.txt", "w"); para abrir.
3. Use fprintf(fp, "Meu nome e [Seu Nome]");.
4. Use fclose(fp);.
Missão: Execute o código e depois procure na pasta do seu projeto se o arquivo nome.txt apareceu lá com o seu nome dentro.*/

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("nome.txt" , "w");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(fp, "Meu nome e Vitor\n");

    fclose(fp);

    return 0;
}
