#include <stdio.h>

/* OBJETIVO: Mostrar como copiar todos os dados de uma struct para outra usando '='.
 * O C copia campo por campo automaticamente de 'a' para 'b'.
 */

struct Carro {
    char *nome;
    int velocidade;
};

int main() {
    struct Carro a = {.nome = "Saturn SL/2", .velocidade = 175};
    struct Carro b;

    // COPIA COMPLETA: 'b' agora tem os mesmos valores de 'a'
    b = a;

    printf("Carro A: %s | Vel: %d\n", a.nome, a.velocidade);
    printf("Carro B: %s | Vel: %d (Copia de A)\n", b.nome, b.velocidade);

    return 0;
}