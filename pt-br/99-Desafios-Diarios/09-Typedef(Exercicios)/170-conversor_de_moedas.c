/*Objetivo: Praticar a criação de um tipo abstrato para dinheiro, facilitando uma mudança futura de precisão.
1. Use o typedef para criar o tipo Moeda sendo um float.
2. No main, declare três variáveis do tipo Moeda: item1, item2 e total.
3. Atribua valores às duas primeiras, some-as no total e imprima com duas casas decimais.
- O Teste: Imagine que o cliente pediu mais precisão. Mude o typedef para double e veja se o código continua funcionando sem mexer no main.*/

#include <stdio.h>

typedef double Moedas;

int main()
{
    Moedas item_1 = 45.3;
    Moedas item_2 = 72.5;
    Moedas total;

    total = item_1 + item_2;

    printf("O total e : %.2f\n", total);

    return 0;

}
