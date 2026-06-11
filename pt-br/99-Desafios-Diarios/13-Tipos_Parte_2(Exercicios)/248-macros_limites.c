/* Objetivo: Usar as macros reais do <limits.h> para descobrir os extremos do seu próprio processador.
Instruções:
1. Inclua <stdio.h> e <limits.h>.
2. Imprima os valores máximos de um short (SHRT_MAX), de um long (LONG_MAX) e de um long long (LLONG_MAX).
3. Use o especificador %d para o short, %ld para o long, e %lld para o long long.
Reflexão: Olhando para o resultado, o seu long tem o mesmo tamanho do int ou do long long? */

#include <stdio.h>
#include <limits.h>

int main() {

    printf("Valor maximo armazenado em um shor: %d\n", SHRT_MAX);
    printf("\n");
    printf("Valor maximo armazenado em um long: %ld\n", LONG_MAX);
    printf("\n");
    printf("Valor maximo armazenado em um long long: %lld\n", LLONG_MAX);

    return 0;
}