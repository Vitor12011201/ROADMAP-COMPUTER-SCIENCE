/* Objetivo: Provar que o fgets realmente traz a informação para a memória e entender o que ele "pega" do arquivo.
1. Arquivo de dados: Crie manualmente um arquivo chamado frase.txt e escreva nele: Linguagem C.
2. No seu código (contador.c):
3. Abra o arquivo frase.txt no modo "r".
4. Crie um array char contador[100];.
5. Use o fgets para ler a linha.
6. Use a função strlen(contador), para descobrir o tamanho da string que foi lida.
7. Imprima a frase e o tamanho no console.*/

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char contador[100];

    fp = fopen("frase.txt" , "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(fp, "Linguagem C");

    fclose(fp);

    fp = fopen("frase.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr,"Esse arquivo na existe\n");
        return 1;
    }

    fgets(contador, sizeof(contador) , fp);
    printf("%s\n", contador);
    printf("Arquivo tem: %zu Bytes" , strlen(contador));

    fclose(fp);

    return 0;
}