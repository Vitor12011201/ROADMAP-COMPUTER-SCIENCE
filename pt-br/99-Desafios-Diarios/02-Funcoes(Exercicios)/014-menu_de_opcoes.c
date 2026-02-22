/*Peça os dois números.
Mostre um pequeno menu:
1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
Peça para o usuário escolher uma opção (ex: int opcao).
Use if ou switch para chamar apenas a função que o usuário escolheu.*/

#include <stdio.h>

float soma(float a, float b)
{
    return a + b;
}
float subtracao(float a, float b)
{
    return a - b;
}
float multiplicacao(float a , float b)
{
    return a * b;
}
float divisao(float a, float b)
{
    if (b == 0)
    {
        printf("Nao existe divisao por 0 \n");
    }
    return a / b;
}

int main ()
{
    float n_1 , n_2;
    int resposta;
    do {
        printf("Digite um numero: \n");
        scanf("%f", &n_1);
        printf("Digite outro numero: \n");
        scanf("%f", &n_2);
        printf("-------------------------------------------------\n");
        printf("1 - somar \n");
        printf("2 - subtracao \n");
        printf("3 - multiplicacao \n");
        printf("4 - divisao \n");
        printf("0 - Sair do Programa \n");
        printf("Digite oque voce quer fazer com esses numeros: \n");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            printf("A soma de %.2f e %.2f é de: %.2f \n", n_1 , n_2, soma(n_1,n_2));
            break;
        case 2:
            printf("A Subtracao de %.2f e %.2f e de: %.2f \n", n_1, n_2, subtracao(n_1,n_2));
            break;
        case 3:
            printf("A multiplicacao de %.2f e %.2f e de: %.2f \n", n_1 , n_2 , multiplicacao(n_1,n_2));
            break;
        case 4:
            printf("A Divisao de %.2f e %.2f e de: %.2f \n ", n_1, n_2, divisao(n_1,n_2));
            break;
        }
}
    while (resposta != 0);

    printf("Obrigado por usar o programa, volte sempre \n");
}
