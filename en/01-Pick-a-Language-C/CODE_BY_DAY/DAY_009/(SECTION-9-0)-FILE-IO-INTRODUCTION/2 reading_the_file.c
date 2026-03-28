#include <stdio.h>

/* OBJECTIVE: Open the file to read what is written inside it.
 */

int main() {
    FILE *fp;
    char text[100]; // A "buffer" to store what we are going to read

    // We open it in "r" mode, which stands for READ
    fp = fopen("notes.txt", "r");

    // fgets reads an entire line from the file and stores it in the 'text' variable
    fgets(text, 100, fp);

    // Displays what was read from the file on the screen
    printf("Content of the file: %s\n", text);

    fclose(fp);
    return 0;
}