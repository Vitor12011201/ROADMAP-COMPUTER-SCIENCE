#include <stdio.h>

// 'nome' aponta para o primeiro caractere da string original
void deixar_anonimo(char *nome) {
    // Altera diretamente os primeiros caracteres da string original
    nome[0] = 'X';
    nome[1] = 'X';
    // O restante da string permanece igual
}

int main() {
    // Definimos uma string como um array de caracteres mutável
    char usuario[] = "Romario";

    printf("Usuario original: %s\n", usuario);

    // A função vai na memória de 'usuario' e troca 'Be' por 'XX'
    deixar_anonimo(usuario);

    // O resultado é visível aqui na main()
    printf("Usuario anonimo:  %s\n", usuario);

    return 0;
}