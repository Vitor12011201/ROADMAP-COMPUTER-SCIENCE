/*Objetivo: Lidar com erros (o arquivo pode não abrir!).
1. Tente abrir um arquivo que não existe no modo de leitura ("r"), por exemplo: fp = fopen("inexistente.txt", "r");.
2. Se o arquivo não puder ser aberto, o fopen retorna NULL.
3. Faça um if (fp == NULL) para verificar isso. Se for nulo, imprima "Erro: O arquivo nao existe!".
4. Se não for nulo, imprima "Arquivo aberto com sucesso!" e feche-o.*/

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("inexistente.txt", "r");

    if (fp == NULL)
    {
        printf("O arquivo e inexistente\n");
    } else
    {
        printf("O arquivo foi aberto com sucesso\n");
        fclose(fp);
    }

    return 0;
}