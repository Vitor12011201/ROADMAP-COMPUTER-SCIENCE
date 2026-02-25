/*Crie uma variável float salario = 2000.0; no seu main.
Crie uma função chamada dar_aumento.
Essa função deve receber um ponteiro para float (float *p_sal).
Lá dentro, a função deve aumentar o valor em 10% (Dica: *p_sal = *p_sal * 1.10;).
No main, chame a função passando o endereço do seu salário e depois imprima o valor final.*/

#include <stdio.h>

void aumento_salario(float *prt) {
    *prt = *prt * 1.10;
}

int main () {
    float salario = 1500;
    printf("O valor do seu salario e de: %.2f\n", salario);
    printf("=================================\n");
    aumento_salario(&salario);
    printf("O valor do seu salario com aumento agora e de %.2f\n", salario);
}