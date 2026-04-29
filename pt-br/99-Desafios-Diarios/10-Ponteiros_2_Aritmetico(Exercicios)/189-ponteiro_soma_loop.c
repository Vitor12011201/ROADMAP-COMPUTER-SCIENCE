/*Objetivo: Percorrer e processar um array usando aritmética de ponteiros em um loop.
1. Crie um array float precos[5] = {10.5, 20.0, 5.75, 15.2, 8.9};.
2. Crie um ponteiro float *p = precos;.
3. Crie uma variável float total = 0;.
4. Use um loop for de 0 a 4. Dentro do loop, some o valor de cada item ao total, mas não use precos[i]. Use a aritmética de ponteiros: total += *(p + i);.
5. No final, imprima o total acumulado.*/

#include <stdio.h>

int main() {

    float precos[5] = {10.5 , 20.0 , 5.75, 15.2 , 8.9};

    float *p = precos;

    float total = 0;

    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", *(p + i));
        total += *(p + i);
    }

    printf("Valor total do Array: %.2f\n", total);

    return 0;

}