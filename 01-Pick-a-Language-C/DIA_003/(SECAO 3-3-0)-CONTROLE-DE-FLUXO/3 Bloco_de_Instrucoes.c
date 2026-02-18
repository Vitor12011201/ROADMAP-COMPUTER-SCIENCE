#include <stdio.h>

int main() {
    int x = 10;

    if (x == 10) {
        printf("x e realmente 10.\n");
        printf("Agora sim, esta frase tambem depende do if.\n");
        int soma = x + 5;
        printf("Resultado dentro do bloco: %d\n", soma);
    }

    return 0;
}