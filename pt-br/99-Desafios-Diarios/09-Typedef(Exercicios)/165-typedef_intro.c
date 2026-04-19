/*Objetivo: Criar um apelido para um tipo básico e um para uma struct para sentir a diferença na legibilidade.
1. Use o typedef para criar um apelido chamado Real para o tipo float.
2. Use o typedef para definir uma struct chamada Coordenada que contenha int x e int y.
No main:
3. Declare uma variável Real preco = 10.50;.
4. Declare uma Coordenada c = {10, 20};. (Repare que você não deve usar a palavra struct aqui!).
5. Imprima os valores de preco e da coordenada c.x e c.y.*/

#include <stdio.h>

typedef float Real;
typedef struct
{
    int x;
    int y;
}Coordenada;

int main()
{
    Real preco = 10.50;

    Coordenada c = {.x = 10,.y = 20};

    printf("Preco: R$ %.2f\n", preco);
    printf("Coordenadas: (x = %d) e (y = %d)\n", c.x , c.y);

    return 0;
}


