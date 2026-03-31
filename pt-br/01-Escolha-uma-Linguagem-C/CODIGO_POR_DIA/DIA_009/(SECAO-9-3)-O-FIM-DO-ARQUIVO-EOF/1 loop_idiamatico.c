#include <stdio.h>

/* OBJETIVO: Usar o loop 'while' classico do C para ler um arquivo ate o fim.
 * Atribuimos o caractere a 'c' e ja comparamos com EOF na mesma linha.
 */

int main() {
    FILE *fp = fopen("hello.txt", "r");
    int c; // Usamos int para suportar o valor do EOF

    if (fp == NULL) return 1;

    // 1. fgetc le a letra -> 2. salva em 'c' -> 3. compara se 'c' eh o fim (EOF)
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    fclose(fp);
    return 0;
}