#include <stdio.h>

/* OBJETIVO: Mostrar que o EOF eh um numero e por isso precisamos de um 'int'.
 */

int main() {
    // EOF eh uma macro definida na stdio.h (geralmente vale -1)
    printf("O valor numerico do sinal EOF eh: %d\n", EOF);

    // Um 'char' comum as vezes nao consegue diferenciar o -1 de uma letra real,
    // mas o 'int' consegue separar as duas coisas perfeitamente.
    return 0;
}