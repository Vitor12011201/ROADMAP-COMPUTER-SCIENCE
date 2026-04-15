/*Objetivo: Consolidar a gravação e leitura de múltiplos itens de uma vez só. O fwrite e o fread são extremamente poderosos porque podem lidar com blocos inteiros de memória com um único comando.
1. No seu código, crie um arquivo chamado precos.bin no modo "wb".
2. Crie um array de floats: float lista_precos[4] = {10.50, 25.90, 7.00, 100.25};.
3. Use o fwrite para gravar o array inteiro de uma vez só.
Dica: Em vez de 1 no terceiro argumento, você usará 4.
4. Feche o arquivo.
5. Reabra em modo "rb".
6. Crie um novo array vazio: float lista_lida[4];.
7. Use o fread para ler o arquivo inteiro e preencher o array lista_lida de uma vez só (sem usar loop para a leitura).
8.Use um loop for simples apenas para imprimir os valores do array lista_lida na tela e conferir se estão certos.*/

#include <stdio.h>

int main() {

    FILE *fp;
    float lista_preco[4] = {10.50 , 25.90 , 7.00, 100.25};
    float lista_lida[4];

    fp = fopen("preco.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

}