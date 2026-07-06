#include <stdio.h>

/* OBJETIVO: Evidenciar o "melhor esforço" do C ao converter um inteiro grande
   para float. Mostrar que, devido ao limite de bits da mantissa (23 bits),
   o float é obrigado a sacrificar os dígitos menos significativos. */

int main() {
    // 16.777.217 é um número que ultrapassa a capacidade de precisão exata de um float de 32 bits
    int int_original = 16777217;

    // O C faz o "best effort" para aproximar o inteiro ao float representável mais próximo
    float float_aproximado = (float)int_original;

    // Convertendo de volta para int para ver o estrago
    int int_recuperado = (int)float_aproximado;

    printf("--- Teste de Limitação de Mantissa (Best Effort) ---\n");
    printf("Inteiro Original:   %d\n", int_original);
    printf("Float Aproximado:   %f\n", float_aproximado);
    printf("Inteiro Recuperado: %d (Perdemos o '1' do final por arredondamento de hardware!)\n", int_recuperado);

    return 0;
}