#include <stdio.h>

/* OBJETIVO: Alertar sobre a "Copia Rasa". Quando copiamos structs com ponteiros,
 * ambas as structs acabam apontando para o MESMO lugar na memoria.
 */

struct Carro {
    char *nome; // Ponteiro para string
};

int main() {
    struct Carro a = {.nome = "Original"};
    struct Carro b;

    // Copiamos a struct. O endereco do ponteiro 'nome' eh copiado.
    b = a;

    // Se mudarmos o conteúdo apontado por 'a', 'b' tambem vera a mudanca
    // porque ambos os ponteiros 'nome' apontam para o mesmo texto.
    printf("Nome A: %p (Endereco)\n", (void*)a.nome);
    printf("Nome B: %p (Mesmo Endereco)\n", (void*)b.nome);

    return 0;
}