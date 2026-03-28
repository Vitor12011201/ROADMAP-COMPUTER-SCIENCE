#include <stdio.h>
#include <string.h>

/* OBJETIVO: Mostrar a forma correta de comparar duas structs em C.
 * Como o operador '==' nao funciona para structs, comparamos cada membro individualmente.
 */

struct Carro {
    char *nome;
    int velocidade;
};

int main() {
    struct Carro a = {.nome = "Saturn", .velocidade = 175};
    struct Carro b = {.nome = "Saturn", .velocidade = 175};

    // Verificamos se os nomes sao iguais (strcmp) E se as velocidades sao iguais (==)
    if (strcmp(a.nome, b.nome) == 0 && a.velocidade == b.velocidade) {
        printf("As structs sao IGUAIS.\n");
    } else {
        printf("As structs sao DIFERENTES.\n");
    }

    return 0;
}