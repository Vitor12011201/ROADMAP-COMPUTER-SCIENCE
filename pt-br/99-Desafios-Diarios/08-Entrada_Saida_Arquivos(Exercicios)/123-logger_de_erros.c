/* Objetivo: Criar um sistema que decide para onde enviar a informação.
1. Crie uma função chamada log_sistema(int tipo, char *mensagem).
2. Se o tipo for 0 (INFO), a função deve usar fprintf para mandar a mensagem para o stdout.
3. Se o tipo for 1 (ERRO), a função deve mandar para o stderr.
4. No main, peça ao usuário para digitar um número. Se o número for negativo, chame a função com o tipo ERRO. Se for positivo, chame com tipo INFO.*/

#include <stdio.h>

void log_sistema(int tipo, char *mensagem) {

    if (tipo > 0) {
        fprintf(stdout, "INFO: %s" , mensagem);
    } else {
        fprintf(stderr, "ERRO: %s", mensagem);
    }
}

int main() {

    int tipo_da_mensagem;
    char mensagem_exibida[50];
    fprintf(stdout, "Digite um numeros inteiro: \n");
    fscanf(stdin, "%d", &tipo_da_mensagem);
    fprintf(stdout, "\n");
    fprintf(stdout,"Digite uma mensagem: \n");
    fscanf(stdin,"%s", mensagem_exibida);

    log_sistema(tipo_da_mensagem, mensagem_exibida);

    return 0;

}