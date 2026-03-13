#include <stdio.h>

/*
 * Se 'p' e o inicio, 'p + 1' e o proximo vizinho na memoria.
 */
int main() {
    int notas[] = {7, 8, 9};
    int *p = notas; // Aponta para o 7

    printf("Primeira nota: %d\n", *p);
    printf("Segunda nota:  %d\n", *(p + 1)); // Pula para o proximo int
    printf("Terceira nota: %d\n", *(p + 2));

    return 0;
}