#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Testando a geração aleatória com a semeadura (seed) do srand
printf("Teste rand sem srand: \n");

    // srand(time(NULL)) semeia o gerador de números aleatórios
    // usando o horário atual do sistema.

    srand(time(NULL));

    printf("%d\n" ,rand());
    printf("%d\n", rand());
    printf("%d\n", rand());

    return 0;
}