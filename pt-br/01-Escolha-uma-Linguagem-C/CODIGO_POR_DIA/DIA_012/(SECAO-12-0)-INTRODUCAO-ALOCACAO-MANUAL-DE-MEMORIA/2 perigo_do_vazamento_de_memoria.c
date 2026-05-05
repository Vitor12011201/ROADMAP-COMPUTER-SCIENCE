#include <stdlib.h>

/* OBJETIVO: Ilustrar o que acontece quando você aloca memória e "esquece" de liberar.
O programa continua consumindo RAM até o computador travar ou o processo ser morto. */

void vazar_memoria() {
    // Alocamos espaço para 1000 inteiros
    int *dados = malloc(1000 * sizeof(int));

    // Esquecemos de usar free(dados) aqui!
    // Quando a função termina, perdemos o ponteiro 'dados',
    // mas o espaço continua ocupado na RAM. Isso é um LEAK.
}

int main() {
    while(1) {
        vazar_memoria(); // Se rodar isso, sua RAM vai acabar rápido!
    }
    return 0;
}