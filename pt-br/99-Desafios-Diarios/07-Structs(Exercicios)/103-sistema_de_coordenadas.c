/* Objetivo: Usar structs para resolver um problema lógico simples.
Crie uma struct Ponto que contenha int x e int y.
Peça ao usuário para digitar as coordenadas de dois pontos diferentes (p1 e p2).
Calcule o "Ponto Médio" entre eles.
O Ponto Médio é uma nova struct Ponto onde o X é a média dos Xs e o Y é a média dos Ys.
Imprima o resultado: "O ponto médio entre eles é (%d, %d)".*/

#include <stdio.h>

struct ponto
{
    float x;
    float y;
};

int main()
{
    struct ponto p_1;
    struct ponto p_2;

    printf("Digite a coordenada do x_1: \n");
    scanf("%f", &p_1.x);

    printf("Digite a coordenada do y_1: \n");
    scanf("%f", &p_1.y);

    printf("Digite a coordenada do x_2: \n");
    scanf("%f", &p_2.x);

    printf("Digite a coordenada do y_2: \n");
    scanf("%f", &p_2.y);

    printf("\n");

    printf("As coordenadas x_1 e y_1 sao: (%.2f,%.2f)\n", p_1.x, p_1.y);
    printf("As coordenadas x_2 e y_2 sao: (%.2f,%.2f)\n", p_2.x, p_2.y);

    struct ponto ponto_medio = {(p_1.x + p_2.x) / 2, (p_1.y + p_2.y) / 2};

    printf("\n");

    printf("O ponto medio dessas coordenadas sao: (%.2f,%.2f)\n", ponto_medio.x, ponto_medio.y);

    return 0;
}
