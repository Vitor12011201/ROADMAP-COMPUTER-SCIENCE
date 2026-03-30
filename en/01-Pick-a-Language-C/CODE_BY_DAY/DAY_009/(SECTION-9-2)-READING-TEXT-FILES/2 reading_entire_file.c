#include <stdio.h>

/* OBJECTIVE: Read the file from beginning to end, character by character, using a loop.
 * The 'fp' (file pointer) advances automatically to the next character with each fgetc call.
 */

int main() {
    FILE *fp;
    int c;

    fp = fopen("hello.txt", "r");

    // While the character read is not EOF (End Of File)
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c); // Print the current character
    }

    fclose(fp);

    return 0;
}