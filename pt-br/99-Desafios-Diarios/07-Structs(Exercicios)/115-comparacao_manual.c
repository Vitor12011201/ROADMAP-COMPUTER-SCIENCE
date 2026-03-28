/* Objetivo: Criar uma função que compare dois pontos manualmente.
1. Crie uma struct Ponto com int x e int y.
2. Crie uma função int pontos_iguais(struct Ponto p1, struct Ponto p2).
3. A função deve retornar 1 (verdadeiro) se os Xs e Ys forem iguais, e 0 (falso) caso contrário.
4. No main, teste com dois pontos iguais e dois diferentes.*/

#include <stdio.h>

struct ponto {
    int x;
    int y;
};

int pontos_iguais(struct ponto p1, struct ponto p2) {

    if (p1.x == p2.x && p1.y == p2.y) {
        printf("As coordenadas das duas structs sao iguais\n");
        return 1;
    } else {
        printf("As coordenadas das duas structs sao diferentes\n");
        return 0;
    }
}

int main() {
    struct ponto coordenada_1 = {.x = 15, .y = 20};
    struct ponto coordenada_2 = {.x = 15, .y = 20};

    pontos_iguais(coordenada_1,coordenada_2);

    return 0;

}