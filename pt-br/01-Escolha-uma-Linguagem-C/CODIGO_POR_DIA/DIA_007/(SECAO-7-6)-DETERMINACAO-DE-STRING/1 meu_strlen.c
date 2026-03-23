#include <stdio.h>

/*
 * Objetivo: Mostrar como percorremos a memoria ate achar o byte zero (\0).
 */
int meu_strlen(char *s) {
    int contador = 0;

    // O loop continua ENQUANTO o caractere na posicao 'contador'
    // for diferente do terminador nulo '\0'
    while (s[contador] != '\0') {
        contador++; // Encontrou um caractere valido? Soma 1 e pula pro proximo
    }

    // Quando o loop para, o contador tem exatamente o numero de
    // letras antes do zero.
    return contador;
}

int main() {
    char *frase = "C e simples"; // O C coloca o \0 no final sozinho
    int tamanho = meu_strlen(frase);

    printf("A frase: \"%s\" tem %d caracteres.\n", frase, tamanho);
    return 0;
}