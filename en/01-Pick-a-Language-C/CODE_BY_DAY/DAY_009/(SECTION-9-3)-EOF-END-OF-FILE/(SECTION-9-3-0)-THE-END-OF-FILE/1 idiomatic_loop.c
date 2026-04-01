#include <stdio.h>

/* OBJECTIVE: Use the classic C 'while' loop to read a file until the end.
 * We assign the character to 'c' and compare it with EOF in the same line.
 */

int main() {
    FILE *fp = fopen("hello.txt", "r");
    int c; // We use int to support the EOF value

    if (fp == NULL) return 1;

    // 1. fgetc reads the character -> 2. saves it in 'c' -> 3. compares if 'c' is the end (EOF)
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    fclose(fp);
    return 0;
}