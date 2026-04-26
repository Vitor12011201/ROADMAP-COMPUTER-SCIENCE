/*Objetivo: Usar typedef de array dentro de uma struct para organizar dados de imagem.
1. Crie um typedef unsigned char CanaisRGB[3]; (Representando Red, Green, Blue).
2. Crie uma struct Pixel que contenha: int x, y; e uma variável do tipo CanaisRGB cor;.
3. No main, crie um Pixel p1. Defina as coordenadas e atribua valores para a cor (ex: 255, 0, 0 para vermelho).
4. Imprima os dados do pixel.
Reflexão: Note como cor dentro da struct se comporta como um array, mas na declaração parece um tipo comum.*/

#include <stdio.h>

typedef unsigned char CanaisRGB[3];

typedef struct
{
    int x;
    int y;
    CanaisRGB cor;
}Pixel;

int main()
{

    Pixel p_1 = {.x = 10,.y= 20,.cor = {0 , 0 , 255}};

    printf("Posicao do Pixel\nX = %d\nY = %d\n", p_1.x, p_1.y);

    printf("CorRGB = {%d} , {%d} , {%d}", p_1.cor[0] , p_1.cor[1] , p_1.cor[2]);

    return 0;
}

