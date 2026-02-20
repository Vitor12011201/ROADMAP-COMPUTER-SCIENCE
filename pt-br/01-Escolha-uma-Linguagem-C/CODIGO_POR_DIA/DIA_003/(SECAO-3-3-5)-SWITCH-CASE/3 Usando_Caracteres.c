#include <stdio.h>

int main(void) {
    char tecla = 's'; // Teclas de movimento: w, a, s, d

    switch (tecla) {
        case 'w':
            printf("O personagem andou para FRENTE.\n");
            break;
        case 's':
            printf("O personagem andou para TRAS.\n");
            break;
        case 'a':
            printf("O personagem virou para a ESQUERDA.\n");
            break;
        case 'd':
            printf("O personagem virou para a DIREITA.\n");
            break;
        default:
            // Se o usuário apertar qualquer outra tecla (ex: 'x')
            printf("Tecla invalida! Use W, A, S ou D.\n");
            break;
    }
}