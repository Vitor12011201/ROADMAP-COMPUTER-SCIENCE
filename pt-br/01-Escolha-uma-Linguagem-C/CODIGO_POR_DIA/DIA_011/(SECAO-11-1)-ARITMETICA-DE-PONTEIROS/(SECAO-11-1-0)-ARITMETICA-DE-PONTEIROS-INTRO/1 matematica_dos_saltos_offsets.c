#include <stdio.h>

/* OBJETIVO: Demonstrar como o endereço de memória muda dependendo do tipo do dado.
Somar 1 a um ponteiro de int pula mais bytes do que somar 1 a um ponteiro de char. */

int main() {
    int n = 10;
    char c = 'A';

    int *ptr_int = &n;
    char *ptr_char = &c;

    printf("Endereço inicial INT:  %p\n", (void*)ptr_int);
    // ptr_int + 1 vai pular 4 bytes (tamanho do int)
    printf("Endereço INT + 1:     %p\n\n", (void*)(ptr_int + 1));

    printf("Endereço inicial CHAR: %p\n", (void*)ptr_char);
    // ptr_char + 1 vai pular apenas 1 byte (tamanho do char)
    printf("Endereço CHAR + 1:    %p\n", (void*)(ptr_char + 1));

    return 0;
}