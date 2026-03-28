#include <stdio.h>

/* OBJECTIVE: Check if the file exists before attempting to use it.
 */

int main() {
    FILE *fp;

    // We try to open a file that does not exist
    fp = fopen("ghost_file.txt", "r");

    // If C cannot find the file, the pointer will be NULL
    if (fp == NULL) {
        printf("Error: The file was not found!\n");
    } else {
        printf("File opened successfully!\n");
        fclose(fp);
    }

    return 0;
}