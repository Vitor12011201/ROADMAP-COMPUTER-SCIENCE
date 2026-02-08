#include <stdio.h>
#include <math.h> // Necessário para a função pow()

int main() {
    double base = 2.0;
    double expoente = 3.0;

    // pow(base, expoente)
    double resultado = pow(base, expoente);

    printf("%.f elevado a %.f e igual a %.2f\n", base, expoente, resultado);

    return 0;
}