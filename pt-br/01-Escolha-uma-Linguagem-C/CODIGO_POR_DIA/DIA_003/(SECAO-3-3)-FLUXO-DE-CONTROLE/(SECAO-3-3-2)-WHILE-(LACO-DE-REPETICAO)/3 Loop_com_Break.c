#include <stdio.h>

int main() {
    int numero;

    printf("--- DIGITE NUMEROS (Negativo para sair) ---\n");

    // Criamos um loop infinito proposital com while(1)
    while (1) {
        printf("Digite um valor: ");
        scanf("%d", &numero); // Lendo o número do teclado

        // Condição de saída:
        if (numero < 0) {
            printf("Saindo do loop...\n");
            break; // O computador pula direto para FORA das chaves do while
        }

        // Isso só acontece se o break NÃO for executado
        printf("Voce digitou: %d (o loop continua...)\n", numero);
    }

    printf("Ufa! Saímos do loop com sucesso.\n");

    return 0;
}