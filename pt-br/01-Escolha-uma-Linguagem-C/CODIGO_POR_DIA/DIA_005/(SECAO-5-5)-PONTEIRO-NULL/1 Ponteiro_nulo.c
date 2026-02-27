#include <stdio.h>

int main(void) {
    // 1. Inicializando com NULL (Segurança em primeiro lugar)
    int *p = NULL;

    // 2. Antes de usar, verificamos se ele "existe"
    if (p == NULL) {
        printf("O ponteiro p nao aponta para nada ainda!\n");
    }

    // 3. Agora damos um endereco real para ele
    int idade = 25;
    p = &idade;

    if (p != NULL) {
        printf("Agora p aponta para o valor: %d\n", *p);
    }

    // 4. O PERIGO: Desreferenciar NULL
    // int *perigo = NULL;
    // *perigo = 10; // Isso vai causar um "Segmentation Fault" (seu programa morre)

    return 0;
}