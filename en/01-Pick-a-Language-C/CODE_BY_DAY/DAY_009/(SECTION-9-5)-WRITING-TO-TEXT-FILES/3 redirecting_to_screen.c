#include <stdio.h>

/* OBJECTIVE: Prove that stdout is a FILE* pointer and can be used like a file.
 * This helps you test your code in the console before writing to the disk.
 */

int main() {
    FILE *fp;

    // Instead of using fopen, we point to the standard output (screen)
    fp = stdout;

    // Everything we send to 'fp' will now appear in the console!
    fputc('B', fp);
    fprintf(fp, "\nThe value is: %d\n", 32);
    fputs("Hello, world!\n", fp);

    // We don't need to call fclose(stdout); the system handles it.
    return 0;
}