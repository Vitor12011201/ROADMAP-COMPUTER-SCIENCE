/*Objetivo: Ver como um array pode "invadir" o espaço de outro quando estouramos o limite.
Declare duas variáveis na sequência:
1. Primeiro: int array_perigoso[2] = {1, 1};
2. Segundo: int vizinho = 500;
3. Crie um loop que percorra o array_perigoso, mas em vez de parar no índice 1, vá até o índice 5.
Veja se, em algum momento da impressão, o valor 500 do seu vizinho aparece "do nada".*/

#include <stdio.h>

int main()
{
    int array[2] = {1, 1};
    int vizinho = 500;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
}
