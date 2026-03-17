// Faça um array que pega as suas notas do semestre,
// imprima elas na tela

#include <stdio.h>

int main() {
    float media = 0;
    float notas[4] = {4.5, 7.8, 5.7, 9.4};
    for (int i = 0; i < 4; i++) {
        printf("A nota do seu %d Bimestre e: %.2f\n", i + 1, notas[i]);
        media += notas[i];
    }
    printf("A sua media final e: %.2f\n", media / 4);
}