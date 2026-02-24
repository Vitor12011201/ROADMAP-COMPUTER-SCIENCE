#include <stdio.h>

int main(void) {
    int vida_player = 100;
    int *ptr_vida = &vida_player; // O ponteiro anota onde a vida está guardada

    printf("Vida inicial: %d\n", vida_player);

    // Desreferenciando para causar dano
    // "Vá no endereço que está em ptr_vida e mude o valor lá para 70"
    *ptr_vida = 70;

    printf("Vida apos o ataque: %d\n", vida_player); // A variável original mudou!

    // Também podemos usar para cálculos
    // "Pegue o que está no endereço e tire 10"
    *ptr_vida = *ptr_vida - 10;

    printf("Vida final: %d\n", vida_player); // Agora é 60

    return 0;
}