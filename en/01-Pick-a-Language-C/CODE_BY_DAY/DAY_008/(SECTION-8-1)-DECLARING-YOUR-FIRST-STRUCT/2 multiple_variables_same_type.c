#include <stdio.h>

struct Book {
    char *title;
    int pages;
};

int main() {
    // Creating two different "objects" (instances) from the same blueprint
    struct Book book1;
    struct Book book2;

    book1.title = "Beej's Guide";
    book1.pages = 400;

    book2.title = "C Complete and Total";
    book2.pages = 800;

    printf("Book A: %s (%d pages)\n", book1.title, book1.pages);
    printf("Book B: %s (%d pages)\n", book2.title, book2.pages);

    return 0;
}