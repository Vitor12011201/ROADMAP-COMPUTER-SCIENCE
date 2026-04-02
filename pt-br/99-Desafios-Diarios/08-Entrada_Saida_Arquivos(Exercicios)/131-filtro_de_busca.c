/* Objetivo: Criar um "localizador" de strings dentro de um arquivo.
1. Crie um arquivo lista_compras.txt com vários itens, um por linha (ex: "Arroz", "Feijão", "Batata", "Carne").
2. Peça ao usuário para digitar uma palavra para buscar.
3. Percorra o arquivo linha por linha com fgets.
4. Use a função strstr(s, busca) para verificar se a palavra digitada está na linha atual.
5. Se strstr não retornar NULL, imprima: "Item encontrado: %s". */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char s[1024];
    char resposta_usuario[1024];

    fp = fopen("lista_compras.txt", "w");

    if (fp == NULL) {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    fputs("Arroz\n", fp);
    fputs("Feijao\n", fp);
    fputs("Carne\n", fp);
    fputs("Batata\n", fp);
    fputs("Mamao\n", fp);
    fputs("Salada\n", fp);
    fputs("Oleo\n", fp);
    fputs("Banana\n", fp);

    fclose(fp);

    fp = fopen("lista_compras.txt", "r");

    if (fp == NULL) {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    printf("Digite o item que deseja ver se esta na lista: \n");
    scanf("%s", resposta_usuario);

    int encontrado = 0;

    while (fgets(s, sizeof s, fp) != NULL) {
       if (strstr(s, resposta_usuario) != NULL) {
           encontrado = 1;
           break;
       }
    }

    if (encontrado) {
        printf("%s e um item que esta na lista\n", resposta_usuario);
    } else {
        printf("%s e um item que NAO esta na lista\n", resposta_usuario);
    }

    fclose(fp);

    return 0;
}
