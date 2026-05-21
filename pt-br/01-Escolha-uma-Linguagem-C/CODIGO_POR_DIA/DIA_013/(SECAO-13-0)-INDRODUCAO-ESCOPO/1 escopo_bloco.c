#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Mostrar o escopo de bloco (dentro de chaves {}) e como variáveis
   locais "nascem" e "morrem" ao entrar e sair do bloco. Demonstrar também
   que blocos internos podem ocultar variáveis externas. */

int main() {
    int x = 10;   // variável local ao main

    printf("Fora do bloco interno: x = %d\n", x);

    // Início de um novo bloco (escopo aninhado)
    {
        int x = 20;   // Esta variável OCULTA a x do main dentro deste bloco
        printf("Dentro do bloco interno: x = %d\n", x);

        // Podemos ter outro bloco ainda mais interno
        {
            int x = 30;
            printf("Dentro do bloco mais interno: x = %d\n", x);
        } // x = 30 morre aqui

        printf("De volta ao bloco interno (x ainda é %d)\n", x);
    } // x = 20 morre aqui

    printf("Fora novamente: x = %d (a original)\n", x);

    return 0;
}