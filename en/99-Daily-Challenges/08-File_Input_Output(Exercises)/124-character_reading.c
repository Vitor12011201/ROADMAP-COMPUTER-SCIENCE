/* Objective: Read the first characters of a file manually.
1. Manually create a file named "secret.txt" and write "Cevada" inside it.
2. In your code, open the file in "r" (read) mode.
3. Call fgetc(fp) three times in a row, storing each result in a different int variable.
4. Print the three characters.
Notice how the fp pointer "moves" forward to the next letter with each call!
5. Don't forget fclose(fp). */

#include <stdio.h>

int main() {

    FILE *fp;

    fp = fopen("secret.txt", "w");

    if (fp == NULL) {
        printf("The file could not be created\n");
        return 1;
    }

    fputs("Cevada", fp);
    fclose(fp);

    fp = fopen("secret.txt", "r");

    if (fp == NULL) {
        printf("The file does not exist\n");
        return 1;
    }

    int letter_1 = fgetc(fp);
    int letter_2 = fgetc(fp);
    int letter_3 = fgetc(fp);

    printf("Displaying the characters: %c, %c, %c\n", letter_1, letter_2, letter_3);

    fclose(fp);

    return 0;
}