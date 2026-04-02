#include <stdio.h>

int main() {
    int opcao;

    do {
        // O bloco de código que SERÁ executado pelo menos uma vez
        printf("\n--- BANCO C-FLORENCE ---\n");
        printf("1. Ver Saldo\n");
        printf("2. Sacar Dinheiro\n");
        printf("3. Depositar\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao); // Lê a escolha do usuário

        // Lógica para cada opção
        if (opcao == 1) {
            printf(">> Seu saldo e R$ 1.000,00\n");
        } else if (opcao == 2) {
            printf(">> Dinheiro sacado com sucesso!\n");
        } else if (opcao == 3) {
            printf(">> Deposito realizado!\n");
        } else if (opcao != 0) {
            printf(">> Opcao invalida, tente novamente.\n");
        }

    } while (opcao != 0); // Só para o loop quando o usuário digita 0

    printf("Obrigado por usar nosso banco. Ate logo!\n");

    return 0;
}