#include <stdio.h>

/* OBJETIVO: Mostrar que, no padrão C99 e posteriores, podemos definir
   variáveis em qualquer ponto do bloco, não apenas no início. Só não
   podemos usar uma variável antes de sua definição. */

int main() {
    int a = 10;
    printf("a = %d (definida no início)\n", a);

    // Comentado: daria erro de compilação, pois 'b' ainda não foi definida
    // printf("%d\n", b);

    int b = 20;   // Definida bem no meio do código, após outras instruções
    printf("b = %d (definida no meio)\n", b);

    // Podemos definir ainda mais abaixo
    for (int i = 0; i < 3; i++) {
        int c = i * 5;   // Definida dentro do loop
        printf("  loop i=%d, c=%d\n", i, c);
    }

    // Misturando código e declarações
    int d;
    d = 30;
    int e = d + 5;   // Pode usar d porque já foi definida
    printf("d = %d, e = %d\n", d, e);

    return 0;
}