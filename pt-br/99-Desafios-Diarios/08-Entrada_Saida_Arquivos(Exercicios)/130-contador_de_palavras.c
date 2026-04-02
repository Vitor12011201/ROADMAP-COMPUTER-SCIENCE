/* Objetivo: Usar o loop de linhas para processar dados de texto.
1. Crie um arquivo poema.txt com 4 ou 5 linhas.
2. Use o loop while (fgets(s, sizeof s, fp) != NULL) para ler o arquivo.
3. Dentro do loop, use a função strlen(s) (da <string.h>) para contar quantos caracteres cada linha possui.
4. Imprima algo como: "Linha %d tem %zu caracteres". */

#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char s[1024];
    int linha = 0;

    fp = fopen("poema.txt" , "w");

    if (fp == NULL) {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    fputs("O poeta e um fingidor\n" , fp);
    fputs("Finge tao completamente\n" , fp);
    fputs("Que chega a fingir que é dor\n" , fp);
    fputs("A dor que deveras sente.\n" , fp);

    fclose(fp);

    fp = fopen("poema.txt" , "r");

    if (fp == NULL) {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    while (fgets(s, sizeof s, fp) != NULL) {
        linha++;
        printf("Linha: %d caracteres: %zu\n", linha , strlen(s));
    }

    fclose(fp);

    return 0;
}