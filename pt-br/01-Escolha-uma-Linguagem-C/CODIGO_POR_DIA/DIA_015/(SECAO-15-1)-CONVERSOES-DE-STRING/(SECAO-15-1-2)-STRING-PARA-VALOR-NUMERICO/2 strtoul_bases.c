#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Utilizar 'strtoul' para decodificar strings textuais que representam
   números em bases diferentes (Binário e Hexadecimal), simulando leitura de dados brutos. */

int main() {
    char *payload_binario = "101010"; // 42 em binário
    char *payload_hex = "2A";         // 42 em hexadecimal

    // Convertendo base 2 (Binário). O segundo argumento NULL indica que vamos ignorar erros por enquanto.
    unsigned long bin_para_num = strtoul(payload_binario, NULL, 2);

    // Convertendo base 16 (Hexadecimal).
    unsigned long hex_para_num = strtoul(payload_hex, NULL, 16);

    printf("--- Decodificador de Bases ---\n");
    printf("String \"101010\" na base 2  = %lu em decimal\n", bin_para_num);
    printf("String \"2A\"     na base 16 = %lu em decimal\n", hex_para_num);

    return 0;
}