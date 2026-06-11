/* Objetivo: Simular o famoso bug do "Ano 2038" (Y2K38), onde sistemas de 32 bits vão travar porque o tempo em segundos vai estourar o limite de um int com sinal.
Instruções:
O maior valor que um int de 4 bytes (32 bits) pode guardar é 2147483647.
1. Declare uma variável int tempo_trinta_e_dois = 2147483647;.
2. Declare uma variável long long tempo_sessenta_e_quatro = 2147483647;.
3. Adicione 1 a ambas as variáveis.
4. Imprima o novo valor de cada uma (lembre-se de usar %d e %lld).
O Desafio: Explique no comentário o que aconteceu com o relógio de 32 bits e por que migrar os sistemas para long long (64 bits) resolve o problema pelos próximos bilhões de anos.*/
/*
Resposta: O relógio de 32 bits sofreu um overflow. O valor 2147483647 é o maior
número que um int com sinal de 32 bits pode armazenar. Ao adicionar 1,
o valor ultrapassou esse limite e "voltou" para -2147483648, causando
um comportamento incorreto.

Esse é o mesmo problema do Bug do Ano 2038: sistemas que armazenam o
tempo em um int de 32 bits vão estourar quando o contador de segundos
desde 01/01/1970 ultrapassar 2147483647.

Já o long long utiliza normalmente 64 bits, possuindo um limite muito
maior (9223372036854775807). Por isso, ele consegue armazenar a mesma
contagem de tempo por bilhões de anos sem sofrer overflow, resolvendo
o problema do Ano 2038.
*/

#include <stdio.h>

int main()
{

    int tempo_trinta_e_dois = 2147483647;

    long long tempo_sessenta_e_quatro = 2147483647;

    tempo_trinta_e_dois = tempo_trinta_e_dois + 1;

    tempo_sessenta_e_quatro = tempo_sessenta_e_quatro + 1;

    printf("%d\n", tempo_trinta_e_dois);

    printf("%lld", tempo_sessenta_e_quatro);

    return 0;

}