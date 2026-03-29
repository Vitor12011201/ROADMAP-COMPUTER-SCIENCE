#include <stdio.h>

/* OBJETIVO: Usar o canal de erro padrão (stderr) para mensagens importantes.
 */

int main() {
    // Saida normal
    fprintf(stdout, "Processando dados do sistema...\n");

    // Se algo der errado, mandamos para o stderr
    // Isso eh boa pratica: separar mensagens comuns de mensagens de ERRO.
    fprintf(stderr, "ALERTA: O sistema encontrou um problema!\n");

    return 0;
}