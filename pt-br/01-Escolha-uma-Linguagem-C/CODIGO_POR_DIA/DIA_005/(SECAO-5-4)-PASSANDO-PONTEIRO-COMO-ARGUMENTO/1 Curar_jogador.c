#include <stdio.h>

// A funcao recebe um PONTEIRO (int *p)
// Ela nao recebeu a vida, ela recebeu o ENDERECO de onde a vida esta.
void curar_player(int *p_vida) {
    // Desreferenciamos para mudar o valor original la na main!
    // "Va no endereco que recebi e some 20 ao que estiver la"
    *p_vida = *p_vida + 20;

    printf("--- Funcao: Usei o mapa para curar +20 ---\n");
}

int main(void) {
    int vida = 80;

    printf("Antes da cura: %d\n", vida);

    // JEITO 1: Criando um ponteiro antes e passando ele
    int *ponteiro_para_vida = &vida;
    curar_player(ponteiro_para_vida);

    // JEITO 2 (Mais comum): Passando o endereco direto com '&'
    // curar_player(&vida);

    printf("Depois da cura: %d\n", vida); // Agora e 100!

    return 0;
}