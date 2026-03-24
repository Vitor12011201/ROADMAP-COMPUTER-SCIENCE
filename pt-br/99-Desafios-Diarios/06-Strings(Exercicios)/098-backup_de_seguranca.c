/*Objetivo: Usar strcpy para proteger um dado original.
1. Peça para o usuário digitar uma palavra e guarde em char senha[50].
2. Faça um "backup" dessa palavra em outro array chamado char backup[50] usando strcpy.
3. Altere todos os caracteres da string entrada para '*' (um loop que vai até o \0).
4. Imprima a string entrada (cheia de asteriscos) e depois recupere o valor original imprimindo o backup.*/

#include <stdio.h>
#include <string.h>

int main() {

    char senha[50];
    printf("Digite uma senha: \n");
    scanf("%s", senha);
    char backup[50];
    strcpy(backup, senha);
    for (int i = 0; senha[i] != '\0'; i++) {
        senha[i] = '*';
    }
    printf("Senha digitada pela Usuario Criptografado [%s]\n", senha);
    printf("O BackUp da senha digitada pelo usuario [%s]\n", backup);

    return 0;
}