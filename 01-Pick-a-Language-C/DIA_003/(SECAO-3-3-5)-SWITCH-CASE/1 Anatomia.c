#include <stdio.h>

int main(void) {
    int cor_sinal = 2; // 1: Verde, 2: Amarelo, 3: Vermelho

    // O switch avalia o valor inteiro de 'cor_sinal'
    switch (cor_sinal) {
        case 1:
            printf("Sinal Verde: Pode seguir.\n");
            break; // Sai do switch aqui se o valor for 1

        case 2:
            // O programa "pula" diretamente para cá se cor_sinal for 2
            printf("Sinal Amarelo: Atencao, reduza a velocidade.\n");
            break; // Impede que o código execute o próximo caso abaixo

        case 3:
            printf("Sinal Vermelho: Pare o veículo!\n");
            break;

        default:
            // Executado apenas se 'cor_sinal' não for nem 1, nem 2, nem 3
            printf("Erro: Cor de sinal invalida.\n");
            break;
    }
}