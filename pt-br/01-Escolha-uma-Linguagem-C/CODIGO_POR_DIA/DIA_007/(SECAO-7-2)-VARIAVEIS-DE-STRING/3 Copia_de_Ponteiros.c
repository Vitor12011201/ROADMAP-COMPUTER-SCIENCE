#include <stdio.h>

/*
 * Objetivo: Mostrar que 't = s' faz ambos apontarem para a mesma frase.
 */
int main() {
    char *s = "Texto Original";
    char *t;

    t = s; // 't' agora aponta para o mesmo lugar que 's'

    printf("Endereco de s: %p\n", (void*)s);
    printf("Endereco de t: %p\n", (void*)t);
    printf("Ambos imprimem: %s\n", t);

    return 0;
}