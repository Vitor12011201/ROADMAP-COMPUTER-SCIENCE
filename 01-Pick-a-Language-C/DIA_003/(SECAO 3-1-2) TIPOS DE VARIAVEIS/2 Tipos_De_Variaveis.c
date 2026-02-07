#include <stdio.h>

int main() {
    // 1. INT (Inteiros) -> Use %d ou %i
    int idade = 25;

    // 2. FLOAT (Decimais simples) -> Use %f
    float altura = 1.75;

    // 3. DOUBLE (Decimais de alta precisão) -> Use %lf (long float)
    double pi = 3.1415926535;

    // 4. CHAR (Um único caractere) -> Use %c
    char inicial = 'A';

    // 5. STRING (Cadeia de caracteres) -> Use %s
    // Nota: Em C usamos char* ou arrays para strings
    char *nome = "Joao";

    // --- COLOCANDO TUDO JUNTO NO PRINTF ---

    printf("Relatorio do Usuario:\n");
    printf("---------------------\n");

    // Você pode imprimir um por um:
    printf("Nome: %s\n", nome);

    // Ou misturar vários na mesma linha (a ordem importa!):
    printf("%s tem %d anos e mede %.2f metros.\n", nome, idade, altura);

    // Exemplo com char e double:
    printf("A inicial e %c e o valor de PI e %lf\n", inicial, pi);

    return 0;
}