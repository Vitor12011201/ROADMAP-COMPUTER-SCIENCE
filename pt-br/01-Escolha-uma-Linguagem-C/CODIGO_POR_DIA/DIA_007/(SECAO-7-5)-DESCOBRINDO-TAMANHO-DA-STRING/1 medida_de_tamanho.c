#include <stdio.h>
#include <string.h> // Obrigatorio para usar strlen()

/*
 * Objetivo: Mostrar o uso correto do tipo size_t e o formatador %zu.
 */
int main() {
    char *frase = "C eh divertido";

    // strlen retorna size_t, que eh um tipo de inteiro positivo "robusto"
    size_t tamanho = strlen(frase);

    printf("A frase: \"%s\"\n", frase);
    printf("Tem %zu caracteres.\n", tamanho);

    return 0;
}