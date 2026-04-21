#include <stdio.h>

/* OBJETIVO: Definir uma struct e criar um apelido para ela em um passo separado.
   Isso permite usar 'struct Animal' ou apenas 'animal_t' no código. */

struct Animal {
    char *nome;
    int patas;
};

// Criando o apelido
typedef struct Animal animal_t;

int main() {
    struct Animal a1 = {"Gato", 4};
    animal_t b1 = {"Cachorro", 4};

    printf("%s e %s tem %d patas.\n", a1.nome, b1.nome, a1.patas);
    return 0;
}