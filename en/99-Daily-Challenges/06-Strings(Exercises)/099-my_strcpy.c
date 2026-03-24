/* Objective: Recreate strcpy manually (just like you did with strlen).
1. Create your own function: void my_strcpy(char *destination, char *source).
2. Use a while/for loop to copy source[i] to destination[i] until you find the \0.
Don't forget: You need to copy the \0 (null terminator) to the destination as well!
4. In main, test your function by copying "Engineering" to an empty array and print the result. */

#include <stdio.h>

void my_strcpy(char *destination, char *source) {
    int i = 0;
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

int main() {
    char original_phrase[] = "Engineering";
    char empty_phrase[20];

    my_strcpy(empty_phrase, original_phrase);

    printf("Content in original_phrase: [%s]\n", original_phrase);
    printf("Content in empty_phrase:    [%s]\n", empty_phrase);

    return 0;
}