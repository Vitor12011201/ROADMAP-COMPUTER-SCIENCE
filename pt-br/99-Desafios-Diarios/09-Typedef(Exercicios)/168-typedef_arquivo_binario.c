/* Objetivo: Unir Typedef Anônimo com Arquivos Binários. Vamos usar a forma mais "limpa" que o texto mostrou.
1. Crie um typedef float Dinheiro;.
2. Crie uma struct anônima com typedef chamada Livro que contenha:
char titulo[50];
Dinheiro valor;
3. No main, crie um Livro l1 = {"O Alquimista", 45.90};.
4. Salve esse livro em um arquivo chamado biblioteca.bin.
5. Leia o arquivo de volta para uma nova variável Livro l2; e imprima: "Livro: %s | Preço: R$ %.2f".*/

#include <stdio.h>

typedef float Dinheiro;
typedef struct {
    char titulo[50];
    Dinheiro valor;
} Livro;

int main() {

    Livro l_1 = {.titulo = "O Alquimista" , .valor = 45.90};
    Livro l_2 = {0};

    FILE *fp;

    fp = fopen("biblioteca.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr,"Erro ao abrir esse arquivo\n");
        return 1;
    }

    fwrite(&l_1, sizeof(Livro), 1 , fp);

    fclose(fp);

    fp = fopen("biblioteca.bin", "rb");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fread(&l_2, sizeof(Livro), 1 , fp) > 0) {
        printf("Livro: %s | Preco : R$: %.2f\n", l_2.titulo, l_2.valor);
    }

    fclose(fp);

    return 0;

}