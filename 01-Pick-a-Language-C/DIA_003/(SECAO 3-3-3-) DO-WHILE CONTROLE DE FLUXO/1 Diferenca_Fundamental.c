#include <stdio.h>

int main() {
    int i = 10;

    // TESTE COM WHILE:
    // Ele pergunta: "10 < 10?" -> Não. Então não faz nada.
    while (i < 10) {
        printf("Isso nunca aparecera!\n");
        i++;
    }

    // TESTE COM DO-WHILE:
    // Ele primeiro faz o 'do' (faca), e só no fim checa o 'while'.
    do {
        printf("do-while: Eu apareco pelo menos uma vez! (i = %d)\n", i);
        i++;
    } while (i < 10);

    printf("All done!\n");
    return 0;
}