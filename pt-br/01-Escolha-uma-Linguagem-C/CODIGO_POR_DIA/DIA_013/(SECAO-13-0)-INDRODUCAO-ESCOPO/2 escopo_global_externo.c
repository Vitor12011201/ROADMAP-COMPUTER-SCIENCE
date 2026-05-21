#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Comparar variáveis globais (escopo de arquivo) com variáveis
   locais. Mostrar que uma variável local de mesmo nome oculta a global.
   Introduzir 'extern' para acessar variável global de outro arquivo. */

// VARIÁVEL GLOBAL (escopo de arquivo)
int contador = 100;   // visível em todo o resto deste arquivo

void funcao_exemplo() {
    // Aqui a variável global 'contador' é visível (não há local com mesmo nome)
    printf("Dentro de funcao_exemplo: contador global = %d\n", contador);

    // Modifica a global
    contador = 200;
    printf("funcao_exemplo modificou contador para %d\n", contador);
}

int main() {
    printf("Início do main: contador global = %d\n", contador);

    // Cria uma variável LOCAL de mesmo nome - OCULTA a global neste escopo
    int contador = 999;
    printf("Dentro do main (variável local): contador = %d\n", contador);

    // Para acessar a global mesmo com a local presente, podemos usar escopo explícito
    // (não há palavra-chave 'global' em C; mas podemos nos referir à global
    // se não houver local, ou usar ponteiros. Vamos demonstrar chamando função)
    funcao_exemplo();   // lá dentro, a global é visível e foi modificada

    printf("De volta ao main: contador local ainda é %d\n", contador);
    printf("Contador global agora vale %d (acessar diretamente?\n", contador);
    printf("Para ver a global, não podemos porque a local a oculta.\n");

    // Se precisássemos acessar a global mesmo com local, uma solução é usar ponteiro global
    // ou declarar uma referência 'extern' em outro lugar, mas aqui apenas ilustramos.

    // Simulando o acesso à global através de um ponteiro (não é padrão, mas didático)
    // O correto é evitar nomes iguais para global e local.

    printf("Dica: Evite nomes conflitantes. A global ainda existe na memória.\n");

    return 0;
}