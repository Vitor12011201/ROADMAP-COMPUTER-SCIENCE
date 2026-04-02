#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    int soma = a + b;       // 13
    int subtrai = a - b;    // 7
    int multiplica = a * b; // 30

    // CUIDADO: Divisão de inteiro com inteiro SEMPRE dá inteiro!
    int divide = a / b;     // Resultado: 3 (ele joga fora o que vem depois da vírgula)

    // MODULO: O resto da divisão
    int resto = a % b;      // Resultado: 1 (porque 10 dividido por 3 sobra 1)

    printf("Soma: %d, Resto: %d, Divisao Inteira: %d\n", soma, resto, divide);

    return 0;
}