#include <stdio.h>
#include <string.h>

/*
 * Goal: Prove that strlen stops at the first '\0' it encounters.
 */
int main() {
    char text[] = "Good morning, world!"; // Original length: 20

    // Let's place a null terminator at the space index (index 4)
    text[4] = '\0';

    // Both printf %s and strlen will think the string is just "Good"
    printf("Modified text: %s\n", text);
    printf("New length via strlen: %zu\n", strlen(text));

    return 0;
}