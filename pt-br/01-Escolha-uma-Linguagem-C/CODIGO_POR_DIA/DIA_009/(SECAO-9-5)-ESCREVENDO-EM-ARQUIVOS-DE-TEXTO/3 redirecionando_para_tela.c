#include <stdio.h>

/* OBJETIVO: Provar que o stdout eh um ponteiro do tipo FILE* e pode ser usado como arquivo.
 * Isso ajuda a testar seu codigo no console antes de gravar no disco.
 */

int main() {
    FILE *fp;

    // Em vez de fopen, apontamos para a saida padrao (tela)
    fp = stdout;

    // Tudo o que enviarmos para 'fp' aparecera no console!
    fputc('B', fp);
    fprintf(fp, "\nO valor eh: %d\n", 32);
    fputs("Hello, world!\n", fp);

    // Nao precisamos de fclose(stdout), o sistema cuida disso.
    return 0;
}