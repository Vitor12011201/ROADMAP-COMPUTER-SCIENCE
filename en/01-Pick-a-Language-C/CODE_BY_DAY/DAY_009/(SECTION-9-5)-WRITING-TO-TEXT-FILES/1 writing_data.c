#include <stdio.h>

/* OBJECTIVE: Use fprintf to write formatted variables into a file.
 * fprintf works exactly like printf, but sends the text to the file pointer (fp).
 */

int main() {
    FILE *fp;
    int age = 25;
    float height = 1.75;

    // Opening in "w" (Write) mode. If the file already existed, it is cleared now!
    fp = fopen("data.txt", "w");

    if (fp == NULL) return 1;

    // Writing text mixed with variables to the file
    fprintf(fp, "Age: %d years old\n", age);
    fprintf(fp, "Height: %.2f meters\n", height);

    fclose(fp); // Save and close the file stream
    return 0;
}