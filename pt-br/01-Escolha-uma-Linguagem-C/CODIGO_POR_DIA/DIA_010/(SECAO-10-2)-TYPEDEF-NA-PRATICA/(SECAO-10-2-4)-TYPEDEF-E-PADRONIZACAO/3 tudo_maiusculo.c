#include <stdio.h>

/* OBJETIVO: Usar UPPER_SNAKE_CASE para definições de tipo.
   Menos comum hoje, mas ainda encontrado em códigos mais antigos
   ou em tipos que representam configurações fixas. */

typedef struct {
    int largura;
    int altura;
} TELA_CONFIG;

int main() {
    TELA_CONFIG config = {1920, 1080};
    printf("Resolução: %dx%d\n", config.largura, config.altura);
    return 0;
}