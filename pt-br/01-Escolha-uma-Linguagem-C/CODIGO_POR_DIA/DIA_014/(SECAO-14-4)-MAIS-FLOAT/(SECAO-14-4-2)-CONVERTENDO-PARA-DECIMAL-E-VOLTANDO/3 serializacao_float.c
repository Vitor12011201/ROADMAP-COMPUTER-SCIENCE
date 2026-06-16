#include <stdio.h>
#include <float.h>
#include <stdlib.h>

/* OBJETIVO: Simular a gravação de uma coordenada geográfica de alta precisão
   em formato de texto (string) e sua leitura de volta. Mostrar que usar FLT_DIG
   corrompe os bits originais, enquanto FLT_DECIMAL_DIG preserva o estado idêntico. */

int main() {
    float posicao_original = 0.123456789f;
    char buffer_errado[32];
    char buffer_correto[32];

    // CENÁRIO ERRO: Salvando usando apenas FLT_DIG (6 casas)
    snprintf(buffer_errado, sizeof(buffer_errado), "%.*f", FLT_DIG, posicao_original);

    // CENÁRIO CORRETO: Salvando usando FLT_DECIMAL_DIG (9 casas no caso do float)
    snprintf(buffer_correto, sizeof(buffer_correto), "%.*f", FLT_DECIMAL_DIG, posicao_original);

    // Restaurando os valores a partir do texto convertido
    float recuperado_errado = strtof(buffer_errado, NULL);
    float recuperado_correto = strtof(buffer_correto, NULL);

    printf("Posicao Original pura na RAM:   %.9f\n\n", posicao_original);

    printf("Texto salvo com FLT_DIG:         %s\n", buffer_errado);
    printf("Recuperado com perda de bits:   %.9f (Os ultimos digitos mudaram!)\n\n", recuperado_errado);

    printf("Texto salvo com DECIMAL_DIG:     %s\n", buffer_correto);
    printf("Recuperado de forma IDENTICA:   %.9f (Bits 100%% preservados!)\n", recuperado_correto);

    return 0;
}