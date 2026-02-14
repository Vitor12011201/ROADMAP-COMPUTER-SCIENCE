#include <stdio.h>

void oi(void)
{
    printf("Oi!\n");
}

int dobrar(int n)
{
    return n * 2;
}

int main(void)
{
    oi();  // chama função sem retorno

    int x = 5;
    int y = dobrar(x);  // chama função com retorno

    printf("O dobro de %d é %d\n", x, y);
}
