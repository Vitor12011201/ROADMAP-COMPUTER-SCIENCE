#include <stdio.h>

int somaArray(int *ptr, int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += *(ptr + i);
    }

    return soma;
}

void imprimirArray(int *ptr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

int main() {
    int numeros[5];

    printf("Digite 5 numeros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros digitados: ");
    imprimirArray(numeros, 5);

    int resultado = somaArray(numeros, 5);

    printf("Soma total: %d\n", resultado);

    return 0;
}