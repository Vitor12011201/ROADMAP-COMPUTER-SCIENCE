#include <stdio.h>

/* OBJECTIVE: Open a file named "hello.txt" and read only its first character.
 * The "r" mode stands for READ.
 */

int main() {
    FILE *fp; // Our file pointer (the "guide")

    // We try to open the file for reading
    fp = fopen("hello.txt", "r");

    // We read only ONE character using fgetc
    // We use 'int' because fgetc can return a special error value (EOF)
    int c = fgetc(fp);

    // Display the character on the screen
    printf("The first character in the file is: %c\n", c);

    // We close the file to free memory
    fclose(fp);

    return 0;
}