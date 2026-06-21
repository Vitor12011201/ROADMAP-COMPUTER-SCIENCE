#include <stdio.h>

/* OBJETIVO: Demonstrar como usar os sufixos (U, L, LL) para assumir o controle 
   e forçar o compilador a alocar tamanhos específicos para constantes numéricas, 
   mesmo que o número seja pequeno e caiba em um int padrão. */

int main() {
    // O número 10 cabe em 4 bytes (int), mas vamos forçar a CPU a tratá-los com outros tamanhos
    printf("Tamanho de '10' puro (int padrao):    %zu bytes\n", sizeof(10));
    
    // Sufixo L força a virar Long
    printf("Tamanho de '10L' (Long int):          %zu bytes\n", sizeof(10L));
    
    // Sufixo LL força a virar Long Long (64 bits garantidos)
    printf("Tamanho de '10LL' (Long Long int):    %zu bytes\n", sizeof(10LL));
    
    // Sufixo ULL combina Sem Sinal com Long Long
    printf("Tamanho de '10ULL' (Unsigned LL):     %zu bytes\n", sizeof(10ULL));

    return 0;
}