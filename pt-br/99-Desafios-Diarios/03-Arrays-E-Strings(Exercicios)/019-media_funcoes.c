/*Crie um programa que calcule a Média Aritmética de dois números.
Crie uma função chamada calcular_media.
Ela deve receber dois números (pode ser int ou float).
Ela deve retornar um float (porque a média de 5 e 2 é 3.5).
Dica Extra : Tente fazer a função calcular_media chamar a sua função soma dentro dela para obter o total antes de dividir por 2.*/

#include <stdio.h>

float soma(float a, float b)
{
    return a + b;
}

float media(float c)
{
    int a_1;
    int b_1;
    c = soma(a_1,b_1) / 2;
    return c;
}

int main()
{
    float a;
    float b;
    printf("Digite um numero: \n");
    scanf("%f", &a);
    printf("Digite outro numero: \n");
    scanf("%f", &b);
    printf("A media de %.2f e %.2f e igual a %.2f", a , b , media(soma(a,b)));
}
