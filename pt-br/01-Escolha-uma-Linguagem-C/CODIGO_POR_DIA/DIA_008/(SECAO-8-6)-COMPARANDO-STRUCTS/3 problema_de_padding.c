#include <stdio.h>
#include <string.h>

/* OBJETIVO: Ilustrar por que comparar a memoria bruta (memcmp) pode falhar.
 * O C as vezes coloca bytes vazios (padding) entre os campos para alinhar a memoria.
 */

struct Exemplo {
    char c;    // 1 byte
    // Aqui o C pode colocar 3 bytes de "padding" (lixo) para alinhar o int
    int i;     // 4 bytes
};

int main() {
    struct Exemplo e1, e2;

    // Limpar a memoria com memset ajuda, mas comparar campo a campo ainda eh melhor
    memset(&e1, 0, sizeof(e1));
    memset(&e2, 0, sizeof(e2));

    e1.c = 'A'; e1.i = 10;
    e2.c = 'A'; e2.i = 10;

    // memcmp olha os bytes brutos, incluindo o padding invisivel
    if (memcmp(&e1, &e2, sizeof(struct Exemplo)) == 0) {
        printf("Memoria identica.\n");
    } else {
        printf("Memoria diferente (provavelmente devido ao padding).\n");
    }

    return 0;
}