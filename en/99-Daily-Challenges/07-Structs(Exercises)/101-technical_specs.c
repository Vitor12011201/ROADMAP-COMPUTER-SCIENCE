/* 1. Declare a struct Book in the global scope (outside of main) with: char *title, char *author, and int pages.
2. In main, declare the variable struct Book my_favorite;.
3. Assign the values using the dot operator (.).
4. Print the data in an organized way: "Book: [title], Author: [author] ([pages] pages)". */

#include <stdio.h>

struct book {
    char *title;
    char *author;
    int pages;
};

int main() {

    struct book my_favorite = {"One Piece", "Eiichiro Oda", 120};

    printf("My favorite book is: [%s]\n", my_favorite.title);
    printf("The author of this book is: [%s]\n", my_favorite.author);
    printf("The number of pages in this book is: [%d pages]\n", my_favorite.pages);

    return 0;
}