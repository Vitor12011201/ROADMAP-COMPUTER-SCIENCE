/* Objetivo: Praticar a leitura única de uma linha e entender o "tamanho máximo".
1. Crie um arquivo teste.txt com uma frase bem longa (mais de 50 caracteres).
2. No código, crie um buffer pequeno: char buffer[10];.
3. Use fgets(buffer, sizeof(buffer), fp); e imprima o resultado.*/

#include <stdio.h>

int main() {

    FILE *fp;
    char s[10]; // Buffer pequeno para demonstrar limites de tamanho

    fp = fopen("teste.txt" , "w");

    if (fp == NULL) {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    fputs("Tudo o que um sonho precisa para ser realizado e alguem que acredite que ele possa ser realizado\n" , fp);

    fclose(fp);

    fp = fopen("teste.txt" , "r");

    if (fp == NULL) {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    // Leitura única: apenas preenche o buffer (9 caracteres + terminador nulo)
    fgets(s , sizeof s, fp);
    printf("A frase sem o loop While: \n");
    printf("%s\n",s);
    printf("\n");

    printf("O restante da frase dentro do loop While: \n");

    // Loop While: continua lendo o restante do arquivo em blocos de 10 bytes
    while (fgets(s, sizeof s, fp) != NULL) {
        printf("%s", s);
    }

    fclose(fp);

    return 0;
}