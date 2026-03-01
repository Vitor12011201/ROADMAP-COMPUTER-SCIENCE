#include <stdio.h>

/*Simulador de Caixa Eletrônico (usando while)
Faça um programa em C que simula um caixa eletrônico simples.
O usuário começa com um saldo inicial de R$ 0.00.
O programa deve mostrar um menu repetidamente, até o usuário escolher sair.*/

int main()
{
    printf("=== Bem-Vindo ao Programa ===\n");

    int resposta_Usuario = 1;
    int resposta;
    float saldo = 0;
    float deposito = 0;
    float sacar = 0;

    while (resposta_Usuario != 0)
    {
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Ver Saldo\n");
        printf("0 - Sair\n");
        printf("Digita sua resposta: \n");
        scanf("%d", &resposta_Usuario);
        if (resposta_Usuario != 1 && resposta_Usuario != 2 && resposta_Usuario != 3 && resposta_Usuario != 0)
        {
            printf("Digite um numero valido porfavor\n");
            printf("================================\n");
        }

        switch (resposta_Usuario)
        {
        case 1:
            do
            {
                printf("Quanto quer DEPOSITAR?: \n");
                scanf("%f", &deposito);
                if (deposito <= 0)
                {
                    printf("O Valor Digitado e negativo, porfavor digitar um valor valido para deposito \n");
                }
            }
            while (deposito <= 0);

            saldo = deposito + saldo;
            printf("Seu Saldo atual e de R$: %.2f \n", saldo);
            printf("=================================\n");
            do
            {
                printf("Oque quer fazer agora?\n");
                printf("Digite (1) Retornar ao menu principal\n");
                printf("Digite (0) Para encerrar o Programa\n");
                scanf("%d", &resposta);
                if (resposta == 1)
                {
                    break;
                }
                else if (resposta == 0)
                {
                    printf("Programa encerrado, Obrigado e volte sempre\n");
                    return NULL;
                }
                else
                {
                    printf("O numero digitado e diferente de 1 ou 0, porfavor digitar um valor valido\n");
                }
            }
            while (resposta != 1 || resposta != 0);
            break;
        case 2:
            do
            {
                printf("Quando quer SACAR? :\n");
                scanf("%f", &sacar);
                if (saldo < sacar)
                {
                    printf("Seu saldo e insuficiente para saque \n");
                    printf("Seu saldo atual e de R$: %.2f \n", saldo);
                }
                if (sacar <= 0)
                {
                    printf("O valor digitado e negativo, porfavor digitar um valor valido \n");
                }
            }
            while (sacar <= 0);

            if (saldo > sacar)
            {
                saldo = saldo - sacar;
                printf("Seu novo saldo e de R$: %.2f \n", saldo);
            }

            do
            {
                printf("Oque quer fazer agora?\n");
                printf("Digite (1) para voltar ao Menu Principal\n");
                printf("Digite (0) para sair do programa\n");
                scanf("%d", &resposta);
                if (resposta == 1)
                {
                    break;
                }
                else if (resposta == 0)
                {
                    printf("Obrigado por usar o programa, volte sempre");
                    return NULL;
                }
                else
                {
                    printf("O numero digitado nao e 1 ou 2, porfavor digitar um numero valido");
                }
            }
            while (resposta != 1 || resposta != 0);
            break;
        case 3:
            printf("Seu Saldo e de R$: %.2f\n", saldo);
            printf("oque quer fazer agora?\n");
            printf("Digite (1) para voltar ao menu principal\n");
            printf("Digite (0) para encerrar o programa\n");
            scanf("%d", &resposta);
            if (resposta == 1)
            {
                break;
            }
            else if (resposta == 0)
            {
                printf("Obrigado por usar o programa, volte sempre");
                return NULL;
            }
            break;
        case 0:
            printf("Obrigado por usar o programa, volte sempre");
            return NULL;
        }
    }
}
