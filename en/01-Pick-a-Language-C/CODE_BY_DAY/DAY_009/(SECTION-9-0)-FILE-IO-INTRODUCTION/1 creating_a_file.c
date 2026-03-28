#include <stdio.h>

/* OBJECTIVE: Create a file and write a word inside it.
 */

int main() {
    // FILE* is the "pointer" that holds the open file handle
    FILE *fp;

    // fopen("name", "mode"). "w" stands for WRITE
    fp = fopen("notes.txt", "w");

    // fprintf works like a regular printf, but sends data to the 'fp' file
    fprintf(fp, "Studying C with Beej!");

    // Close the file (mandatory!)
    fclose(fp);

    printf("File created successfully!\n");
    return 0;
}