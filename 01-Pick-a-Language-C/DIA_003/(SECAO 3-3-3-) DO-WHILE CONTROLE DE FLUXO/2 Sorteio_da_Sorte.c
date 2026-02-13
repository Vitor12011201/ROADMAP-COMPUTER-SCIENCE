#include <stdio.h>
#include <stdlib.h> // Para usar rand() e srand()
#include <time.h>   // Para usar o tempo como semente

int main() {
    int r;

    // Pequeno truque: srand(time(NULL)) faz os numeros serem
    // diferentes toda vez que voce roda o programa!
    srand(time(NULL));

    printf("Procurando o numero 37...\n");

    do {
        r = rand() % 100; // Gera um numero entre 0 e 99
        printf("Sorteado: %d\n", r);
    } while (r != 37); // Repita ENQUANTO o numero nao for 37

    printf("Finalmente encontramos o 37!\n");

    return 0;
}