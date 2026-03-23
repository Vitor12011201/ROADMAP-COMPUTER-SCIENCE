#include <stdio.h>

/*
 * Goal: Show the logic of copying byte by byte until the \0.
 */
void my_strcpy(char *destination, char *source) {
    int i = 0;

    // As long as the source character is not the end (\0)
    while (source[i] != '\0') {
        destination[i] = source[i]; // Copy the character
        i++;
    }

    // IMPORTANT: Don't forget to put the \0 at the end of the destination!
    destination[i] = '\0';
}

int main() {
    char source[] = "Manual copy";
    char destination[20];

    my_strcpy(destination, source);

    printf("Destination: %s\n", destination);
    return 0;
}