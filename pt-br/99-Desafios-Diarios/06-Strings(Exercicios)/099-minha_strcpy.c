/*Objetivo: Recriar a strcpy manualmente (igual você fez com a strlen).
1. Crie sua própria função: void minha_strcpy(char *destino, char *origem).
2. Use um loop while/for para copiar origem[i] para destino[i] até encontrar o \0.
Não esqueça: Você precisa copiar o \0 para o destino também!
4. No main, teste sua função copiando "Engenharia" para um array vazio e imprima o resultado.*/

#include <stdio.h>

void minha_strcpy(char *destino, char *origem) {
    int i = 0;
    for (i = 0; origem[i] != '\0'; i++) {
        destino[i] = origem[i];
    }
    destino[i] = '\0';
}

int main() {
    char frase_original[] = "Engenharia";
    char frase_vazia[20];
    minha_strcpy(frase_vazia,frase_original);
    printf("Isso que existe no array frase_original: [%s]\n", frase_original);
    printf("Isso que existe no array frase_vazia: [%s]\n", frase_vazia);

    return 0;
}