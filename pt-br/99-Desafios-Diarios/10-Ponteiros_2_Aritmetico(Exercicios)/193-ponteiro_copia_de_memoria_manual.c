/*Objetivo: Simular o funcionamento interno de funções como strcpy, movendo dois ponteiros ao mesmo tempo.
1. Crie um array de origem: char origem[] = "Ponteiro"; (o C coloca o \0 como sentinela automaticamente).
2. Crie um array de destino: char destino[10];.
3. Crie dois ponteiros: char *p_origem = origem; e char *p_destino = destino;.
4. Use um loop while (*p_origem != '\0'):
Copie o valor: *p_destino = *p_origem;
Incremente ambos os ponteiros: p_origem++; p_destino++;
5. Não esqueça de colocar o \0 no final do destino após o loop: *p_destino = '\0';.
6. Imprima o array destino para ver se a cópia funcionou.*/

#include <stdio.h>

int main()
{

    char origem[] = "Ponteiro";
    char destino[10];

    char *p_origem = origem;
    char *p_destino = destino;

    while (*p_origem != '\0')
    {
        *p_destino = *p_origem;
        p_origem++;
        p_destino++;
    }

    *p_destino = '\0';

    printf("%s\n", destino);

    return 0;

}