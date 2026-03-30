#include <stdio.h>

/* OBJECTIVE: Ensure the program doesn't crash if the file doesn't exist.
 * If fopen fails, it returns NULL. Always check for this!
 */

int main() {
    FILE *fp;

    // We try to open a file that might not exist
    fp = fopen("file_that_does_not_exist.txt", "r");

    if (fp == NULL) {
        // If it is NULL, we warn the user and stop the program
        printf("Error: Could not find or open the file!\n");
        return 1;
    }

    printf("File opened successfully!\n");
    fclose(fp);

    return 0;
}