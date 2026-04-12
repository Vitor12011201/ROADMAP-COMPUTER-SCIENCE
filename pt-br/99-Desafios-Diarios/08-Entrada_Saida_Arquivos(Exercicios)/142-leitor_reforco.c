/* Objetivo: Ler o que você escreveu no exercício anterior e mostrar na tela.
1. Abra o arquivo nome.txt no modo "r".
2. Crie um array de char: char conteudo[50];.
3. Use fgets(conteudo, 50, fp); para pegar o que está escrito.
4. Use o printf normal para mostrar o conteudo na tela.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char conteudo[50];

    fp = fopen("nome.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(fp,"Meu nome e Vitor\n");

    fclose(fp);

    fp = fopen("nome.txt" , "r");

    if (fp == NULL)
    {
        fprintf(stderr,"Esse arquivo nao existe\n");
        return 1;
    }

    fgets(conteudo, 50 , fp);

    printf("%s", conteudo);

    fclose(fp);

    return 0;

}