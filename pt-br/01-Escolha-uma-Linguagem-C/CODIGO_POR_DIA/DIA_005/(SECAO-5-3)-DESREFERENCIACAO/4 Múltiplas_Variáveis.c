// Um ponteiro pode apontar para coisas diferentes em momentos diferentes. Quando você desreferencia,
// o efeito acontece na variável que ele está apontando naquele momento.

#include <stdio.h>

int main(void) {
    int feijao = 10;
    int arroz = 20;
    int *ptr;

    // Apontando para o feijao
    ptr = &feijao;
    *ptr = 0; // Feijao vira 0

    // Apontando para o arroz
    ptr = &arroz;
    *ptr = 50; // Arroz vira 50

    printf("Feijao: %d, Arroz: %d\n", feijao, arroz);
    return 0;
}