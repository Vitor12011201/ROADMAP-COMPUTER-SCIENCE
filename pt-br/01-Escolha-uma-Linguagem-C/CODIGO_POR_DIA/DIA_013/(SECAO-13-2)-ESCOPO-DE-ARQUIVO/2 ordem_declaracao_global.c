#include <stdio.h>

/* OBJETIVO: Mostrar que uma variável de escopo de arquivo precisa ser
   declarada antes de ser usada. Se for declarada depois, funções anteriores
   não a enxergam. Para resolver, podemos usar declaração antecipada (extern)
   ou mover a variável para cima. */

// Protótipo (declaração) da função que usa a variável
void usar_global(void);

int global = 42;   // Declaração da variável global AGORA visível para o resto

int main() {
    printf("main: global = %d\n", global);
    usar_global();
    return 0;
}

void usar_global(void) {
    // Esta função vem DEPOIS da declaração da global, então enxerga
    printf("usar_global: global = %d\n", global);
}