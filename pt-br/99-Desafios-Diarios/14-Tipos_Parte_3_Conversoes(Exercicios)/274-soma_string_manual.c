/* Objetivo: Combinar o truque do caractere com loops para processar uma string inteira caractere por caractere, somando seus valores individuais.
Instruções:
1. Declare uma string contendo apenas números: char *codigo = "12345";.
2. Crie uma variável int soma_total = 0;.
3. Use um loop while ou for para percorrer essa string até encontrar o '\0' (NUL terminator).
4. A cada iteração, pegue o caractere atual, converta-o para o seu valor numérico correspondente (subtraindo '0') e acumule o resultado na soma_total.
5. No final do loop, imprima a soma total (para a string "12345", o resultado deve ser $1+2+3+4+5 = 15$). */

#include <stdio.h>

int main()
{
    char *codigo = "12345";
    int soma_total = 0;
    int i = 0;

    while (codigo[i] != '\0')
    {
        int numero = codigo[i] - '0';
        soma_total = soma_total + numero;

        i++;
    }

    printf("Soma total: %d\n", soma_total);

    return 0;
}