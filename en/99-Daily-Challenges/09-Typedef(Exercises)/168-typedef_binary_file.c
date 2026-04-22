/* Objective: Combine Anonymous Typedef with Binary Files. We will use the "cleanest" approach shown in the text.
1. Create a 'typedef float Money;'.
2. Create an anonymous struct with typedef called 'Book' containing:
char title[50];
Money price;
3. In main, create a 'Book b1 = {"The Alchemist", 45.90};'.
4. Save this book into a file named 'library.bin'.
5. Read the file back into a new 'Book b2;' variable and print:
"Book: %s | Price: $ %.2f". */

#include <stdio.h>

typedef float Money;

typedef struct {
    char title[50];
    Money price;
} Book;

int main() {

    Book b1 = {.title = "The Alchemist", .price = 45.90};
    Book b2 = {0};

    FILE *fp;

    fp = fopen("library.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(&b1, sizeof(Book), 1, fp);

    fclose(fp);

    fp = fopen("library.bin", "rb");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    while (fread(&b2, sizeof(Book), 1, fp) > 0) {
        printf("Book: %s | Price: $ %.2f\n", b2.title, b2.price);
    }

    fclose(fp);

    return 0;
}