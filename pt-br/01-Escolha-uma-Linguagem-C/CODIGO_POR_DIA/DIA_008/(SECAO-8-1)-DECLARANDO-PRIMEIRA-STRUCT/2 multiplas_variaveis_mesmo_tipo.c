#include <stdio.h>

struct Livro {
    char *titulo;
    int paginas;
};

int main() {
    // Criando dois "objetos" diferentes a partir do mesmo molde
    struct Livro livro1;
    struct Livro livro2;

    livro1.titulo = "O Guia do Beej";
    livro1.paginas = 400;

    livro2.titulo = "C Completo e Total";
    livro2.paginas = 800;

    printf("Livro A: %s (%d pags)\n", livro1.titulo, livro1.paginas);
    printf("Livro B: %s (%d pags)\n", livro2.titulo, livro2.paginas);

    return 0;
}