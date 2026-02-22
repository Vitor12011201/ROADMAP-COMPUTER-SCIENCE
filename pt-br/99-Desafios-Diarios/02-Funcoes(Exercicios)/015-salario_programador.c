/*Passagem por valor não altera o original.
Reescreva o código do Exercício 2 (do salário) para que o aumento realmente funcione,
fazendo a função retornar o novo valor e o main atualizando a variável.*/

#include <stdio.h>

float aumentar_salario(float salario)
{
    salario = salario + 500.00;
    return salario;
}

int main ()
{
    float salario_1 = 2000.00;
    printf("Parabens voce recebeu um aumento de salario \n");
    printf("Seu nome salario e de: %.2f \n" , aumentar_salario(salario_1));
}