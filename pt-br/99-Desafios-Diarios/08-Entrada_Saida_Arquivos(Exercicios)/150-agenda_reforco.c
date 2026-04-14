/*Objetivo: Praticar a busca por strings específicas dentro de um arquivo e lidar com múltiplos dados (nome e telefone).
1. No seu código, crie um arquivo chamado agenda.txt no modo de escrita.
2. Escreva três contatos nele (Nome e Telefone), cada um em uma linha:
Alice 991234567
Bruno 998765432
Caio 995554444
3. Feche o arquivo.
4. Reabra o arquivo agenda.txt no modo de leitura.
5. Peça para o usuário digitar um nome para buscar na agenda.
6. Use um loop while para percorrer o arquivo.
7. Se o nome lido no arquivo for igual ao nome digitado pelo usuário, exiba o telefone dele.
8. Se o loop terminar e você não tiver encontrado o nome, exiba: "Contato não encontrado".*/

#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char nome[50];
    int numero_telefone;
    char nome_digitado[50];
    int encontrado = 0;

    fp = fopen("agenda.txt" , "w");

    if (fp == NULL) {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(fp, "Alice 991234567\n");
    fprintf(fp, "Bruno 998765432\n");
    fprintf(fp, "Caio 995554444\n");

    fclose(fp);

    fp = fopen("agenda.txt" , "r");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    printf("Digite o nome da pessoa que deseja encontrar: \n");
    scanf("%s", nome_digitado);

    while (fscanf(fp, "%s %d", nome , &numero_telefone) != EOF) {
        if (strcmp(nome, nome_digitado) == 0) {
            printf("O numero de telefone do %s, e [%d]\n", nome , numero_telefone);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Numero de telefone nao encontrado\n");
    }

    fclose(fp);

    return 0;

}