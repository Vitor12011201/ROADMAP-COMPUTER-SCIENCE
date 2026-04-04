/*Objetivo: Ver a cópia de structs em ação.
1. Crie uma struct Coordenada com int x e int y.
2. No main, crie p1 com valores (10, 20).
3. Crie p2 e faça p2 = p1;.
4.Mude p2.x para 99.
5. Imprima p1.x e p2.x.*/

#include <stdio.h>

struct coordenada
{
    int x;
    int y;
};

int main()
{
    struct coordenada p_1 = {.x = 10, .y = 20};
    struct coordenada p_2;
    p_2 = p_1;
    p_2.x = 99;
    printf("A coordenada p_1.x e: [%d]\n", p_1.x);
    printf("A coordenada p_2.x e: [%d]\n", p_2.x);

    return 0;
}
