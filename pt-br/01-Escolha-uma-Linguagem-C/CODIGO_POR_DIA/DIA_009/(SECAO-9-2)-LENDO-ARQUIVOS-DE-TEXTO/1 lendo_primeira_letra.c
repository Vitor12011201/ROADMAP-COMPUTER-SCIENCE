#include <stdio.h>

/* OBJETIVO: Abrir um arquivo chamado "hello.txt" e ler apenas a primeira letra dele.
 * O modo "r" significa READ (Leitura).
 */

int main() {
    FILE *fp; // O "guia" do nosso arquivo

    // Tentamos abrir o arquivo para leitura
    fp = fopen("hello.txt", "r");

    // Lemos apenas UM caractere com fgetc
    // Usamos 'int' porque fgetc pode retornar um valor especial de erro (EOF)
    int c = fgetc(fp);

    // Mostramos a letra na tela
    printf("A primeira letra do arquivo eh: %c\n", c);

    // Fechamos o arquivo para liberar memoria
    fclose(fp);

    return 0;
}