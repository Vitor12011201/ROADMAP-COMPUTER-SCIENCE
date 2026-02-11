#include <stdio.h>

int main() {
    printf("=== Bem-Vindo ao Programa ===\n");

    int resposta_Usuario = 1;
    int resposta;
    float saldo = 0;
    float deposito = 0;
    float sacar = 0;

    while (resposta_Usuario != 0) {
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Ver Saldo\n");
        printf("0 - Sair\n");
        printf("Digita sua resposta: \n");
        scanf("%d", &resposta_Usuario);
        if (resposta_Usuario != 1 && resposta_Usuario != 2 && resposta_Usuario != 3 && resposta_Usuario != 0) {
            printf("Digite um numero valido porfavor\n");
            printf("================================\n");
        }

        switch (resposta_Usuario) {
            case 1:
                printf("Quanto quer DEPOSITAR?: \n");
                scanf("%f", &deposito);
                float novo_saldo = deposito + saldo;
                    saldo = novo_saldo;
                printf("Seu Saldo atual e de R$: %.2f \n", novo_saldo);
                printf("Oque quer fazer agora?\n");
                printf("Digite (1) Retornar ao menu principal\n");
                printf("Digite (0) Para encerrar o Programa\n");
                scanf("%d", &resposta);
                if (resposta == 1) {
                    break;
                } else if (resposta == 0) {
                    printf("Programa encerrado, Obrigado e volte sempre\n");
                    return NULL;
                }
            break;
            case 2:
                printf("Quando quer SACAR? :\n");
                scanf("%f", &sacar);
                float novo_saldo_sacado;
                novo_saldo_sacado = saldo - sacar;
                saldo = novo_saldo_sacado;
                printf("Seu novo saldo é de R$: %.2f\n"), saldo;
                printf("Oque quer fazer agora?\n");
                printf("Digite (1) para voltar ao Menu Principal\n");
                printf("Digite (0) para sair do programa\n");
                scanf("%d", &resposta);
                if (resposta == 1) {
                    break;
                } else if (resposta == 0) {
                    printf("Obrigado por usar o programa, volte sempre");
                    return NULL;
                }
                break;
            case 3:
                printf("Seu Saldo e de R$: %.2f\n", saldo);
                printf("oque quer fazer agora?\n");
                printf("Digite (1) para voltar ao menu principal\n");
                printf("Digite (0) para encerrar o programa\n");
                scanf("%d", &resposta);
                if (resposta == 1) {
                    break;
                } else if (resposta == 0) {
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
