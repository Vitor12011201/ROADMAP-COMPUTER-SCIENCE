#include <stdio.h>

// Se você omitir o break, o C "cai" para o próximo case. Veja como usar isso para criar combos onde um item maior inclui os menores:

int main(void) {
    int combo_escolhido = 1; // 1: Combo Família, 2: Combo Duplo, 3: Individual

    printf("Seu pedido inclui:\n");

    switch (combo_escolhido) {
        case 1:
            printf("- Batata Gigante\n");
            // Sem break! O código continua para o próximo caso...
            // Fall through!
        case 2:
            printf("- Refrigerante 2L\n");
            // Fall through!
        case 3:
            printf("- Hamburguer Clássico\n");
            break; // O Individual para aqui. Os outros trouxeram tudo acima.

        default:
            printf("- Opção de combo inexistente.\n");
            break;
    }
}