#include <stdio.h>

/* OBJETIVO: Demonstrar como pequenas perdas de precisão abaixo de FLT_DIG
   se acumulam em loops longos, gerando erros gigantescos em sistemas de
   tempo real (como contadores de frames ou taxas de transferência). */

int main() {
    float tempo_float = 0.0f;
    double tempo_double = 0.0; // O double tem DBL_DIG (15 dígitos), muito mais seguro

    // Simulando um loop que roda 100.000 vezes adicionando 0.1 milissegundos
    // 0.1 não tem representação exata em binário puro!
    for (int i = 0; i < 100000; i++) {
        tempo_float += 0.1f;
        tempo_double += 0.1;
    }

    // O resultado correto deveria ser exatamente 10000.0
    printf("--- Comparação de Acúmulo de Erro ---\n");
    printf("Resultado esperado: 10000.000000\n");
    printf("Total com FLOAT:    %f (Errou por conta do acúmulo)\n", tempo_float);
    printf("Total com DOUBLE:   %f (Manteve-se preciso)\n", tempo_double);

    return 0;
}