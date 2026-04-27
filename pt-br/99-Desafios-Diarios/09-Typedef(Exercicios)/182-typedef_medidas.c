/*Objetivo: Praticar a troca de tipos em massa.
1. Crie um typedef chamado Medida que inicialmente é um int.
2. Crie uma struct anônima chamada Retangulo que tenha Medida base; e Medida altura;.
3. No main, peça ao usuário para digitar a base e a altura, calcule a área e imprima.
O Teste: Depois de funcionar, mude o typedef Medida para float e veja como seu programa agora aceita números decimais sem você precisar mexer em mais nada no código!*/

#include <stdio.h>

typedef int Medida;

typedef struct {
    Medida base;
    Medida altura;
} Retangulo;

int main() {
    Retangulo r;

    printf("Digite a base: ");
    scanf("%d", &r.base);

    printf("Digite a altura: ");
    scanf("%d", &r.altura);

    Medida area = r.base * r.altura;

    printf("Area do retangulo: %d\n", area);

    return 0;
}