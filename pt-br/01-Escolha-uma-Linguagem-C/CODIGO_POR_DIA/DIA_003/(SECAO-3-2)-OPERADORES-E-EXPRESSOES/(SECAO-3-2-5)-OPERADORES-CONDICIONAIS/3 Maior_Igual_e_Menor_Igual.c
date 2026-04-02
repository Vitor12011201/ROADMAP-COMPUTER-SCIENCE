#include <stdio.h>

int main() {
    int nota = 7;

    // Se a nota for 7 ou mais, passou
    if (nota >= 7) {
        printf("Aprovado!\n");
    }

    // Se a nota for 7 ou menos, esta em perigo
    if (nota <= 7) {
        printf("Cuidado, voce esta no limite.\n");
    }

    return 0;
}