/* Objective: Use a loop to read an entire file, character by character.
1. Manually create a file named "secret.txt" and write "Cevada" inside it.
2. In your code, open the file in "r" (read) mode.
3. Use a while loop (to read letter by letter):
   int c;
   while ((c = fgetc(fp)) != EOF) {
       printf("%c", c);
   }
4. Challenge: Add a counter inside the loop to show, at the end, how many characters the file has in total. */

#include <stdio.h>

int main() {

    FILE *fp;
    int count = 0;

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

    int c;

    while ((c = fgetc(fp)) != EOF) {
        printf("%c\n", c);
        count++;
    }

    printf("\nTotal characters in file: %d\n", count);

    fclose(fp);

    return 0;
}