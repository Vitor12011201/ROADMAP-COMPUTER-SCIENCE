#include <stdio.h>

/* OBJETIVO: Mostrar que variáveis declaradas dentro de um bloco (aqui,
   bloco do 'if') não são acessíveis fora dele. Já variáveis do bloco
   externo (main) são visíveis dentro do bloco interno. */

int main() {
    int a = 12;   // Variável do escopo principal do main

    printf("Antes do bloco: a = %d\n", a);

    if (a == 12) {
        // Bloco interno: podemos acessar 'a' do escopo externo
        int b = 99;   // Variável LOCAL a este bloco
        printf("Dentro do bloco: a = %d, b = %d\n", a, b);
    } // Fim do bloco - 'b' morre aqui

    printf("Fora do bloco: a = %d (ainda viva)\n", a);

    // Tentar usar b aqui causaria erro de compilação:
    // printf("%d\n", b);  // ERRO! 'b' não está declarado neste escopo

    return 0;
}