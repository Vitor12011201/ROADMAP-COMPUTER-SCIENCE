#include <stdio.h>

/* OBJETIVO: Percorrer uma string contendo uma sequência de algarismos e
   calcular a soma matemática de seus dígitos individuais usando o truque do Beej. */

int main() {
    // Uma string representando uma chave de ativação ou payload de dados
    char chave_num[] = "12345";
    int soma_total = 0;

    // Varrendo a string caractere por caractere até achar o terminador '\0'
    for (int i = 0; chave_num[i] != '\0'; i++) {
        // Converte o caractere atual para número e acumula
        soma_total += (chave_num[i] - '0');
    }

    printf("String analisada: \"%s\"\n", chave_num);
    printf("Soma matemática dos algarismos: %d (1+2+3+4+5)\n", soma_total);

    return 0;
}