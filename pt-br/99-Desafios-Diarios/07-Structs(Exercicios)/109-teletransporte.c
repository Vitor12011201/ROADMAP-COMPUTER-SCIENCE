/*Objetivo: Entender a economia de memória e a alteração real de dados.
1. Crie uma struct Jogador com int x, int y e int energia.
2. Crie uma função chamada teletransportar(struct Jogador *j, int novo_x, int novo_y).
3. Essa função deve:
- Mudar as coordenadas x e y do jogador para os novos valores.
- Diminuir a energia dele em 10 pontos.
4. No main, crie o jogador na posição (0,0) com 100 de energia.
5. Chame a função e imprima os dados do jogador dentro do main para provar que ele realmente se moveu e cansou.*/

#include <stdio.h>

struct jogador
{
    int x;
    int y;
    int energia;
};

void teleportar(struct jogador *j, int novo_x, int novo_y)
{
    (*j).y = novo_y;
    (*j).x = novo_x;
    if (novo_x != 0 || novo_y != 0) {
    (*j).energia = (*j).energia - 10;
}

}

int main()
{
    struct jogador p_1 = {.x = 0, .y = 0, .energia = 100};

    printf("O jogador se encontra na posicao (%d,%d) com [%d de energia]\n", p_1.x , p_1.y, p_1.energia);
    teleportar(&p_1, 100 , 250);
    printf("\n");
    printf("O jogador usou o teleporte\n");
    printf("O jogador se encontra na posicao (%d,%d) com (%d de energia]\n", p_1.x , p_1.y, p_1.energia);

    return 0;
}