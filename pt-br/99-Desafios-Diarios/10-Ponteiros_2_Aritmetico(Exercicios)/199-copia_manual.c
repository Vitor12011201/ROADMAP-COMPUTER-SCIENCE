/* Objetivo: Aplicar a equivalência para copiar dados entre dois arrays sem usar colchetes no destino.
1. Crie um array int origem[] = {1, 2, 3, 4, 5};.
2. Crie um array int destino[5];.
3. Crie um ponteiro int *p_dest = destino;.
4 Use um loop for de 0 a 4 para copiar os elementos.
5. No lado esquerdo da atribuição, use notação de ponteiro *(p_dest). No lado direito, use a notação de array origem[i].
6. No final, imprima o array destino usando apenas *(p_dest++) dentro de um loop para mostrar que os valores chegaram lá.*/

#include <stdio.h>

int main()
{

    int origem[] = {1 , 2 , 3 , 4 , 5};
    int destino[5];
    int *p_destino = destino;

    for (int i = 0; i < 5; i++)
    {
        *(p_destino) = origem[i];
        printf("%d\n", *p_destino++);
    }

    return 0;

}