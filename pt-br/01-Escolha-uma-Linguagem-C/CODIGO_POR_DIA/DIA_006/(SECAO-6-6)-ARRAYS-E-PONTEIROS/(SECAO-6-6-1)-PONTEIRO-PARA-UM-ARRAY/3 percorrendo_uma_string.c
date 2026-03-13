#include <stdio.h>

/*
 * Strings sao arrays, logo, o nome da string e um ponteiro para o inicio.
 */
int main() {
    char nome[] = "Zico";
    char *p = nome; // 'p' aponta para o 'Z'

    printf("Soletrando: ");
    while (*p != '\0') { // Enquanto o ponteiro nao apontar para o fim da string
        printf("%c ", *p);
        p++; // Move o ponteiro para a proxima letra
    }
    printf("\n");

    return 0;
}