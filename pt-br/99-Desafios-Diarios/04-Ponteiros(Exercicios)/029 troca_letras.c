/* Crie um char letra = 'A';.
Crie um ponteiro char *p que aponte para letra.
Use o ponteiro para mudar a letra para 'Z'.
Imprima letra e *p. */

#include <stdio.h>

int main () {

    char letra = 'A';
    char *p = &letra;
    printf("A oque tem na variavel Letra e o: %c\n", letra);
    *p = 'Z';
    printf("Agora oque tem na variavel Letra e o: %c\n", letra);
}