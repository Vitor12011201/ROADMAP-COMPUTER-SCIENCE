#include <stdio.h>

//O capítulo fala sobre diferenças de plataforma, compilador, WSL, Xcode etc.
// Então fiz um sistema que identifica qual sistema operacional esta sendo usado pelo usuario

int main(void) {
    printf("Olá mundo! \n");
#if defined(_WIN32)
    printf("Voce esta usando Windows\n");
#elif defined(__linux__)
    printf("Voce esta usando Linux\n");
#elif defined(__APPLE__)
    printf("Voce esta usando MacOS\n");
# else
    printf("Programa Desconhecido");
#endif

    return 0;
}