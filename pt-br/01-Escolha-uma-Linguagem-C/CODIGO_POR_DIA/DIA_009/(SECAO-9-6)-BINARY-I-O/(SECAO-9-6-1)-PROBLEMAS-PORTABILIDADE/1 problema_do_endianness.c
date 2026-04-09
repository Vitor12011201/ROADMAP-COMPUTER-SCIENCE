#include <stdio.h>

/* OBJETIVO: Demonstrar como um numero de 2 bytes pode ser invertido no disco.
 */

int main() {
    FILE *fp = fopen("teste_v.bin", "wb");
    // 0x1234 tem dois bytes: 12 (mais significativo) e 34 (menos significativo)
    unsigned short v = 0x1234;

    if (fp == NULL) return 1;

    fwrite(&v, sizeof(v), 1, fp);
    fclose(fp);

    // Se voce abrir este arquivo num editor Hex e ver "34 12",
    // parabens: sua maquina eh Little-Endian (inverte os bytes)!
    printf("Gravado. Verifique a ordem dos bytes com um Hex Viewer.\n");

    return 0;
}