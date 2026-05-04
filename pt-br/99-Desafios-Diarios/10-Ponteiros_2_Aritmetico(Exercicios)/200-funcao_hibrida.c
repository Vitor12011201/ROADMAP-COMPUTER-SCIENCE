/*Objetivo: Confirmar que uma função aceita tanto o nome do array quanto um ponteiro.
1. Crie uma função void mostra_primeiro(int *p) que apenas imprime o valor do primeiro elemento usando *p.
2. No main, crie um array int lista[] = {100, 200}; e um ponteiro int *ptr = lista;.
3. Chame a função duas vezes: uma passando lista e outra passando ptr.
O que observar: A função funciona identicamente, provando que ela só se importa com o endereço inicial.*/

#include <stdio.h>

void mostrar_primeiro(int *p)
{
    printf("%d\n", *p);
}

int main()
{

    int lista[] = {100 , 200};
    int *ptr = lista;

    mostrar_primeiro(lista);
    mostrar_primeiro(ptr);

    return 0;

}