/* Este exemplo desmistifica o uso do sizeof com ponteiros.
 * Demonstra que sizeof(ptr) retorna o tamanho do endereço de memória,
 * enquanto sizeof(*ptr) retorna o tamanho do tipo de dado apontado,
 * reforçando que o sizeof opera sobre tipos, não valores.*/

#include <stdio.h>

/**
 * Este código demonstra que o tamanho de um ponteiro é fixo (tamanho do endereço),
 * independente do tipo de dado para o qual ele aponta.
 */

int main() {
    char letra = 'A';    // Ocupa 1 byte
    char *ptr = &letra;  // Ocupa 8 bytes (em sistemas 64-bit)

    printf("--- Analise de Tamanhos ---\n");

    // 1. Quanto ocupa o dado real? (char)
    printf("Tamanho da variavel (letra): %zu byte\n", sizeof(letra));

    // 2. Quanto ocupa o ponteiro (a chave/endereco)?
    printf("Tamanho do ponteiro (ptr):   %zu bytes\n", sizeof(ptr));

    // 3. Quanto ocupa o que o ponteiro aponta? (o mesmo que char)
    // O '*' faz o sizeof olhar para o CONTEUDO.
    printf("Tamanho de *ptr:             %zu byte\n", sizeof(*ptr));

    return 0;
}