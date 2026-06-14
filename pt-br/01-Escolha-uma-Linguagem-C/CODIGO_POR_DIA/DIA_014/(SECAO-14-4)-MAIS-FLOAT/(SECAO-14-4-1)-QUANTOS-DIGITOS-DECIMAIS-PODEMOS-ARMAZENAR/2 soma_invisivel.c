#include <stdio.h>

/* OBJETIVO: Simular o problema clássico. Quando somamos um número
   muito pequeno a um número grande, o float perde os dígitos menores porque
   eles caem fora do "alcance" dos seus 6 dígitos de precisão. */

int main() {
    // 3.14159 tem 6 dígitos significativos (Seguro!)
    float pi_estavel = 3.14159f;

    // Um valor minúsculo que queremos adicionar
    float poeira = 0.00000265358f;

    // O resultado real deveria ser 3.14159265358
    pi_estavel += poeira;

    // Vamos mandar o printf mostrar 11 casas decimais para ver o erro
    printf("Resultado esperado: 3.14159265358\n");
    printf("Resultado real do C: %.11f\n", pi_estavel);

    return 0;
}