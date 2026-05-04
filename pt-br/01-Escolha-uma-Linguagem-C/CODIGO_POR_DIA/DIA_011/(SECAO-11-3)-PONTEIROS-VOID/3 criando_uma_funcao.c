#include <stdio.h>

/* OBJETIVO: Implementar uma função simplificada que imprime bytes de qualquer dado,
   usando a lógica da memcpy() de tratar tudo como um array de caracteres (bytes). */

// Esta funcao nao sabe se recebe um int, um float ou uma struct
void imprimir_bytes(void *objeto, int tamanho) {
    unsigned char *p = (unsigned char *)objeto; // Tratamos como bytes individuais

    for (int i = 0; i < tamanho; i++) {
        printf("%02x ", p[i]); // Imprime o valor em hexadecimal
    }
    printf("\n");
}

int main() {
    int a = 256;         // Em binário, ocupa mais de um byte
    float b = 1.0;
    char s[] = "C";

    printf("Bytes do int 256: ");
    imprimir_bytes(&a, sizeof(int));

    printf("Bytes do float 1.0: ");
    imprimir_bytes(&b, sizeof(float));

    printf("Bytes da string 'C': ");
    imprimir_bytes(s, sizeof(s));

    return 0;
}