/* Objetivo: Usar o modo "a" (Append) para criar um histórico que nunca se apaga.
1. Crie uma função void adicionar_log(char *msg).
2. Dentro dessa função, abra o arquivo sistema.log no modo "a".
3. Use fprintf para escrever a mensagem, mas adicione um contador ou um prefixo "LOG: ".
4. No main, chame essa função 3 vezes com mensagens diferentes (ex: "Sistema iniciado", "Conexão estabelecida", "Erro no sensor").
5. Verifique o arquivo. Ele deve ter as 3 mensagens, mesmo que você feche e abra o programa de novo.*/

#include <stdio.h>

void adicionar_log(char *msg)
{
    FILE *fp;

    fp = fopen("arquivo.log" , "a");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return;
    }

    fprintf(fp, "LOG: %s", msg);

    fclose(fp);

}

int main()
{
    adicionar_log("Sistema Iniciado\n");
    adicionar_log("Conexao Estabelecida\n");
    adicionar_log("Erro no sensor\n");

    return 0;
}