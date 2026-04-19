#include <stdio.h>

/* OBJETIVO: Mostrar que voce pode criar varios nomes para o mesmo tipo
 * em uma unica linha, usando virgulas.
 */

// Todos estes nomes agora sao sinonimos de 'int'
typedef int quilometros, metros, centimetros;

int main() {
    quilometros distancia = 5;
    metros m = 5000;
    centimetros c = 500000;

    printf("%d km sao %d metros ou %d cm.\n", distancia, m, c);

    return 0;
}