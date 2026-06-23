#include <stdio.h>

/* OBJETIVO: Utilizar a notação científica (E-notation) para gerenciar números
   com muitos zeros e entender como o printf (%e) padroniza a exibição visual. */

int main() {
    // 1.2345e+4 significa 1.2345 * 10^4 = 12345.0
    double numero_grande = 1.2345e+4;

    // Expoentes negativos movem a vírgula para a esquerda: 5.43e-3 = 0.00543
    float numero_pequeno = 5.43e-3f; // Aceita o sufixo 'f' sem problemas

    // O Beej mostrou que você pode colocar vários dígitos antes do ponto na declaração...
    double numero_desalinhado = 123.456e+3; // 123.456 * 10^3 = 123456.0

    printf("--- Exibicao em Formato Decimal Padrao (%%f) ---\n");
    printf("Grande:   %f\n", numero_grande);
    printf("Pequeno:  %f\n", (double)numero_pequeno);
    printf("Original: %f\n\n", numero_desalinhado);

    printf("--- Exibicao Forçada em Notacao Cientifica (%%e) ---\n");
    // Repare que o printf força a exibição com apenas UM dígito antes do ponto!
    printf("Reformatado pelo printf: %e\n", numero_desalinhado);

    return 0;
}