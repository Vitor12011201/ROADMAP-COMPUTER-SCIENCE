#include <stdio.h>

/* OBJETIVO: Usar letras iniciais maiúsculas (PascalCase) para tipos.
   Ajuda a diferenciar rapidamente o que é um TIPO (PascalCase) do que
   é uma VARIÁVEL (geralmente minúscula). */

typedef struct {
    int vida;
    int mana;
} StatusJogador;

int main() {
    StatusJogador jogador1 = {100, 50};
    printf("Vida do Jogador: %d\n", jogador1.vida);
    return 0;
}