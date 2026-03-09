#include <stdio.h>

int main() {
    // O C vai contar 4 itens e criar um array de tamanho 4
    int idades[] = {18, 21, 30, 45};

    // Para saber o tamanho, usamos o truque do sizeof
    int total_elementos = sizeof(idades) / sizeof(idades[0]);

    printf("\nTamanho Automatico:\n");
    printf("O C criou um array com %d posicoes.\n", total_elementos);

    return 0;
}