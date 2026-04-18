/*Objetivo: fazer um que mistura binário com busca do usuário.
1. Crie uma struct Produto com int id e float preco.
2. Grave um array de 3 produtos no arquivo produtos.bin.
3. Feche e reabra para leitura.
4. Peça para o usuário digitar um ID para buscar.
5. Percorra o arquivo com while (fread(...)) e, se encontrar o ID digitado, mostre o preço desse produto.
6. Se terminar o arquivo e não achar nada, diga "Produto não cadastrado".*/

#include <stdio.h>

struct Produto {
    int id;
    float preco;
};

int main() {
    int id_usuario = 0;
    int encontrado = 0;
    int i = 0;
    struct Produto p_1[3] = {
        {.id = 123456, .preco = 50.34},
        {.id = 654321, .preco = 32.58},
        {.id = 849394, .preco = 78.40}
    };
    struct Produto temp = {0};

    FILE *fp;

    fp = fopen("produtos.bin" , "wb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(p_1, sizeof(struct Produto), 3, fp);

    fclose(fp);

    fp = fopen("produtos.bin","rb");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir esse arquivo\n");
        return 1;

    }

    printf("Digite o ID do produto que deseja encontrar: \n");
    scanf("%d", &id_usuario);

    while (fread(&temp, sizeof(struct Produto), 1, fp) > 0) {
        if (id_usuario == temp.id) {
            encontrado = 1;
            break;
        }
        i++;
    }

    if (encontrado == 1) {
        printf("O ID %d, tem o preco: R$: %.2f\n", temp.id, temp.preco);
    } else
    {
        printf("ID do produto nao encontrado\n");
    }

    fclose(fp);

    return 0;

}