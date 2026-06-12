#include <stdio.h>

/* OBJETIVO: Demonstrar visualmente o limite do 'float' padrão. Ao tentar usar
   muitas casas decimais, o float estoura sua mantissa e começa a inventar números
   (arredondamento), enquanto o 'double' mantém o valor correto. */

int main() {
    // Usando o mesmo número longo em ambos (Formatador %.15f força 15 casas na tela)
    float f_pi = 3.141592653589793;
    double d_pi = 3.141592653589793;

    // O float vai falhar por volta do 7º dígito
    printf("Valor no FLOAT:  %.15f\n", f_pi);

    // O double aguenta até 15-17 dígitos tranquilamente
    printf("Valor no DOUBLE: %.15f\n", d_pi);

    return 0;
}