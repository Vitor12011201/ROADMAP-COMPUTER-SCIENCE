#include <stdio.h>

int main() {
    int x = 5;

    // Apenas a linha imediatamente abaixo faz parte do if
    if (x == 10)
        printf("Isso NAO vai aparecer.\n");

    printf("Isso APARECE SEMPRE, pois esta fora do if.\n");

    return 0;
}