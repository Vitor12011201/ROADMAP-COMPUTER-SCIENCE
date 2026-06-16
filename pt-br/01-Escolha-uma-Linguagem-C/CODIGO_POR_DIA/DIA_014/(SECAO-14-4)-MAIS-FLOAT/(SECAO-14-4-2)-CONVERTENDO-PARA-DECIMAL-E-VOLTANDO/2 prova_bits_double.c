#include <stdio.h>
#include <float.h>

/* OBJETIVO: Reproduzir o experimento do Beej mostrando que um double pode
   armazenar perfeitamente um número com mais dígitos que DBL_DIG, e que precisamos
   de 17 casas decimais (%17f) para capturar o valor real do bit. */

int main() {
    // 15 dígitos significativos (Dentro do DBL_DIG)
    double x = 0.123456789012345;
    // O valor bem pequeno que vai forçar o bit lá na frente
    double y = 0.0000000000000006;

    double resultado = x + y;

    // Se imprimirmos com 15 dígitos (DBL_DIG), ele arredonda de forma "bonitinha"
    printf("Exibicao com 15 casas (DBL_DIG):     %.15f\n", resultado);

    // Se usarmos 17 casas, revelamos a real e exata representação binária dele
    printf("Representacao real em 17 casas:      %.17f\n", resultado);

    // Atribuindo o valor exato de 17 dígitos descoberto para provar que ele é estável
    double z = 0.12345678901234559;
    printf("Provando estabilidade do z (17 casas): %.17f\n", z);

    return 0;
}