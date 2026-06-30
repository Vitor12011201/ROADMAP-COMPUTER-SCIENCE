#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Compreender a mecânica do 'badchar'. Ao passar o endereço de um ponteiro
   (&badchar), o strtoul altera o nosso ponteiro interno para que ele aponte exatamente
   para onde a conversão falhou, permitindo validações perfeitas de strings. */

int main() {
    // Uma string de configuração onde o usuário errou o dígito: meteu um 'x' no meio do decimal
    char *config_latencia = "120x5";

    // Criamos um ponteiro de caractere comum
    char *badchar;

    printf("Lendo configuracao: \"%s\"\n", config_latencia);

    /* strtoul espera receber um char** no segundo argumento.
       Passando '&badchar', estamos dando permissão para a função strtoul modificar
       o endereço para onde o NOSSO ponteiro local aponta. */
    unsigned long valor = strtoul(config_latencia, &badchar, 10);

    // Se o strtoul leu a string inteira com sucesso, o badchar vai parar no '\0' (fim da string)
    if (*badchar == '\0') {
        printf("[SUCESSO] Valor lido integralmente: %lu\n", valor);
    } else {
        printf("\n--- ERRO DETECTADO ---\n");
        printf("Consegui converter apenas a parte inicial: %lu\n", valor);
        printf("O caractere que quebrou a leitura foi:   '%c'\n", *badchar);
        printf("Texto restante que foi rejeitado:        \"%s\"\n", badchar);
    }

    return 0;
}