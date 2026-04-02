/* Objective: Practice reading a single line and understand "maximum size."
1. Create a file named test.txt with a very long phrase (over 50 characters).
2. In the code, create a small buffer: char buffer[10];.
3. Use fgets(buffer, sizeof(buffer), fp); and print the result.
*/

#include <stdio.h>

int main() {

    FILE *fp;
    char s[10]; // Small buffer to demonstrate size limits

    fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("This file does not exist\n");
        return 1;
    }

    fputs("Everything a dream needs to be realized is someone who believes it can be realized\n", fp);

    fclose(fp);

    fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("This file does not exist\n");
        return 1;
    }

    // Single read: only fills the buffer (9 chars + null terminator)
    fgets(s, sizeof(s), fp);
    printf("The phrase without the While loop: \n");
    printf("%s\n", s);
    printf("\n");

    printf("The rest of the phrase inside the While loop: \n");

    // While loop: continues reading the rest of the file in 10-byte chunks
    while (fgets(s, sizeof(s), fp) != NULL) {
        printf("%s", s);
    }

    fclose(fp);

    return 0;
}