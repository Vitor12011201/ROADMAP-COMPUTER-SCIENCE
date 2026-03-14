#include <stdio.h>

/**
 * Estilo (a[5])
 * O '[2]' aqui e apenas um lembrete visual de que esperamos (x, y).
 */
void imprimir_ponto(int ponto[2]) {
    printf("Coordenada: X=%d, Y=%d\n", ponto[0], ponto[1]);
}

int main() {
    int gps[] = {45, -12};
    imprimir_ponto(gps);
    return 0;
}