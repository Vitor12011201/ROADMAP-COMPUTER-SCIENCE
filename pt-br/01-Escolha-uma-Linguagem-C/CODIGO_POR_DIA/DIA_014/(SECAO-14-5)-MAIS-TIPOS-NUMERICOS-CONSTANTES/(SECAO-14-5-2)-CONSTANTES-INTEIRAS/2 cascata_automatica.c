#include <stdio.h>

/* OBJETIVO: Visualizar a "cascata de decisão" do C11 na prática. Mostrar que,
   sem sufixo, o compilador aumenta dinamicamente o tipo do literal conforme
   o número cresce para evitar que o dado nasça estourado. */

int main() {
    // 2000000000 (2 bilhões) cabe em um int assinado de 32 bits
    printf("Tamanho de 2000000000:  %zu bytes\n", sizeof(2000000000));

    // 3000000000 (3 bilhões) NÃO cabe em um int assinado de 32 bits.
    // O C automaticamente desce a cascata e promove o literal para 'long' ou 'long long' (8 bytes)
    printf("Tamanho de 3000000000:  %zu bytes (Promovido automaticamente!)\n", sizeof(3000000000));

    // Adicionando o sufixo U, ele cabe de volta em 4 bytes como Unsigned Int!
    printf("Tamanho de 3000000000U: %zu bytes (Forçado a caber em 32 bits sem sinal)\n", sizeof(3000000000U));

    return 0;
}