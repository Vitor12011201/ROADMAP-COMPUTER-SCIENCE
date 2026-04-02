/* Objective: Manipulate read characters before displaying them.
1. Read the hello.txt file character by character.
2. Logic: If the character is a vowel (a, e, i, o, u), replace it with an asterisk * when printing with printf.
3. If it is not a vowel, print the character normally.
Example: "Hello" becomes "H*ll*"
*/

#include <stdio.h>

int main() {

    FILE *fp;
    int c;

    fp = fopen("hello.txt", "w");

    if (fp == NULL) {
        printf("This file was not found\n");
        return 1;
    }

    fputs("Hello, World\n", fp);

    fclose(fp);

    fp = fopen("hello.txt", "r");

    if (fp == NULL) {
        printf("This file was not found\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            c = '*';
            }
        printf("%c", c);
    }

    fclose(fp);

    return 0;
}