#include <stdio.h>

/* OBJETIVO: Ler o arquivo do inicio ao fim, letra por letra, usando um loop.
 * O 'fp' avança automaticamente para a proxima letra a cada chamada do fgetc.
 */

int main() {
    FILE *fp;
    int c;

    fp = fopen("hello.txt", "r");

    // Enquanto o caractere lido for diferente de EOF (End Of File / Fim de Arquivo)
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c); // Imprime a letra atual
    }

    fclose(fp);

    return 0;
}