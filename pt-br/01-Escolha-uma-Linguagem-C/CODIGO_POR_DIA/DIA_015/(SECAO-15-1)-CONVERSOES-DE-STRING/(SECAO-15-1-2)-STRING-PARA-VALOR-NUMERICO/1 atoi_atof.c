#include <stdio.h>
#include <stdlib.h> // Contém atoi e atof

/* OBJETIVO: Demonstrar o uso simples da família 'atoi' e evidenciar o risco
   do comportamento indefinido quando a string não é um número válido. */

int main() {
    char *texto_pi = "3.14159";
    char *texto_lixo = "Ronaldo123";

    // Conversão direta de string para float/double
    float pi_convertido = atof(texto_pi);
    printf("Sucesso com atof: %f\n", pi_convertido);

    // O PERIGO: "Ronaldo123" não começa com número.
    // O atoi() pode retornar 0, pode travar, ou pode pegar lixo da memória.
    int resultado_imprevisivel = atoi(texto_lixo);
    printf("Resultado com string invalida: %d (Nunca confie nesse zero!)\n", resultado_imprevisivel);

    return 0;
}