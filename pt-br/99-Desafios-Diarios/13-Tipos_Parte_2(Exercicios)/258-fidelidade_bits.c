/* Objetivo: Simular o salvamento de um dado binário em formato de texto e observar a perda de dados se usarmos a precisão errada.
Instruções:
1. No main, declare um double original = 0.12345678901234559; (o mesmo número de 17 dígitos do livro).
2. Simule dois "arquivos de salvamento" usando printf:
3. O primeiro simula salvar apenas com a precisão padrão de digitação: imprima o número usando %.15f.
4. O segundo simula salvar com fidelidade de bits: imprima usando %.17f (que é o DBL_DECIMAL_DIG).
Pergunta: Olhe os dois resultados na tela. Se você fosse ler o primeiro resultado de volta em um programa, você recuperaria o 0.12345678901234559 original? Comente no código. */
/* Resposta: Não necessariamente.
    Ao salvar usando apenas %.15f, alguns dígitos são perdidos
    por arredondamento. Se esse valor fosse lido novamente por
    outro programa (por exemplo, usando scanf), poderíamos obter
    um double ligeiramente diferente do original.
    Já usando %.17f (ou DBL_DECIMAL_DIG), há dígitos suficientes
    para reconstruir exatamente o valor armazenado em memória,
    preservando todos os bits do double.
    */

#include <stdio.h>

int main()
{
    double original = 0.12345678901234559;

    printf("Valor original armazenado na memoria:\n");
    printf("%.17f\n\n", original);

    printf("Salvando com 15 casas decimais:\n");
    printf("%.15f\n\n", original);

    printf("Salvando com 17 casas decimais:\n");
    printf("%.17f\n", original);

    return 0;
}

